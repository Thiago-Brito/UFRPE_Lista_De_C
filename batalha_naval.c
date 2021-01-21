#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int matriz1[11][11];
int matriz11[11][11];

int matriz2[11][11];

int linha;
int coluna;
for(linha = 0;linha <10;linha++){
     for(coluna = 0;coluna <10;coluna++){
		 matriz1[linha][coluna] = '.';
		 matriz11[linha][coluna] = '.';
		 matriz2[linha][coluna] = '.';
		 
 	
   }

 }
 
 
 int g = '0';
 int i;

for( i =0; i<10;i++){
	matriz1[i][0] = g;
	matriz11[i][0] = g;
	matriz2[i][0] = g;

	
	matriz1[0][i] = g;
	matriz11[0][i] = g;
	matriz2[0][i] = g;

	g++;
}
 
   
printf("as posicoes da embarcacoes do primeiro jogador\n\n");

do{
    linha = rand() %9 +1;
	coluna = rand() %9 +1;
}while(matriz1[linha][coluna] != '.');
matriz1[linha][coluna]= 't';

 printf("\n\n");


 do{
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha][coluna + 1] != '.');
    matriz1[linha][coluna]= 'y';
	matriz1[linha][coluna + 1]= 'y'; 

 do{
	
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
	
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha - 1][coluna + 1] != '.');
matriz1[linha][coluna]= 'a';
matriz1[linha - 1][coluna + 1]= 'a';

 do{
	
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
	
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha + 1][coluna + 1] != '.');
matriz1[linha][coluna]= 'q';
matriz1[linha + 1][coluna + 1]= 'q';
for(linha = 0;linha <10;linha++){
     for(coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz1[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
 getchar();
 system("cls");
 
 // segundo jogador
 printf("as posicoes da embarcacoes do segundo jogador\n\n");
 do{
    linha = rand() %9 +1;
	coluna = rand() %9 +1;
}while(matriz1[linha][coluna] != '.');
matriz1[linha][coluna]= 'w';
matriz2[linha][coluna]= 'w';




 do{
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha][coluna + 1] != '.');
    matriz1[linha][coluna]= 'z';
	matriz1[linha][coluna + 1]= 'z';
	matriz2[linha][coluna]= 'z';
	matriz2[linha][coluna + 1]= 'z';  

 do{
	
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
	
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha - 1][coluna + 1] != '.');
matriz1[linha][coluna]= 'h';
matriz1[linha - 1][coluna + 1]= 'h';
matriz2[linha][coluna]= 'h';
matriz2[linha - 1][coluna + 1]= 'h';

 do{
	
	linha = rand() %9 +1;
	coluna = rand() %9 +1;
	
	
	
}while(matriz1[linha][coluna] != '.' || matriz1[linha + 1][coluna + 1] != '.');
matriz1[linha][coluna]= 'u';
matriz1[linha + 1][coluna + 1]= 'u';
matriz2[linha][coluna]= 'u';
matriz2[linha + 1][coluna + 1]= 'u';

 printf("\n\n");
 for(linha = 0;linha <10;linha++){
     for(coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz2[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
 getchar();
 system("cls");
 
 int go = 0;
 int ga = 0;
 int acerto1 =0;
 int acerto2 = 0;
 for(linha = 0;linha <10;linha++){
     for(coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz11[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
  do{
 	if( g %2 == 0){
 		printf("\n\nvez do primeiro escolher\n\n");
 		printf("digite um linha e uma coluna:");
 		scanf("%i %i",&linha,&coluna);
 		getchar();
        system("cls");
 		
 		if(matriz1[linha][coluna] == 'w'){
 			matriz11[linha][coluna] = 'x';
 			printf("voce acertou uma embarcacao inimiga");
 			acerto1++;
		 }
		 if(matriz1[linha][coluna] == 't'){
 			matriz11[linha][coluna] = 'x';
 			printf("voce acertou uma embarcacao amiga");
 			acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'z'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha][coluna+1] == 'z'){
		 		matriz11[linha][coluna+1] = 'x';
			 }else{
			 	matriz11[linha][coluna-1] = 'x';
			 }
			 acerto1++;
		 }
		  if(matriz1[linha][coluna] == 'y'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha][coluna+1] == 'y'){
		 		matriz11[linha][coluna+1] = 'x';
			 }else{
			 	matriz11[linha][coluna-1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'h'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna+1] == 'h'){
		 		matriz11[linha - 1][coluna+1] = 'x';
			 }else{
			 	matriz11[linha+ 1][coluna-1] = 'x';
			 }
			 acerto1++;
		 }
		 if(matriz1[linha][coluna] == 'a'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna+1] == 'a'){
		 		matriz11[linha - 1][coluna+1] = 'x';
			 }else{
			 	matriz11[linha+ 1][coluna-1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'u'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna-1] == 'u'){
		 		matriz11[linha - 1][coluna-1] = 'x';
			 }else{
			 	matriz11[linha+1][coluna+1] = 'x';
			 }
			 acerto1++;
		 }
		 if(matriz1[linha][coluna] == 'q'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna-1] == 'q'){
		 		matriz11[linha - 1][coluna-1] = 'x';
			 }else{
			 	matriz11[linha+1][coluna+1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == '.'){
		 	printf("nao houve destruicao");
		 	matriz11[linha][coluna] = ' ';
		 }
		 if(acerto1 == 4){
		 	ga=1;
		 }
		 
		
		 
		printf("\nJogador1: %i\n",acerto1);
		 printf("\nJogador2: %i\n",acerto2);
		 printf("\n\n");
		 for(linha = 0;linha <10;linha++){
    	 for(coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz11[linha][coluna]);
 	
   }
   
   
   printf(" \n");
   
 }

 		
	 }else{
	 		printf("\n\nvez do segundo escolher\n\n");
 		printf("digite um linha e uma coluna:");
 		scanf("%i %i",&linha,&coluna);
 		getchar();
 		system("cls");
 		
 		if(matriz1[linha][coluna] == 'w'){
 			matriz11[linha][coluna] = 'x';
 			printf("voce acertou uma embarcacao amiga");
 			acerto1++;
		 }
		 if(matriz1[linha][coluna] == 't'){
 			matriz11[linha][coluna] = 'x';
 			printf("voce acertou uma embarcacao inimiga");
 			acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'z'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha][coluna+1] == 'z'){
		 		matriz11[linha][coluna+1] = 'x';
			 }else{
			 	matriz11[linha][coluna-1] = 'x';
			 }
			 acerto1++;
		 }
		  if(matriz1[linha][coluna] == 'y'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha][coluna+1] == 'y'){
		 		matriz11[linha][coluna+1] = 'x';
			 }else{
			 	matriz11[linha][coluna-1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'h'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna+1] == 'h'){
		 		matriz11[linha - 1][coluna+1] = 'x';
			 }else{
			 	matriz11[linha+ 1][coluna-1] = 'x';
			 }
			 acerto1++;
		 }
		 if(matriz1[linha][coluna] == 'a'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna+1] == 'a'){
		 		matriz11[linha - 1][coluna+1] = 'x';
			 }else{
			 	matriz11[linha+ 1][coluna-1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == 'u'){
		 	printf("voce acertou uma embarcacao amiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna-1] == 'u'){
		 		matriz11[linha - 1][coluna-1] = 'x';
			 }else{
			 	matriz11[linha+1][coluna+1] = 'x';
			 }
			 acerto1++;
		 }
		 if(matriz1[linha][coluna] == 'q'){
		 	printf("voce acertou uma embarcacao inimiga");
		 	matriz11[linha][coluna] = 'x';
		 	if(matriz1[linha - 1][coluna-1] == 'q'){
		 		matriz11[linha - 1][coluna-1] = 'x';
			 }else{
			 	matriz11[linha+1][coluna+1] = 'x';
			 }
			 acerto2++;
		 }
		 if(matriz1[linha][coluna] == '.'){
		 	printf("nao houve destruicao");
		 	matriz11[linha][coluna] = ' ';
		 }
		 if(acerto2 == 4){
		 	ga=1;
		 }
		 
		 

		 printf("\nJogador1: %i\n",acerto1);
		 printf("\nJogador2: %i\n",acerto2);
		 printf("\n\n");
		 for(linha = 0;linha <10;linha++){
     for(coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz11[linha][coluna]);
 	
   }
   
   printf(" \n");
	 }
	
 }
  g++;
 }while(ga==0);
 if(acerto1 == 4){
 	printf("\n\n\n***O PRIMEIRO JOGADOR GANHOU***");
 }else{
 	printf("\n\n\n***O SEGUNDO JOGADOR GANHOU***");
 }
}
