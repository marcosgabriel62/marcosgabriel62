#include<stdio.h>
#include <locale.h> 
 
int main()
{

	  setlocale(LC_ALL, "Portuguese");
	  
      int i, limite, x;
      int tempo_espera = 0, tempo_resposta = 0, total = 0, contador = 0, quantum=3;
      float tempo_espera_medio, tempo_resposta_medio;
      
      do{
      		printf("Informar o numero total de processos:\t");
      		scanf(" %d", &limite);
      		if (limite<=0){
	  			printf("Não é possivel fazer 0 processos\n");
	  		}
	  		
  	   }while(limite<=0);
  	   
	  x = limite; 
      
      int arrival_time[limite], burst_time[limite], temp[limite];
      
 
      for(i = 0; i < limite; i++)
      {
            printf("\nInformar detalhes dos processos[%d]\n", i + 1);
 
            printf("Arrival Time:\t");
 
            scanf("%d", &arrival_time[i]);
 
            printf("Burst Time:\t");
 
            scanf("%d", &burst_time[i]);
 
            temp[i] = burst_time[i];
      }
 	
	  printf ("\n*************************************************************************************************");	
      printf ("\nRound Robin (Quantum considerado: %d)\n", quantum);
      printf("\nIdentificador\t\tBurst Time\t Arrival time\t\t Waiting time\n");
      
	  for(total = 0, i = 0; x != 0;)
      {
            if(temp[i] <= quantum && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  contador = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - quantum;
                  total = total + quantum;
            }
            if(temp[i] == 0 && contador == 1)
            {
                  x--;
                  printf("\nProcesso[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
                  tempo_espera = tempo_espera + total - arrival_time[i] - burst_time[i];
                  tempo_resposta = tempo_resposta + total - arrival_time[i];
                  contador = 0;
            }
            if(i == limite - 1)
            {
                  i = 0;
            }
            else if(arrival_time[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      tempo_espera_medio = tempo_espera * 1.0 / limite;
      tempo_resposta_medio = tempo_resposta * 1.0 / limite;
      printf("\n\nTempo de espera médio:\t%f", tempo_espera_medio);
      printf("\nTempo de resposta médio:\t%f\n\n", tempo_resposta_medio);
      printf ("*************************************************************************************************\n");
      printf ("First Come First Serve\n");
      

      int tempo_espera_II[limite], tempo_resposta_II[limite], j; 
	  tempo_espera_II[0]=0;  
	  tempo_espera_medio=0;
	  tempo_resposta_medio=0;
	  
      for(i=1;i<limite;i++)
      {
        tempo_espera_II[i]=0;
           for(j=0;j<i;j++)
            tempo_espera_II[i]+=burst_time[j];
      }
 
      printf("\nIdentificador\t\tBurst Time\tArrival time\t\tWaiting time\n");
 
      for(i=0;i<limite;i++)
      {
        tempo_resposta_II[i]=burst_time[i]+tempo_espera_II[i];
        tempo_espera_medio+=tempo_espera_II[i];
        tempo_resposta_medio+=tempo_resposta_II[i];
        printf("\nProcesso[%d]\t\t%d\t\t%d\t\t\t%d",i+1,burst_time[i],tempo_espera_II[i],tempo_resposta_II[i]);
      }
 
      tempo_espera_medio=tempo_espera_medio/i;
      tempo_resposta_medio=tempo_resposta_medio/i;
      printf("\n\nTempo de espera médio:\t%f",tempo_espera_medio);
      printf("\nTempo de resposta médio:\t%f",tempo_resposta_medio);
 
      return 0;
}	
    	
     

      
      
      
      
      
      
      

