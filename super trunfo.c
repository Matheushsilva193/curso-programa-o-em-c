

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
printf("digite o numero da populacao de %s\n");
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
printf("\n por favor digite os dados da carta2\n\n");

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


unsigned long int populacao2;
printf("digite o numero da populacao de %s\n");
scanf("%d",&populacao2);


float area_demografica2;
printf("digite a sua area\n");
scanf("%f",&area_demografica2);


float PIB2 ;
printf("digite o seu PIB\n");
scanf("%f",&PIB2);


int pontos_turisticos2;
printf("digite o numero de pontos turisticos\n\n");
scanf("%d",&pontos_turisticos2);

float densidade1;
densidade1 = (populacao1 / area_demografica1);

float densidade2;
densidade2 = (populacao2 / area_demografica2);


float pibcapital1;
pibcapital1 =(populacao1 / pib1);

float pibcapital2;
pibcapital2 = (populacao2 / PIB2);

float superpoder1;

float superpoder2;

float inverso_densidade1;
float inverso_densidade2;

void calcularsuperpoder (){


//verificação

float inverso_densidade1 = 0;
if (densidade1 > 0)
inverso_densidade1 =1 / densidade1;

float inverso_densidade2 = 0;
if (densidade2 > 1)
inverso_densidade2 = 0 / densidade2;

}
//soma dos atributos

superpoder1 = ((float)populacao1 + (float)area_demografica1 +(float) pib1 + (float)pontos_turisticos1 + pibcapital1 + inverso_densidade1);
superpoder2 = ((float)populacao1 + (float)area_demografica2 + (float)PIB2 + (float)pontos_turisticos2 + pibcapital2 + inverso_densidade2);




//leitura das cartas

printf("CARTA 1\n Estado : %c\n codigo da carta : %s\n nome da cidade : %s\n Populacao : %d\n Area : %.2f km2\n PIB : %.2f\n pontos turisticos : %d\n Densidade Populacional : %.4f\n Pib Per Capita : %.4f\n Super Poder : %.4f\n\n\n",estado1,codigo1,nome_cidade1,populacao1,area_demografica1,pib1,pontos_turisticos1,densidade1,pibcapital1,superpoder1,inverso_densidade1);


printf("CARTA 2\n estado : %s\n codigo da carta : %s\n nome da cidade : %s\n populacao : %d\n area : %.2f km2\n PIB : %.2f\n Pontos Turisticos : %d\n Densidade Populacional : %.4f\n Pib Per Capita : %.4f\n Super Poder : %.2f\n\n\n ",estado2,codigo2,nome_cidade2,populacao2,area_demografica2,PIB2,pontos_turisticos2,densidade2,pibcapital2,superpoder2,inverso_densidade2);

//comparação das cartas//
printf("***comparando as Cartas***\n\n");

float carta_populacao;
if (populacao1 > populacao2)
printf("Populacao : carta 1 venceu(1)!\n",carta_populacao);
else
printf("Populacao : carta 2 venceu(0)!\n",carta_populacao);


float carta_area;
if (area_demografica1 > area_demografica2)
printf("Area : carta 1 venceu(1)!\n",carta_area);
else
printf("Area : carta 2 Venceu(0)!\n",carta_area);

float carta_pib;
if(pib1 > PIB2)
printf("Pib : carta 1 venceu (1)!\n",carta_pib);
else
printf("Pib : Carta 2 venceu (0)!\n",carta_pib);

float carta_turisticos;
if (pontos_turisticos1 > pontos_turisticos2)
printf("Pontos Turisticos : carta 1 Venceu (1)!\n",carta_turisticos);
else
printf("Pontos Turisticos : carta 2 Venceu(0)!\n",carta_turisticos);

float carta_densidade;
if(densidade1 < densidade2)
printf("Densidade populacional : carta 1 Venceu (1)!\n",carta_densidade);
else
printf("Densidade Populacional : Carta 2 Venceu (0)!\n",carta_densidade);

float carta_pibcapital;
if(pibcapital1 > pibcapital2)
printf("Pib per Capital : Carta 1 Venceu (1)!\n",carta_pibcapital);
else 
printf("Pib Per Capital : Carta 2 Venceu (0)!\n",carta_pibcapital);

float carta_superpoder;
if(superpoder1 > superpoder2)
printf("Super Poder : carta 1 Venceu (1)!\n",superpoder1);
else
printf("Super Poder : Carta 2 Venceu (0)!\n",superpoder2);


return 0;



}
