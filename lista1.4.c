//4. Faça um programa para calcular a área de um cilindro dada sua formula.A=2.pi.r(r+h)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	
    float a, r, h;

    printf("Digite o valor do raio:\n");
    scanf("%f",&r);
    
    printf("Digite o valor da altura:\n");
    scanf("%f",&h);
    
    a=2*3.14*r*(r+h);
	
	printf("Area=%f\n", a);
	
	system("pause");
	return 0; 
}

