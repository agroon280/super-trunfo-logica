#include <stdio.h>

 int main() {
int populacao1, populacao2, turismo1,turismo2;
int maior1, maior2, maior3, maior4, maior5, maior6, menor;
float area1, area2, pib1, pib2;
float superpoder1; 
float superpoder2;  
float densidade1, densidade2;
float densidadeinver1, densidadeinver2; 
float renda1, renda2;
char codigo1[10] ,codigo2[10], cidade1[10],cidade2[10], estado1[10], estado2[10];
//criadas as variaveis, prossiga para o proximo passo, para usar printf e scanf

//escrever as variaveis separadamente
printf("digite o estado:\n");
scanf("%s[^\n]", estado1);

printf("digite o estado:\n");
scanf("%s[\n]", estado2);

printf("digite o codigo:\n");//A letra do estado seguida de um número
scanf("%s[\n]", codigo1);

printf("digite o codigo:\n");
scanf("%s[\n]", codigo2);

printf("digite a cidade:\n");
scanf("%s[\n]", cidade1);

printf("digite a cidade:\n");
scanf("%s[\n]", cidade2);

printf("digite a populaçao:\n");
scanf("%d", &populacao1);

printf("digite a populaçao: \n");
scanf("%d", &populacao2);

printf("digite area km²: \n ");
scanf("%f", &area1);

printf("digite area km²: \n ");
scanf("%f", &area2 );

printf("digite o PIB: \n ");
scanf("%f", &pib1);

printf("digite o PIB: \n ");
scanf("%f", &pib2);

printf("digite pontos turisticos : \n");
scanf("%d", &turismo1);

printf("digite pontos turisticos : \n");
scanf("%d", &turismo2);
printf(" ");
densidadeinver1 = area1 / populacao1;
densidadeinver2 = area2 / populacao2;

superpoder1 = populacao1 + pib1 + renda1+ turismo1+ area1+densidadeinver1;
superpoder2 = populacao2 + pib2 + renda2+ turismo2+ area2+densidadeinver2;
 
densidade1 = populacao1 /area1;
densidade2 = populacao2 / area2;

renda1 = pib1 / populacao1;
renda2 = pib2 / populacao2;

//terminado o segundo estagio do codigo, fazer a parte final de saida das informaçoes

//DADOS CARTA 1
printf("Estado: %9s \n", estado2);
printf("codigo: %9s \n", codigo1);
printf("cidade: %9s \n", cidade1);
printf("Populaçao: %d milhoes \n", populacao1);
printf("area: %.2f km² \n", area1);
printf("PIB: %.2f Bilhoes de reais \n", pib1);
printf("Turismo: %d lugares 2\n", turismo1);
printf("densidade populacional: %.2f pessoa/km2 2\n", densidade1);
printf("renda per capta: %.2f reais por pessoa 2\n", renda1);
printf("superpoder: %f \n", superpoder1);
printf("\n");

//DADOS CARTA 2
printf("Estado: %9s \n", estado2);
printf("codigo: %9s \n", codigo2);
printf("cidade: %9s \n", cidade2);
printf("Populaçao: %d milhoes \n", populacao2);
printf("area: %.2f km² \n", area2);
printf("PIB: %.2f Bilhoes de reais \n", pib2);
printf("Turismo: %d lugares \n", turismo2);
printf("densidade populacional: %.2f pessoa/km^2 \n", densidade2);
printf("renda per capta: %.2f reais por pessoa \n", renda2);
printf("superpoder: %.2f \n", superpoder2);
printf(" ");
//agora, comparar as cartas 
maior1 = (populacao1>populacao2) ? 1 : 0;
maior2 = (area1>area2) ? 1 : 0;
maior3 = (pib1>pib2) ? 1 :0;
maior4 = (turismo1>turismo2) ? 1 : 0;
menor = (densidade1<densidade2) ? 1: 0;
maior5 = (renda1 > renda2) ? 0: 1;
maior6 = (superpoder1> superpoder2) ? 1 : 0;
printf(" ");
printf("1 = carta 1 \t 0 = carta 2");
printf("populaçao:carta %d venceu \n", maior1);
printf("area:carta %d venceu \n",maior2);
printf("PIB:carta %d venceu \n",maior3);
printf("ponto turisicos:carta %d venceu \n",maior4);
printf("densidade populacional:carta %d venceu \n",menor);
printf("renda per capta: %d venceu \n",maior5);
printf("superpoder:carta %d venceu \n",maior6);

return 0;

 }