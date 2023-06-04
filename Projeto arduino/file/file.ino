//Declaration of musical notes used.
#define NOTE_C4  262
#define NOTE_G3  196

//Conecting to BLYNK
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your WiFi credentials.
char ssid[] = "Marcos";
char pass[] = "casa12102196";
char auth[] = "YkJNEdjCwdscfnQjn6xdU1mCcLdFRMhz";

//Declaration of ESP32 used pins.
const int BUZZZER_PIN = 13;
const int MOTION_SENSOR_PIN = 18; 
const int GLP_SENSOR_PIN = 14;
const int LED_PIN = 25;
const int CO2_SENSOR_PIN = 26;
const int BUTTON_PIN = 15;

//Declaration of variables
int brightness = 0;  
int fadeAmount = 5;  
int fade_counter = 0;
int button_counter = 0;
int low_led_bright = 10;
int high_led_bright = 255; 
int pinMotionSensorStateCurrent  = 1; 
int pinMotionSensorStatePrevious = 1;  
int gas_glp_value = 1;
int gas_co2_value = 1;
int button = 0;
int digital_motion_button = 0;
int glp_gas_button = 0;
int co2_gas_button = 0;
int panic_button = 0;
int stop_alarm_button=0;
bool motion_alarm = false;
bool panic = false;
bool glp_gas_alarm = true;
bool co2_gas_alarm = true;

//Declaration of vectors used to make the buzzer work
int melodyAlarm[] = {
  NOTE_C4, NOTE_G3
};
int noteDurations[] = {
  4, 4
};
int noteDurations2[] = {
  1, 1
};

//Bringing from blyng values of the buttons
BLYNK_WRITE(V0){
  digital_motion_button = param.asInt(); 
}

BLYNK_WRITE(V1){
  glp_gas_button = param.asInt(); 
}

BLYNK_WRITE(V2){
  co2_gas_button = param.asInt(); 
}
BLYNK_WRITE(V3){
  panic_button = param.asInt(); 
}

BLYNK_WRITE(V4){
  stop_alarm_button = param.asInt(); 
}

void setup(){
  Serial.begin(9600);           
  pinMode(MOTION_SENSOR_PIN, INPUT); 
  pinMode(GLP_SENSOR_PIN, INPUT);
  pinMode(CO2_SENSOR_PIN, INPUT);
  pinMode(BUZZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(auth, ssid, pass); 
  Blynk.virtualWrite(V8, HIGH); //Turning on glp alarm led 
  Blynk.virtualWrite(V6, HIGH); //Turning on co2 alarm led 
  Blynk.virtualWrite(V5, LOW); //Turning off motion alarm led 
  Blynk.virtualWrite(V7, LOW); //Turning off alarm led 
  Serial.println("Setup ok!"); 
  firstStart();
}

//Void with the alarm function 
void Alarm(int number){
    Serial.println("Alarm Turned On!!!");
    Blynk.virtualWrite(V7, HIGH);
    if (number==1){
        while (button==0 && stop_alarm_button==0){
            for (int thisNote = 0; thisNote < 2; thisNote++){ 
                int noteDuration = 300 / noteDurations[thisNote];
                tone(BUZZZER_PIN, melodyAlarm[thisNote], noteDuration/1);
                int pauseBetweenNotes = noteDuration * 1.00;
                delay(pauseBetweenNotes);
                button=digitalRead(BUTTON_PIN);
                Blynk.run(); 
            }
        }
    }
       
    if (number==2){
        while (button==0 && stop_alarm_button==0){
            for (int thisNote = 0; thisNote < 2; thisNote++){ 
                int noteDuration = 300 / noteDurations2[thisNote];
                tone(BUZZZER_PIN, melodyAlarm[thisNote], (noteDuration/1));
                int pauseBetweenNotes = noteDuration * 1.00;
                delay(pauseBetweenNotes);
                button=digitalRead(BUTTON_PIN);
                Blynk.run(); 
            }
        }    
    }
    noTone(BUZZZER_PIN);
    Blynk.virtualWrite(V7, LOW); //Turn the alarming led in blynk app off
      
    if (panic==false){
      Serial.println("Alarm Turned off. Some seconds before restart reading the sensors");  
      Waiting(1000);//wait just when panic button is not in use.
    }else{
      Serial.println("Panic alarm Turned off");  
      panic = false; //Return panic bool to the initial state
      if (motion_alarm==true){
          analogWrite(LED_PIN, low_led_bright);
      }
    }       
}

/*This void make fade in/out on the led and can be used instead the function delay*/
void Waiting(int time){
    Blynk.virtualWrite(V9, HIGH);
       for(fade_counter=0; fade_counter<=time; fade_counter++){
          analogWrite(LED_PIN, brightness);
          brightness = brightness + fadeAmount;
          if (brightness <= 0 || brightness >= 255){
             fadeAmount = -fadeAmount;
          }
          delay(30);
          Blynk.run();
       }
    Blynk.virtualWrite(V9, LOW);
    if (panic==true){
        panic=false;
    }
    if (motion_alarm==false){
        analogWrite(LED_PIN, low_led_bright);  
    }else{
        analogWrite(LED_PIN, high_led_bright);  
    }
}

void firstStart(){
    Serial.println("Warming up the sensors.");
    Waiting(1500);
    Serial.println("Sensors OK! Ready to go! Motion sensor turned of by default");
}
    
void loop(){ 

        //conecting to WIFI and Blynk
        Blynk.run(); 

        //receiving the data coming out of the sensors and puting the data in variables.
        pinMotionSensorStatePrevious = pinMotionSensorStateCurrent; 
        pinMotionSensorStateCurrent = digitalRead(MOTION_SENSOR_PIN);  
        gas_glp_value=digitalRead(GLP_SENSOR_PIN); 
        gas_co2_value=digitalRead(CO2_SENSOR_PIN); 
        button=digitalRead(BUTTON_PIN);

        //panic button first.
        if (panic_button == 1){
            panic=true;  
            Alarm(1);
        }

        if (button == 1){
            Serial.println("The physical button is beeing pressed");
            button_counter++;
            Serial.println(button_counter);
            }else{
                button_counter=0;
            }

        if (glp_gas_button == 1){
            if (glp_gas_alarm==true){
                glp_gas_alarm=false;
                Blynk.virtualWrite(V8, LOW);   
                Serial.println("GLP Alarm Button Pressed. Turned off");
                delay(5000);
                }else{
                    glp_gas_alarm=true;
                    Blynk.virtualWrite(V8, HIGH);
                    delay(5000);
                    Serial.println("GLP Alarm Button Pressed. Turned on");
                }
        }

        if (co2_gas_button == 1){
            if (co2_gas_alarm==true){
                  co2_gas_alarm=false;
                  Blynk.virtualWrite(V6, LOW);   
                  Serial.println("CO2 Alarm Button Pressed. Turned off");
                  delay(5000);
                  }else{
                      co2_gas_alarm=true;
                      Blynk.virtualWrite(V6, HIGH);
                      delay(5000);
                      Serial.println("CO2 Alarm Button Pressed. Turned on");
                  }
         }

        //if the button be pressed for the right time long we turn off the motion sensor if it was turned on or we turn on if was turned off
        if (button_counter==40 || digital_motion_button==1){
              if (motion_alarm==false){
                    motion_alarm=true;
                    Serial.println("Motion sensor turned on. Run forest, run");
                    Waiting(2000);
                    button_counter=0;
                    analogWrite(LED_PIN, high_led_bright); 
                    Blynk.virtualWrite(V5, HIGH); 
                    }else{
                        motion_alarm=false;
                        Serial.println("Motion sensor turned off. easy boy, easy");
                        button_counter=0;
                        analogWrite(LED_PIN, low_led_bright); 
                        Blynk.virtualWrite(V5, LOW);  
                        delay (5000);//para não correr o risco de desligar e ligar novamente sem querer
                    }
          }

        if (pinMotionSensorStatePrevious == 0 && pinMotionSensorStateCurrent == 1 && motion_alarm==true && button == 0 && digital_motion_button == 0){  
              Serial.println("Motion detected!");
              Blynk.logEvent("motion_detected","Motion detected!!!");
              Alarm(1);
         }
      
        
        if (gas_glp_value == 0 && gas_co2_value==1 && glp_gas_alarm == true){   
              Serial.println("GLP Gas detected");
              Blynk.logEvent("glp_gas_detected","GLP Gas detected!!!");
              Alarm(2);
          }

        
        if (gas_co2_value==0 && gas_glp_value==1 && co2_gas_alarm == true){   
              Serial.println("CO2 gas detected");
              Blynk.logEvent("co2_alarm","CO2 Gas detected!!!");
              Alarm(2);
          }

        
        if (gas_co2_value==0 && gas_glp_value==0 && co2_gas_alarm == true && glp_gas_alarm == true){   
              Serial.println("CO2 and GLP gas detected");
              Blynk.logEvent("glp_co2_gas_detected","CO2 and GLP Gas detected!!!");
              Alarm(2);
          }  
  }
        