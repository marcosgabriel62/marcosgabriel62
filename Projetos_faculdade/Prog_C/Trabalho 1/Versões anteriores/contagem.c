#include <stdio.h>

int main (){
	int qtd, aux[2001], n, i=0, j=0;
	
	for (i=0; i<2001; i++) {
		aux[i] = 0;
	}
	scanf("%d", &qtd);
	
	for(i=0; i<qtd; i++){
		scanf("%d", &n);
		aux[n]++;	
	}
	
	for(i=0; i<2001; i++) {
		for (j=0; j<aux[i]; j++){
			if (aux[i]>0){
				printf	("(%d, %d);\n", i, aux[i]);
				break;
			}
			
		}	
	}
	
	return 0;
	
	
	}
	

