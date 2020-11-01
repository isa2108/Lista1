/*18. Escrever a tabuada de multiplicação do um número lido na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int n, tab, i;
	printf("Digite a tabuada que deseja:");
	scanf("%d",&n);
	
	for(i=0;i<11;i++){
	
	
	tab=n*i;
	
	printf("%d X %d=%d\n",n,i,tab);
}
	
	system("pause");
	return 0;
	
}
