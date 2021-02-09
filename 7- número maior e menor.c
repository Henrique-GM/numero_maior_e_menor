#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float numero, i, maior = 0, menor = 0, auxiliar = 0 ;
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n Digite um número...: ") ;
		scanf ("%f", &numero) ;
		
		if (auxiliar == 0) // Esse auxílio serve como condição. 
		{
			maior = numero ;
			menor = numero ;	
			auxiliar++ ; // Esse auxiliar agora está valendo 1, o que sai da condição if se não, vai repetir o último número digitado no maior e no menor.
		}
		else if (numero > maior)
		{
			maior = numero ;		
		}
		else if (numero < menor)
		{
			menor = numero ;
		}
	}
	
	printf ("\n O maior número foi %.2f e o menor foi %.2f", maior, menor) ;
	
	return 0 ;
	system ("pause") ;
}
