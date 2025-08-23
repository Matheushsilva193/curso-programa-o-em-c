#include <stdio.h>

int main(){

char nome[10]= "matheus";
printf("digite o seu primeiro nome");
scanf("%s",&nome);

int idade=20;
printf("digite sua idade");
scanf("%d",&idade);


int peso = 70;
printf("digite o seu peso");
scanf("%d",&peso);

float altura = 1.68;
printf("digite a sua altura");
scanf("%.2f\n",&altura);

printf("me chamo %s\n tenho %d anos , peso %d kilos \n e tenho %.2f de altura \n",nome,idade,peso,altura);

    
return 0;



}