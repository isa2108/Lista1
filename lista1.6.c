/*6. Faça um programa que receba dois números e mostre qual deles é o maior.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int x,y;
	
	printf("Digite o primeiro numero:");
	scanf("%d",&x);
	
    printf("Digite o segundo numero:");
	scanf("%d",&y);
	
	if(x>y){
		
		printf("%d e o maior numero.",x);
	}
	else{
		printf("%d e o maior numero.\n",y);
	}
	system("pause");
	return 0;
}
