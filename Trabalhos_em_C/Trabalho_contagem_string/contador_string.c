#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h> 

int wordscounter(char *word, char *letter){

int letters_counted;

int i, r=strlen(word);

for (i=0; i<r; i++)
	{
		if (word[i]==letter[0]){
		letters_counted++;
		}	
	}
	
	printf ("Numero de vezes que %c aparece: %d", letter[0], letters_counted);
	
}


int main ()
{
	char word[] = "racecar";
	char letter []= "r";
	wordscounter(word, letter);

}
