/*14. Construa um programa em C para determinar se o indivíduo está com um peso favorável. Essa situação é
determinada através do IMC (Índice de Massa Corpórea), que é definida como sendo a relação entre o peso
(PESO) e o quadrado da Altura (ALTURA) do indivíduo.*/

#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	float pes, alt, imc;
	
	printf("Digite seu peso:");
	scanf("%f",&pes);
	
	printf("Digite a sua altura:");
	scanf("%f",&alt);
	
	imc=pes/(alt*alt);
	
	if(imc<20.0){
	printf("Abaixo do peso.\n");
	}
	
	else if(imc>20.0 && imc<=25.0){
		printf("Peso normal.\n");
	}
	
	else if(imc>25.0 && imc<=30.0){
		printf("Sobre peso.\n");
	}
	
	else if(imc>30.0 && imc<=40.0){
		printf("Obeso.\n");
	}
	
	else if(imc>40.0){
		printf("Obeso Morbido.\n");
	}
	
	system("pause");
	return 0;
	}
	
	

