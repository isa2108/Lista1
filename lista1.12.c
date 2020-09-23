#include<stdio.h>
#include<stdlib.h>

 int main()
 { 
 int n;
   
   printf("Digite um numero:");
   scanf("%d",&n);
   
   if(n%2==0){
   	printf("Este numero e par!\n");
   }
   
   else{
   	printf("Este numero e impar!\n");
   }
   
   system("pause");
   return 0;
 }
