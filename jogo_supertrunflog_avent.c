#include <stdio.h>

 int main() {
int populacao1, populacao2, turismo1,turismo2,opcaomenu;
float area1, area2, pib1, pib2;
float superpoder1; 
float superpoder2;  
float densidadeinver1, densidadeinver2; 
float renda1, renda2;
char codigo1[10] ,codigo2[10], cidade1[10],cidade2[10], estado1[10], estado2[10];
//criadas as variaveis, prossiga para o proximo passo, para usar printf e scanf

//menu principal
printf("#### MENU PRINCIPAL ####\n");
printf("ESCOLHA OS DADOS A SEREM COMPARADOS:\n");
printf("1. populacao\n");
printf("2. turismo\n");
printf("3. area\n");
printf("4. pib\n");
printf("5. superpoder\n");
printf("6. densidade demografica\n");
printf("7. renda\n");
printf("8. saida\n");
scanf("%d", &opcaomenu);

//dar valor as variaveis, para comparacao
printf("digite o estado:\n");
scanf(" %s[^\n]", estado1);

printf("digite o estado:\n");
scanf(" %s[^\n]", estado2);

printf("digite o codigo:\n");//letra do estado seguida de um número
scanf(" %s[^\n]", codigo1);

printf("digite o codigo:\n");
scanf(" %s[^\n]", codigo2);

printf("digite a cidade:\n");
scanf(" %s[^\n]", cidade1);

printf("digite a cidade:\n");
scanf(" %s[^\n]", cidade2);

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

renda1 = pib1 / populacao1;
renda2 = pib2 / populacao2;

//DADOS CARTA 1
printf("DADOS DAS CIDADES\n");
printf("Estado: %9s \n", estado2);
printf("codigo: %9s \n", codigo1);
printf("cidade: %9s \n", cidade1);
printf("Populaçao: %d milhoes \n", populacao1);
printf("area: %.2f km² \n", area1);
printf("PIB: %.2f Bilhoes de reais \n", pib1);
printf("Turismo: %d lugares 2\n", turismo1);
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
printf("renda per capta: %.2f reais por pessoa \n", renda2);
printf("superpoder: %.2f \n", superpoder2);
printf("\n ");

//fazer a parte final de comparacao e saida das informaçoes.
switch (opcaomenu)
{
case 1:
    if(populacao1 > populacao2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(populacao2 > populacao1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
case 2:
    if(turismo1 > turismo2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(turismo2 > turismo1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    case 3:
    if(area1 > area2){
        printf("parabens...a cidade %s\n", cidade1);
    }else if(area2 > area1){
        printf("parabens...a cidade %s\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 4:
        if(pib1 >pib2){
        printf("parabens...a cidade %s\n", cidade1);
    }else if(pib2 > pib1){
        printf("parabens...a cidade %s\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 5:
    if(superpoder1 > superpoder2){
        printf("parabens...a cidade %s\n", cidade1);
    }else if(superpoder2 > superpoder1){
        printf("parabens...a cidade %s\n", cidade2);
    }else{
        printf("empatou\n"); 
    }   
    break;
    case 6:
    if(densidadeinver1 < densidadeinver2){
        printf("parabens...a cidade %s\n", cidade1);
    }else if(densidadeinver2 < densidadeinver1){
        printf("parabens...a cidade %s\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 7:
    if(renda1 > renda2){
        printf("parabens...a cidade %s\n", cidade1);
    }else if(renda2 > renda1){
        printf("parabens...a cidade %s\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 8:
    printf("saindo do jogo....\n");
    break;
default:
printf("Comando invalido");
    break;
}

return 0;

 }