//declaration of musical notes used.
#define NOTE_C4  262
#define NOTE_G3  196

//declaration of ESP32 used pins.
const int BUZZZER_PIN = 13;
const int MOTION_SENSOR_PIN = 18; 
const int GLP_SENSOR_PIN = 14;
const int LED_PIN = 25;
const int CO2_SENSOR_PIN = 26;
const int BUTTON_PIN = 15;

//declaration of variables
int brightness = 0;  
int fadeAmount = 5;  
int counter_1 = 0;
int counter_2 = 0;
int low_led_bright = 10;
int high_led_bright = 255; 
int pinMotionSensorStateCurrent  = 1; 
int pinMotionSensorStatePrevious = 1;  
int gas_glp_value = 1;
int gas_co2_value = 1;
int button = 0;
bool isCold = true;
bool motion_alarm = false;

//declaration of vectors used to make the buzzer work
int melodyAlarm[] = {
  NOTE_C4, NOTE_G3
};
int noteDurations[] = {
  4, 4
};
int noteDurations2[] = {
  1, 1
};

void setup() {
  Serial.begin(9600);           
  pinMode(MOTION_SENSOR_PIN, INPUT); 
  pinMode(GLP_SENSOR_PIN, INPUT);
  pinMode(CO2_SENSOR_PIN, INPUT);
  pinMode(BUZZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Setup ok!"); 
}
//void with the alarm function 
void Alarm(int number)
    {
       if (number==1){
         while (button==0){
            for (int thisNote = 0; thisNote < 2; thisNote++) { 
                  int noteDuration = 300 / noteDurations[thisNote];
                  tone(BUZZZER_PIN, melodyAlarm[thisNote], noteDuration/1);
                  int pauseBetweenNotes = noteDuration * 1.00;
                  delay(pauseBetweenNotes);
                  button=digitalRead(BUTTON_PIN);
               }
          }
    
       }
       
       if (number==2){
          while (button==0){
          {
            for (int thisNote = 0; thisNote < 2; thisNote++) 
               { 
                  int noteDuration = 300 / noteDurations2[thisNote];
                  tone(BUZZZER_PIN, melodyAlarm[thisNote], (noteDuration/1));
                  int pauseBetweenNotes = noteDuration * 1.00;
                  delay(pauseBetweenNotes);
                  button=digitalRead(BUTTON_PIN);
               }
          }
            
       }
    }
    noTone(BUZZZER_PIN);
    Serial.println("Alarm Turned off by the button! 15 seconds before restart reading the sensors");
    delay(15000);
    }

  /*This void make fade in/out on the led and can be used instead the function delay*/
  void Waiting(int time){
  
      for(counter_1=0; counter_1<=time; counter_1++)

          {
            analogWrite(LED_PIN, brightness);
            brightness = brightness + fadeAmount;
            if (brightness <= 0 || brightness >= 255) 
              {
              fadeAmount = -fadeAmount;
              }
          delay(30);
          }
  }

void loop() 
    { 
        //if the sensors are cold so we wait some time for warm-up.
        if (isCold==true){
          isCold=false;
          Serial.println("Warming up the sensors.");
          Waiting(1000);
          Serial.println("Sensors OK! Ready to go! Motion sensor turned of by default");
          analogWrite(LED_PIN, low_led_bright);
        }
        
        //receiving the data coming out of the sensors and puting the data in variables.
        pinMotionSensorStatePrevious = pinMotionSensorStateCurrent; 
        pinMotionSensorStateCurrent = digitalRead(MOTION_SENSOR_PIN);  
        gas_glp_value=digitalRead(GLP_SENSOR_PIN); 
        gas_co2_value=digitalRead(CO2_SENSOR_PIN); 
        button=digitalRead(BUTTON_PIN);

        //looks if button it's pressed or not
        if (button == 1)
            {
              Serial.println("The button is beeing pressed");
              counter_2++;
            }else{
              counter_2=0;
            }

        //if the button be pressed for the right time long we turn off the motion sensor if it was turned on or we turn on if was turned off
        if (counter_2==40){
            if (motion_alarm==false)
                {
                  motion_alarm=true;
                  Serial.println("Motion sensor turned on. Run forest, run");
                  Waiting(2000);
                  counter_2=0;
                  analogWrite(LED_PIN, high_led_bright);  
                }else{
                  motion_alarm=false;
                  Serial.println("Motion sensor turned off. easy boy, easy");
                  counter_2=0;
                  analogWrite(LED_PIN, low_led_bright);  
                  delay (5000);//para não correr o risco de desligar e ligar novamente sem querer
                }
            }

        //
        if (pinMotionSensorStatePrevious == 0 && pinMotionSensorStateCurrent == 1 && motion_alarm==true && button == 0){  
            Serial.println("Motion detected!");
            Alarm(1);
          }
      
        //
        if (gas_glp_value == 0 & gas_co2_value==1){   
            Serial.println("GLP Gas detected");
            Alarm(2);
          }

        //
        if (gas_co2_value==0 && gas_glp_value==1){   
            Serial.println("CO2 gas detected");
            Alarm(2);
          }

        //
        if (gas_co2_value==0 && gas_glp_value==0){   
            Serial.println("CO2 and GLP gas detected");
            Alarm(2);
          }  
    }
        