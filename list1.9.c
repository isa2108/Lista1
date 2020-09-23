/*9. Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, utilizando-se um automóvel
que faz N Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média
da viagem. Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA ? TEMPO *
VELOCIDADE. Tendo o valor da distancia, basta calcular a quantidade de litros de combustível utilizada na
viagem com a fórmula: LITROS_USADOS ? DISTANCIA /N. O programa em C deverá apresentar os valores da
distância percorrida e a quantidade de litros utilizados na viagem.*/

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
