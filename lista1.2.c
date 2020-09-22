//Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps.
#include<stdio.h>
#include<stdlib.h>

int main()

{
	
	int m, conv;
	
	printf("Digite o valor em mbps:");
	scanf("%d",&m);
	
	conv= m * 1000;
	
	printf("%d kbps.", conv);
	
	system("pause");
	return 0;	
}
