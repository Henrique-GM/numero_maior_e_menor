#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
	setlocale (LC_ALL, "portuguese") ;
	
	float numero, i, maior = 0, menor = 0, auxiliar = 0 ;
	
	for (i = 0; i < 10; i++)
	{
		printf ("\n Digite um n�mero...: ") ;
		scanf ("%f", &numero) ;
		
		if (auxiliar == 0) // Esse aux�lio serve como condi��o. 
		{
			maior = numero ;
			menor = numero ;	
			auxiliar++ ; // Esse auxiliar agora est� valendo 1, o que sai da condi��o if se n�o, vai repetir o �ltimo n�mero digitado no maior e no menor.
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
	
	printf ("\n O maior n�mero foi %.2f e o menor foi %.2f", maior, menor) ;
	
	return 0 ;
	system ("pause") ;
}
