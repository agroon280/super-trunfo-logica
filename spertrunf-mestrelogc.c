#include <stdio.h>

 int main() {
int populacao1, populacao2, turismo1,turismo2,opcaomenu1, opcaomenu2;
float area1, area2, pib1, pib2;
float superpoder1, superpoder2;
float densidadeinver1, densidadeinver2; 
float renda1, renda2;
char codigo1[10] ,codigo2[10], cidade1[10],cidade2[10], estado1[10], estado2[10];
//criadas as variaveis, prossiga para o proximo passo, para usar printf e scanf

//menu principal, para escolher o primeiro atributo
printf("#### MENU PRINCIPAL ####\n");
printf("ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO:\n");
printf("1. populacao\n");
printf("2. turismo\n");
printf("3. area\n");
printf("4. pib\n");
printf("5. superpoder\n");
printf("6. densidade demografica\n");
printf("7. renda\n");
printf("Digite o primeiro atributo: ");
    scanf("%d", &opcaomenu1);

//dar valor as variaveis, para comparacao seja feita sem erros
printf("digite o primeiro estado:\n");
scanf(" %[^\n]", estado1);

printf("digite o segundo estado:\n");
scanf(" %[^\n]", estado2);

printf("digite o primeiro codigo:\n");//letra do estado seguida de um número
scanf(" %s", codigo1);

printf("digite o codigo da segunda cidade:\n");
scanf(" %s", codigo2);

printf("digite a primeira cidade:\n");
scanf(" %[^\n]", cidade1);

printf("digite a segunda cidade:\n");
scanf(" %[^\n]", cidade2);

printf("digite a primeira populaçao:\n");
scanf("%d", &populacao1);

printf("digite a segunda populaçao: \n");
scanf("%d", &populacao2);

printf("digite primrira area km²: \n ");
scanf("%f", &area1);

printf("digite segunda area km²: \n ");
scanf("%f", &area2 );

printf("digite o primeiro PIB: \n ");
scanf("%f", &pib1);

printf("digite o segundo PIB: \n ");
scanf("%f", &pib2);

printf("digite pontos turisticos da primeira cidade : \n");
scanf("%d", &turismo1);

printf("digite pontos turisticos segunda cidade : \n");
scanf("%d", &turismo2);
printf(" ");
densidadeinver1 = populacao1/ area1;
densidadeinver2 = populacao2 /area2 ;

renda1 = pib1 / populacao1;
renda2 = pib2 / populacao2;

superpoder1 = populacao1 + pib1 + renda1+ turismo1+ area1+densidadeinver1;
superpoder2 = populacao2 + pib2 + renda2+ turismo2+ area2+densidadeinver2;

//fazer a parte final de comparacao e saida das informaçoes.

switch (opcaomenu1){
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
    break;
    case 3:
    if(area1 > area2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(area2 > area1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 4:
        if(pib1 >pib2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(pib2 > pib1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 5:
    if(superpoder1 > superpoder2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(superpoder2 > superpoder1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n"); 
    }   
    break;
    case 6:
    if(densidadeinver1 < densidadeinver2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(densidadeinver2 < densidadeinver1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 7:
    if(renda1 > renda2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(renda2 > renda1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
default:
printf("Comando invalido");
    break;    
}

printf("ESCOLHA O SEGUNDO ATRIBUTO A SER COMPARADO:\n");
printf("1. populacao\n");
printf("2. turismo\n");
printf("3. area\n");
printf("4. pib\n");
printf("5. superpoder\n");
printf("6. densidade demografica\n");
printf("7. renda\n");
printf("Digite o segundo atributo: ");
    scanf("%d", &opcaomenu2);

if(opcaomenu2 == opcaomenu1){
    printf("atributo igual o primeiro, escolha novamente");
}else{
switch (opcaomenu2){
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
    break;
    case 3:
    if(area1 > area2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(area2 > area1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 4:
        if(pib1 >pib2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(pib2 > pib1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 5:
    if(superpoder1 > superpoder2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(superpoder2 > superpoder1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n"); 
    }   
    break;
    case 6:
    if(densidadeinver1 < densidadeinver2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(densidadeinver2 < densidadeinver1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
    case 7:
    if(renda1 > renda2){
        printf("parabens...a cidade %s venceu\n", cidade1);
    }else if(renda2 > renda1){
        printf("parabens...a cidade %s venceu\n", cidade2);
    }else{
        printf("empatou\n");
    }
    break;
default:
printf("Comando invalido");
    break;
}


return 0;

}

