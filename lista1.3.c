#include<stdio.h>
#include<stdlib.h>
int main(){
	int val;
	
	printf("Informe um numero de 1 a 7: ");
	scanf("%d",&val);
	
	switch(val){
	
	case 1:
		printf("Domingo\n");
	break;
	
	case 2:
		printf("Segunda feira\n");
	break;
	
	case 3:
		printf("Terca feira\n");
	break;
	
	case 4:
		printf("Quarta feira\n");
	break;
	
	case 5:
		printf("Quinta feira\n");
	break;
	
	case 6:
		printf("Sexta feira\n");
	break;
	
	case 7:
		printf("Sabado\n");
	break;
	
}
	
	
	
	system("pause");
	return 0;
}
