/*7. Um reality show realizou uma prova onde os participantes tinham que buscas bolas de 3 cores diferentes, e
de acordo com a tabela abaixo cada um teria uma pontuação:
? Bola Verde: 10 pontos
? Bola amarela: 5 pontos
? Bola branca: 3 pontos
Construa um programa em C que leia a quantidade de bolas de cada cor e apresente a pontuação final do
participante.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int v, a, b, total;
	
	printf("Bolas verdes:");
	scanf("%d",&v);
	
	printf("Bolas amarelas:");
	scanf("%d",&a);
	
	printf("Bolas brancas:");
	scanf("%d",&b);
	
	total=(v*10)+(a*5)+(b*3);
	
	printf("Pontuaçao final:%d\n", total);
	
	system("pause");
	return 0;
}
