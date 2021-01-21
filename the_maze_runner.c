#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  char matriz[14][14];
  srand(time(NULL));
  int linha;
  int coluna;
  for( linha = 0;linha <13;linha++){
     for( coluna = 0;coluna <14;coluna++){
		 matriz[linha][coluna] = ' ';
 	
   }

 }
  matriz[0][2] = '1';
  matriz[1][2] = '2';
  int linha1= 0;
  int coluna1 =2;
  int vida1 =10;
  int colunaU = 2;
  int linhaU=2;
  
  int linha2 = 1;
  int coluna2=2;
  int linhaS =2;
  int colunaS =2;
  int vida2 =10;
  
  matriz[2][2] = 'P';
  matriz[2][3] = 'B';  
  matriz[2][4] = 'V';
  matriz[2][5] = 'E';
  matriz[2][6] = 'B';
  matriz[2][7] = 'A';
  matriz[2][8] = 'B';
  matriz[2][9] = 'M';
  matriz[2][10] = 'B';
  matriz[2][11] = 'V';
  
  
  matriz[3][11] = 'E';
  matriz[4][11] = 'P';
  matriz[5][11] = 'A';
  matriz[6][11] = 'B';
  matriz[7][11] = 'B';
  matriz[8][11] = 'V';
  
  matriz[8][10] = 'E';
  matriz[8][9] = 'B';
  matriz[8][8] = 'M';
  matriz[8][7] = 'B';
  matriz[8][6] = 'V';
  matriz[8][5] = 'E';
  matriz[8][4] = 'B';
  matriz[8][3] = 'A';
  matriz[8][2] = 'V';
  
  matriz[7][2] = 'M';
  matriz[6][2] = 'E';
  matriz[5][2] = 'P';
  
  printf("                                ******COMO JOGAR*******\n\n\n");
  printf("  -Os dois jogadores comecam na celula inicio.\n");
  printf("  -Os dois jogadores comecam com vida = 10 pontos. A pontuacao maxima da vida e 10 pontos nao podendo ser ultrapassado.\n");
  printf("  -Os dois jogadores podem estar na mesma celula ao mesmo tempo.\n\n");
  printf("  A celula branca representa um espaco neutro onde nao ha acao sobre o jogador-'B'\n");
  printf("  A celula vermelha penaliza o jogador em 3 pontos de vida - 'V'\n");
  printf("  A celula verde recupera 1 ponto de vida do jogador - 'E'\n");
  printf("  A celula amarela aprisiona o jogador por um turno sem jogar - 'M'\n");
  printf("  A celula azul permite que o jogador jogue novamente - 'A'\n");
  printf("  A celula preta faz o jogador voltar para o inicio (desconsidere as celulas de inicio e fim) - 'P'\n\n");
  getchar();
  for(linha = 0;linha <13;linha++){
     for(coluna = 0;coluna <14;coluna++){
		 printf("  %c",matriz[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
 getchar();
 int um;
 int um1;
 int dois;
 int dois1;
 do{
 	um =  rand() %6 +1;
	um1=  rand() %6 +1; 
    dois = rand() %6 +1;
    dois1 = rand() %6 +1;
 }while( dois + dois1 == um + um1 );
  printf("  o 1 tirou : %i + %i = %i\n\n",um,um1,um + um1);
  getchar();
  printf("  o 2 tirou : %i + %i = %i\n\n",dois,dois1,dois +dois1);
  int g;
 
 if(um + um1> dois + dois1){
 	g = 1;
 	printf("o primeiro vai ser 1");
 	getchar();
 }else{
 	g=2;
 	printf("o primeiro vai ser o 2");
 	getchar();
 }
 
 int ga = 0;
 int livre2 = 0;
 int livre1 = 0;
 int soma2 = 0;
 int soma1 =0;

 
 do{
 	if(g % 2 == 0){
 		if(livre2 != 0){
 			printf("O 2 esta preso.\n");
 			getchar();
 			livre2--;
		 }else{
		 	printf("\n\n2 -jogue o dado");
 		getchar();
 	    dois =   rand() %6+ 1;
 	    printf(" tirou %i\n\n\n",dois);
 	    getchar();
 	    system("cls");
 	    soma2= soma2 +dois;
 	    if(soma2 <10 ){
 	    	matriz[linha2][coluna2]=' ';
 	    	linha2 =1;
 	    	coluna2= coluna2 + dois;
 	    	matriz[linha2][coluna2]='2';
 	    	colunaS= colunaS+ dois;
            linhaS =2;
 	    	
		 }
		 if(soma2 >=10 && soma2 <16){
		 	matriz[linha2][coluna2]=' ';
		 	coluna2 =12;
		 	linha2 = (soma2 -9)+ 2;
		 	matriz[linha2][coluna2]='2';
		 	colunaS = 11;
		 	linhaS= (soma2 -9) +2;
		 		
		 } 
		 if(soma2 >=16 && soma2 <25){
		 	matriz[linha2][coluna2]=' ';
		 	coluna2 = 11 -(soma2-15);
		 	linha2 = 9;
		 	matriz[linha2][coluna2]='2';
		 	colunaS = 11 -(soma2-15);
		 	linhaS= 8;
		 	
		 }
		 if(soma2 >=25 && soma2 <27){
		 	matriz[linha2][coluna2]=' ';
		 	coluna2 = 1;
		 	linha2 = 8 -(soma2 - 24);
		 	matriz[linha2][coluna2]='2';
		 	colunaS = 2;
		 	linhaS = 8 -(soma2 - 24);	
		 }
		 if(soma2 >= 27){
		 	matriz[linha2][coluna2]=' ';
		 	coluna2 = 1;
		 	linha2 = 5;
		 	matriz[linha2][coluna2]='2';
		 	for(linha = 0;linha <13;linha++){
         for(coluna = 0;coluna <14;coluna++){
		    printf("  %c",matriz[linha][coluna]);
 	
         }
   
         printf(" \n");
   
          }     
            ga =2;
            break;
		 	
		 }
 	    
 	    if(matriz[linhaS][colunaS] == 'B'){
 	    	printf("espaco neutro acontece nada\n\n");
 	    
		 }
		 if(matriz[linhaS][colunaS] == 'V'){
		 	vida2 = vida2 -3;
		 	printf("A celula vermelha penaliza o jogador em 3 pontos de vida\n\n");
		 	printf("vida do 2 = %i\n",vida2);
		 	if(vida2 <=0){
		 		printf("o jogador morreu\n");
		 		printf("vai renascer no inicio\n");
		 		matriz[linha2][coluna2] =' ';
		 	    matriz[1][2] = '2';
		 	    linha2=1;
		 	    coluna2=2;
		 	    linhaS =2;
                colunaS =2;
                soma2 = 0;
                vida2=10;
			 }
		 	
		 }
		 if(matriz[linhaS][colunaS] == 'M'){
		 	printf("A celula amarela aprisiona o jogador por um turno sem jogar\n\n");
		 	livre2++;
			
		 }
		 if(matriz[linhaS][colunaS] == 'A'){
		 	printf("A celula azul permite que o jogador jogue novamente\n\n ");
		 	g++;
		 	
		 	
		 }
		 if(matriz[linhaS][colunaS] == 'P' && linhaS ==4){
		 	printf("A celula preta faz o jogador voltar para o inicio (desconsidere as celulas de inicio e fim)\n\n");
		 	matriz[linha2][coluna2] =' ';
		 	matriz[1][2] = '2';
		 	linha2=1;
		 	coluna2=2;
		 	linhaS =2;
            colunaS =2;
            soma2 = 0;
		 		
		 }
		 if(matriz[linhaS][colunaS] == 'E'){
		 	printf(" A celula verde recupera 1 ponto de vida do jogador\n\n");
		 
		 	if(vida2 < 10){
		 		vida2 =vida2 +1;
			 }else{
			 	printf("vida ta maxima\n\n");
			 }
			 printf("vida do 2 = %i\n\n",vida2);
		 }
		 printf("\n\n");
 	    for(linha = 0;linha <13;linha++){
     for(coluna = 0;coluna <14;coluna++){
		 printf("  %c",matriz[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
		 }
 }else if(g % 2 != 0){
	 	if(livre1 != 0){
	 		printf("O 1 esta preso\n");
	 		getchar();
	 		livre1--;
		 }else{
		 	printf("\n\n1 -jogue o dado");
	 	getchar();
	    um =   rand() %6 +1;
	    printf(" tirou %i\n",um);
	    getchar();
	    system("cls");
	    soma1= soma1 +um;
 	    if(soma1 <10 ){
 	    	matriz[linha1][coluna1]=' ';
 	    	linha1 =0;
 	    	coluna1= coluna1 + um;
 	    	matriz[linha1][coluna1]='1';
 	    	colunaU= colunaU+ um;
            linhaU =2;
 	    	
		 }
		 if(soma1 >=10 && soma1 <16){
		 	matriz[linha1][coluna1]=' ';
		 	coluna1 =13;
		 	linha1 = (soma1 -9)+ 2;
		 	matriz[linha1][coluna1]='1';
		 	colunaU = 11;
		 	linhaU= (soma1 -9) +2;
		 	
		 } 
		 if(soma1 >=16 && soma1 <25){
		 	matriz[linha1][coluna1]=' ';
		 	coluna1 = 11 -(soma1-15);
		 	linha1 = 10;
		 	matriz[linha1][coluna1]='1';
		 	colunaU = 11 -(soma1-15);
		 	linhaU= 8;
		 	
		 }
		 if(soma1 >=25 && soma1 <27){
		 	matriz[linha1][coluna1]=' ';
		 	coluna1 = 0;
		 	linha1 = 8 -(soma1 - 24);
		 	matriz[linha1][coluna1]='1';
		 	colunaU = 2;
		 	linhaU = 8 -(soma1 - 24);	
		 }
		 if(soma1 >= 27){
		 	matriz[linha1][coluna1]=' ';
		 	coluna1 = 1;
		 	linha1 = 5;
		 	matriz[linha1][coluna1]='1';
		 	for(linha = 0;linha <13;linha++){
         for(coluna = 0;coluna <14;coluna++){
		    printf("  %c",matriz[linha][coluna]);
 	
         }
   
         printf(" \n");
   
          }     
            ga =1;
            break;
		 	
		 }
 	    
 	    if(matriz[linhaU][colunaU] == 'B'){
 	    	printf("espaco neutro acontece nada\n\n");
 	    	
		 }
		 if(matriz[linhaU][colunaU] == 'V'){
		 	vida1 = vida1 -3;
		 	printf("A celula vermelha penaliza o jogador em 3 pontos de vida\n\n");
		 	printf("vida do 1 = %i\n",vida1);
		 	if(vida1 <= 0){
		 		printf("o jogador morreu\n");
		 		printf("vai renascer no inicio\n");
		 		matriz[linha1][coluna1] =' ';
		 	    matriz[0][2] = '1';
		 	    coluna1 =2;
                linha1=0;
		 	    linhaU =2;
                colunaU =2;
                soma1 = 0;
                vida1 =10;
		 		
			 }
		 	
		 }
		 if(matriz[linhaU][colunaU] == 'M'){
		 	printf("A celula amarela aprisiona o jogador por um turno sem jogar\n\n");
		 	livre1++;
				
		 }
		 if(matriz[linhaU][colunaU] == 'A'){
		 	printf("A celula azul permite que o jogador jogue novamente\n\n ");
		 	g++;
		 
		 	
		 }
		 if(matriz[linhaU][colunaU] == 'P'&& linhaU ==4){
		 	printf("A celula preta faz o jogador voltar para o inicio (desconsidere as celulas de inicio e fim)\n\n");
		 	matriz[linha1][coluna1] =' ';
		 	matriz[0][2] = '1';
		 	coluna1 =2;
            linha1=0;
		 	linhaU =2;
            colunaU =2;
            soma1 = 0;
		 		
		 }
		 if(matriz[linhaU][colunaU] == 'E'){
		 	printf(" A celula verde recupera 1 ponto de vida do jogador\n\n\n");
		 
		 	if(vida1 < 10){
		 		vida1 =vida1 +1;
			 }else{
			 	printf("vida ta maxima\n\n");
			 }
			 printf("vida do 1 = %i\n\n",vida1);
		 }
		 printf("\n\n");
 	    for( linha = 0;linha <13;linha++){
     for( coluna = 0;coluna <14;coluna++){
		 printf("  %c",matriz[linha][coluna]);
 	
   }
   
   printf(" \n");
   
 }
		 }
	 }
	 g++;
	 
 }while( ga == 0);
 if(ga ==2){
 	printf("\n\n O SEGUNDO GANHOU O JOGO");
 }else{
 	printf("\n\n O PRIMEIRO GANHOU O JOGO");
 }
 
 
 
 
  
  
}
