/*9. Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem, utilizando-se um autom�vel
que faz N Km por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade m�dia
da viagem. Desta forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA ? TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combust�vel utilizada na
viagem com a f�rmula: LITROS_USADOS ? DISTANCIA /N. O programa em C dever� apresentar os valores da
dist�ncia percorrida e a quantidade de litros utilizados na viagem.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float t, vm, dist, lit, n;
	
	printf("Digite o tempo da viagem:");
	scanf("%f",&t);
	
	printf("Digite a velocidade media da viagem:");
	scanf("%f",&vm);
	
	printf("Digite quantos km o automovel faz por litro:");
	scanf("%f",&n);
	dist=t * vm;
	printf("Distancia percorrida:%f\n",dist);
	
	lit=dist/n;
	
	printf("Quantidade de combustivel gasto na viagem:%f\n",lit);
	
	system("pause");
	return 0;
    
    
	
	
}
