/*8. O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e
dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 25% e os
impostos de 42%, escrever um programa em C que receba o custo de f�brica de um carro e escreva o custo
ao consumidor.*/

#include<stdio.h>
#include<stdlib.h>

  int main ()
  {
  	float fab, con;
	  
    printf("Digite o custo de fabrica:");
    scanf("%f",&fab);
    
    con=fab + ((fab*25)/100) + ((fab*42)/100);
    
    printf("Custo ao consumidor:%f\n", con);
    
    system("pause");
    return 0;
    
    
  }
