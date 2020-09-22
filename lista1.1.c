#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

  int main()
  {
	 setlocale(LC_ALL, "Portuguese");
  
  float cot, real, dol;
  
  printf("Digite a cotação do dolar:");
  scanf("%f", &cot);
  
  printf("Digite o valor em real a ser convertido:");
  scanf("%f", &real);
  
  dol= real/cot;
   
   printf("O valor em dolar e de: %.2f\n ",dol);
   
   system("pause");

return 0;
  
}
