

#include <stdio.h>

int main(){

//carta 1
char estado1;
printf("digite o seu estado\n");
scanf("%c",&estado1);

char codigo1[5];
printf("digite o codigo da sua carta\n");
scanf("%s",&codigo1);


char nome_cidade1[50];
printf("digite o nome da cidade\n");
scanf("%s",&nome_cidade1);


int populacao1;
printf("digite o numero da populacao\n");
scanf("%d",&populacao1);


float area_demografica1;
printf("digite sua area\n");
scanf("%f",&area_demografica1);


float pib1;
printf("digite seu PIB\n");
scanf("%f",&pib1);


int pontos_turisticos1;
printf("digite o numero de pontos turisticos\n");
scanf("%d",&pontos_turisticos1);

//exibir dados de carta2
printf("por favor digite os dados da carta2\n");

//carta 2

char estado2[5];
printf("digite o estado\n");
scanf("%s",&estado2);


char codigo2[5];
printf("digite o codigo da sua carta\n");
scanf("%s",&codigo2);


char nome_cidade2[50];
printf("digite o nome da cidade\n");
scanf("%s",&nome_cidade2);


int populacao2;
printf("digite o numero da populacao\n");
scanf("%d",&populacao2);


float area_demografica2;
printf("digite a sua area\n");
scanf("%f",&area_demografica2);


float PIB2 ;
printf("digite o seu PIB\n");
scanf("%f",&PIB2);


int pontos_turisticos2;
printf("digite o numero de pontos turisticos");
scanf("%d",&pontos_turisticos2);


//leitura das cartas

printf("CARTA 1\n Estado : %c\n codigo da carta : %s\n nome da cidade : %s\n Populacao : %d\n Area : %.2f km2\n PIB : %.2f\n pontos turisticos : %d\n ",estado1,codigo1,nome_cidade1,populacao1,area_demografica1,pib1,pontos_turisticos1);


printf("CARTA 2\n estado : %s\n codigo da carta : %s\n nome da cidade : %s\n populacao : %d\n area : %.2f km2\n PIB : %.2f\n Pontos Turisticos : %d\n",estado2,codigo2,nome_cidade2,populacao2,area_demografica2,PIB2,pontos_turisticos2);



return 0;



}
