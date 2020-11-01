/*19. Crie um programa em C que leia um valor e informe se ele é primo. Um número primo é divisível só por 1 e
ele mesmo.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int val, i, cont=0;
	
	printf("Digite um numero:");
	scanf("%d",&val); 
	
	for(i=1;i<=val;i++);
	
	
	if(val%i==0){
		cont++;
	if(cont ==2);
	printf("O numero %d e primo!\n",val);
}
	else{
	printf("O numero %d nao e primo\n",val);
}
	system ("pause");
	return 0;
}
