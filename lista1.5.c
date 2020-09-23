/*5. Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
O número digitado ao quadrado 
• A raiz quadrada do número digitado*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

   int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, n2,raiz;
	
	printf("Digite um numero:");
	scanf("%d",&n);
	
	n2=n*n;
	raiz = sqrt(n);
	if(n>=0){
	
	printf("%d²=%d\n",n,n2);
	printf("Raiz quadrada: %d\n",raiz);
	}
	
	else {
		printf("Este numero e negativo.\n");
	}
	
	system("pause");
	return 0;
}
