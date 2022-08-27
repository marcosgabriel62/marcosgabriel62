#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define energetico_valor 4.50
#define percentual_desconto 4/100
#define quantidade_minima_desconto 50
#define qtd_maxima_pedidos 10
#define icms 18/100
#define ipi 4/100
#define pis 1.86/100
#define cofins 8.54/100
//setado via define varios parametros para que ficasse dinamico

//estrutura criada para gerar array de nome e quantidade de energéticos
struct dados_pedido
	{
    	int qtd_energeticos[qtd_maxima_pedidos];
    	char nome[qtd_maxima_pedidos][128];
	};
    
struct dados_pedido todos_dados;

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont = 0, i;
	double total_pedido, valor_icms, valor_pis, valor_cofins, valor_ipi; 
	double total_impostos, total_geral, total_geral_impostos, total_desconto;
	char resposta;
	
	printf ("Bem vindo ao sistema de pedidos!\n");
	
	//repetição executada até o usuario quiser sair ou chegar no limite setado via define
    do{
        printf ("\nDigite o nome da empresa: ");
        scanf("%s",&todos_dados.nome[cont]);
        printf ("\nDigite a quantidade de energéticos: ");
        scanf("%d",&todos_dados.qtd_energeticos[cont]);
        printf ("\nDeseja incluir mais pedidos? (S para sim e qualquer caracter para não): ");
        scanf(" %c",&resposta);
        cont++;      
    }while ((resposta=='S'||resposta=='s')&&(cont<qtd_maxima_pedidos));

	//laço de repetição com fim na quantidade de vezes que foram incluidas novos pedidos
	for(i = 0; i < cont; i++)
  		{
    		printf("\nNome da empresa: %s\n",todos_dados.nome[i]);
			total_pedido=energetico_valor*todos_dados.qtd_energeticos[i];
			//calculo do desconto
			total_desconto=0;
			if (todos_dados.qtd_energeticos[i]>=quantidade_minima_desconto)
				{
				total_desconto=total_pedido*percentual_desconto;
				total_pedido=total_pedido-total_desconto;
			}
			//calculo dos impostos
			valor_icms=total_pedido*icms;
			valor_ipi=total_pedido*ipi;
			valor_pis=total_pedido*pis;
			valor_cofins=total_pedido*cofins;
			//calculos dos valores parciais e novos totais 
			total_impostos=valor_icms+valor_ipi+valor_pis+valor_cofins;
			total_geral_impostos=total_geral_impostos+total_impostos;
			total_geral=total_geral+total_pedido;
			//colocando na tela dados do pedido
			printf("ICMS: R$:%f\n",valor_icms);
			printf("IPI: R$:%f\n",valor_ipi);
			printf("PIS: R$:%f\n",valor_pis);
			printf("COFINS: R$:%f\n",valor_cofins);
			printf("Valor do desconto: R$: %f\n", total_desconto);
			printf("Total do pedido: R$:%f\n",total_impostos+total_pedido);
			printf("\n\n");
  		}		
  	//printa na tela os totais	
  	printf("\nTotal de impostos: R$:%f\n",total_geral_impostos);
  	printf("Total de mercadorias: R$:%f\n",total_geral);
  	printf("Total de mercadorias: R$:%f\n",total_geral+total_geral_impostos);
	printf("\n\n");	

}

