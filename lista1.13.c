/*13. Voc� foi encarregado para desenvolver um programa com objetivo de armazenar os pontos do campeonato
interno de futebol do IFSULDEMINAS, assim seu programa deve receber o nome e os gols de dois times, e
apresentar a pontua��o que cada um deve receber pelo jogo, levando-se em considera��o que uma vit�ria
d� 3 pontos, empate 1 ponto e derrota 0 ponto.*/
#include<stdio.h>
#include<stdlib.h>

    int main()
{
	char n1[99], n2[99];
	int g1, g2;
	
	printf("Digite o nome do primeiro time:");
	scanf("%s",&n1);
	
	printf("Digite o nome do segundo time:");
	scanf("%s",&n2);
	
	printf("Digite a quantidade de gols que o primeiro time fez:\n");
	scanf("%d",&g1);
	
	printf("Digite a quantidade de gols que o segundo time fez:\n");
	scanf("%d",&g2);
	
	printf("\nRESULTADO:\n %s %d X %s %d\n\n\nfhf",n1,g1,n2,g2);
	
	if(g1>g2){
    printf("PONTUA�AO:\n %s=3",n1);
}
    else if(g1==g2){
    	printf("PONTUA�AO:\n %s=1 %s=1",n1,n2);
	} 
	else if(g1<g2){
		printf("PONTUA�AO:\n %s=0 %s=3\n",n1,n2);
	}
	
	system("pause");
	return 0;
}
