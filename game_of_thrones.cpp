#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));
 
 char matriz[10][10];
 char andar;
 int nego;
 
 for(int linha = 0;linha <10;linha++){
     for(int coluna = 0;coluna <10;coluna++){
		 matriz[linha][coluna] = '0';
 	
   }

 }
 matriz[0][0] = 'J';
 matriz[4][4] ='C';
 matriz[9][9] = 'N';
 
 for(int i = 0;i <=20;i++){
 	int linha = rand() %10;
	int coluna = rand() %10;  
 	if(matriz[linha][coluna] =='0'){
 		matriz[linha][coluna] = 'i';
	 }else{
	 	i--;
	 }
 }
 for(int i = 0;i <=10;i++){
 	int linha = rand() %10;
	int coluna = rand() %10;  
 	if(matriz[linha][coluna] =='0'){
 		matriz[linha][coluna] = 'v';
	 }else{
	 	i--;
	 }
 }
 for(int i = 0;i <=10;i++){
 	int linha = rand() %10;
	int coluna = rand() %10;  
 	if(matriz[linha][coluna] =='0'){
 		matriz[linha][coluna] = '-';
	 }else{
	 	i--;
	 }
 }
  
  for(int linha = 0;linha <10;linha++){
     for(int coluna = 0;coluna <10;coluna++){
		 printf("  %c",matriz[linha][coluna]);
 	
   }
   printf("\n");
   
 }
 int linha = 0;
 int coluna = 0;
 int g = 0;
 int jvida = 100;
 int cvida = 100;
 int rvida = 200;
 
 do{
 	printf("\n\ndigite uma tecla para comecar andar :");
 	scanf("%c",&andar);
 	getchar();
 	switch(andar){
 	 case 'w':
 	    if((linha >0 && linha < 20)){
 	    	system("cls");
 			matriz[linha][coluna] = '0';
 			linha = linha -1;
 		  if(matriz[linha][coluna] == 'i'){
 		  	matriz[linha][coluna] = 'J';
 		  	printf("\nvoce encontrou um inimigo");
 		  	jvida = jvida - 10;
 		  	printf("\nvida :%i\n\n",jvida);
		   }else if(matriz[linha][coluna] == 'v'){
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encontrou uma porcao de vida");
		   	 if(jvida< 100){
		   		jvida = jvida +10;
		   		printf("\nvida :%i\n\n",jvida);
			}else{
				printf("\nsua vida ja to no maximo\n\n");
			}
		   }else if(matriz[linha][coluna] == '-'){
		   	linha = linha +1;
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encrountou um obstaculo");
		   	printf("\nnao pode passar por ai\n\n");
		   }else if(matriz[linha][coluna]== 'C'){
		   	printf("\n\nAo chegar no reino de Westeros, Jon precisa convencer Cersei de que ela precisa se juntar a ele para enfrentrar o reino da noite.");
		   	printf("\nPara convencer Cersei, Jon precisa em 5 tentativas alcancar mais de 60 de poder denegociacao em 3.");
		   	printf("\nCaso consiga, Cersei se une a ele na guerra contra o rei da noite duplicando sua vida quepassa a ser vida += 100. Caso contrario, inicia-se uma guerra.\n");
		   	getchar();
            for(int i =0;i <5;i++){
            	int p_nego = rand() %101;
            	
            	if(p_nego > 60){
            		nego++;
				}
				printf("  %i",p_nego);
			}
			if(nego >=3){
				printf("\n\nJon consegui convencer Cersei");
				printf("\ncom isso duplicou sua vida");
				jvida=jvida+jvida;
				printf("\nvida :%i\n\n",jvida);
				matriz[linha][coluna] = 'J';
				cvida =0;
			}else{
				printf("\njon nao conseguiu convencer");
				printf("\niniciou a guerra");
				getchar();
				printf("\nJon comeca o ataque\n\n");
				do{
					int c = rand() %101;
					int j = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque");
						cvida = cvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else{
						printf("Jon errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
					if(c >= 50 && cvida > 0){
						printf("Cersie acertou o ataque");
						jvida =jvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else if(c < 50 && cvida >0){
						printf("Cersie errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
				}while(jvida > 0 && cvida >0);
				if(jvida == 0){
					printf("jon morreu");
					getchar();
					g =1;
					break;
				}else if(matriz[linha][coluna] == 'N'){
		   	if(cvida ==0 ){
		   		printf("\nChegando ao reino do rei da noite, inicia-se a guerra .");
                printf("\nJon comeca atacando. Para acertar um golpe, Jon precisa atingir uma taxa de ataque maior ou igual a 50%, retirando 10 pontos do rei.");
                printf("\nO rei tambem precisa do mesmo percentual de taxa de ataque para atingir Jon. ");
                printf("\nCaso atinja Jon, ele retira 5 pontos de vida de Jon, e incrementa 5 pontos na sua propria vida");
                getchar();
                do{
                	int j = rand() %101;
					int r = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque\n");
						rvida = rvida -15;
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else{
						printf("Jon errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
					if(r >= 50 && rvida > 0){
						printf("rei da noite acertou o ataque\n");
						jvida =jvida -5;
						rvida = rvida +5;
						if(rvida>200){
							do{
								rvida--;
							}while(rvida>200);
						}
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else if(r < 50 && rvida >0){
						printf("rei da noite errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
                	
				}while(jvida >0  && rvida >0);
				if(jvida > 0){
					printf("O rei da noite morreu");
					g =2;
					getchar();
					break;
				}else{
					printf("jon morreu");
					g=1;
					getchar();
					break;
				}
			}else{
				printf("\nva conversar com cersie primeiro depois volte aqui\n\n");
				getchar();
				linha = linha -1;
				matriz[linha][coluna] = 'J';
				
			}
		   	

		   }else{
					printf("\nCersie morreu");
					printf("\nvida de jon = %i\n\n",jvida);
					matriz[linha][coluna] = 'J';
					getchar();
				}
			}

            
		   }else{
		   	matriz[linha][coluna] = 'J';
		   }for(int l = 0;l <10;l++){
     for(int c = 0;c <10;c++){
     	printf("  %c",matriz[l][c]);
	 }
		 
 	 printf("\n");
   }
  
		      
 }
 	  break;
     case 's':
 			if((linha >=0 && linha < 20)){
 			system("cls");//olhar isso;
 			matriz[linha][coluna] = '0';
 			linha = linha +1;
 			if(matriz[linha][coluna] == 'i'){
 		  	matriz[linha][coluna] = 'J';
 		  	printf("\nvoce encontrou um inimigo");
 		  	jvida = jvida - 10;
 		  	printf("\nvida :%i\n\n",jvida);
		   }else if(matriz[linha][coluna] == 'v'){
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encontrou uma porcao de vida");
		   	 if(jvida< 100){
		   		jvida = jvida +10;
		   		printf("\nvida :%i\n\n",jvida);
			}else{
				printf("\nsua vida ja to no maximo\n\n");
			}
		   }else if(matriz[linha][coluna] == '-'){
		   	linha = linha -1;
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encrountou um obstaculo");
		   	printf("\nnao pode passar por ai\n\n");
		   }else if(matriz[linha][coluna]== 'C'){
		   	printf("\n\nAo chegar no reino de Westeros, Jon precisa convencer Cersei de que ela precisa se juntar a ele para enfrentrar o reino da noite.");
		   	printf("\nPara convencer Cersei, Jon precisa em 5 tentativas alcancar mais de 60 de poder denegociacao em 3.");
		   	printf("\nCaso consiga, Cersei se une a ele na guerra contra o rei da noite duplicando sua vida quepassa a ser vida += 100. Caso contrario, inicia-se uma guerra.\n");
		   	getchar();
            for(int i =0;i <5;i++){
            	int p_nego = rand() %101;
            	
            	if(p_nego > 60){
            		nego++;
				}
				printf("  %i",p_nego);
			}
			if(nego >=3){
				printf("\n\nJon consegui convencer Cersei");
				printf("\ncom isso duplicou sua vida");
				jvida=jvida+jvida;
				printf("\nvida :%i\n\n",jvida);
				matriz[linha][coluna] = 'J';
				cvida =0;
			}else{
				printf("\njon nao conseguiu convencer");
				printf("\niniciou a guerra");
				getchar();
				printf("\nJon comeca o ataque\n\n");
				do{
					int c = rand() %101;
					int j = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque");
						cvida = cvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else{
						printf("Jon errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
					if(c >= 50 && cvida > 0){
						printf("Cersie acertou o ataque");
						jvida =jvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else if(c < 50 && cvida >0){
						printf("Cersie errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
				}while(jvida > 0 && cvida >0);
				if(jvida == 0){
					printf("jon morreu");
					getchar();
					g =1;
					break;
				}else{
					printf("\nCersie morreu");
					printf("\nvida de jon = %i\n\n",jvida);
					matriz[linha][coluna] = 'J';
					getchar();
				}
			}

            
		   }else if(matriz[linha][coluna] == 'N'){
		   	if(cvida ==0 ){
		   		printf("\nChegando ao reino do rei da noite, inicia-se a guerra .");
                printf("\nJon comeca atacando. Para acertar um golpe, Jon precisa atingir uma taxa de ataque maior ou igual a 50%, retirando 10 pontos do rei.");
                printf("\nO rei tambem precisa do mesmo percentual de taxa de ataque para atingir Jon. ");
                printf("\nCaso atinja Jon, ele retira 5 pontos de vida de Jon, e incrementa 5 pontos na sua propria vida");
                getchar();
                do{
                	int j = rand() %101;
					int r = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque\n");
						rvida = rvida -15;
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else{
						printf("Jon errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
					if(r >= 50 && rvida > 0){
						printf("rei da noite acertou o ataque\n");
						jvida =jvida -5;
						rvida = rvida +5;
						if(rvida>200){
							do{
								rvida--;
							}while(rvida>200);
						}
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else if(r < 50 && rvida >0){
						printf("rei da noite errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
                	
				}while(jvida >0  && rvida >0);
				if(jvida > 0){
					printf("O rei da noite morreu");
					g =2;
					getchar();
					break;
				}else{
					printf("jon morreu");
					g=1;
					getchar();
					break;
				}
			}else{
				printf("\nva conversar com cersie primeiro depois volte aqui\n\n");
				getchar();
				linha = linha -1;
				matriz[linha][coluna] = 'J';
				
			}
		   	

		   }else{
		   	matriz[linha][coluna] = 'J';
		   }for(int l = 0;l <10;l++){
     for(int c = 0;c <10;c++){
     	printf("  %c",matriz[l][c]);
	 }
		 
 	 printf("\n");
   }
			 
 			}
 	  break;
 	 case 'd':
 			if((coluna >=0 && coluna < 20)){
 			system("cls");
 			matriz[linha][coluna] = '0';
 			coluna = coluna +1;
 			if(matriz[linha][coluna] == 'i'){
 		  	matriz[linha][coluna] = 'J';
 		  	printf("\nvoce encontrou um inimigo");
 		  	jvida = jvida - 10;
 		  	printf("\nvida :%i\n\n",jvida);
		   }else if(matriz[linha][coluna] == 'v'){
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encontrou uma porcao de vida");
		   	 if(jvida< 100){
		   		jvida = jvida +10;
		   		printf("\nvida :%i\n\n",jvida);
			}else{
				printf("\nsua vida ja to no maximo\n\n");
			}
		   }else if(matriz[linha][coluna] == '-'){
		   	coluna = coluna -1;
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encrountou um obstaculo");
		   	printf("\nnao pode passar por ai\n\n");
		   }else if(matriz[linha][coluna]== 'C'){
		   	printf("\n\nAo chegar no reino de Westeros, Jon precisa convencer Cersei de que ela precisa se juntar a ele para enfrentrar o reino da noite.");
		   	printf("\nPara convencer Cersei, Jon precisa em 5 tentativas alcancar mais de 60 de poder denegociacao em 3.");
		   	printf("\nCaso consiga, Cersei se une a ele na guerra contra o rei da noite duplicando sua vida quepassa a ser vida += 100. Caso contrario, inicia-se uma guerra.\n");
		   	getchar();
            for(int i =0;i <5;i++){
            	int p_nego = rand() %101;
            	
            	if(p_nego > 60){
            		nego++;
				}
				printf("  %i",p_nego);
			}
			if(nego >=3){
				printf("\n\nJon consegui convencer Cersei");
				printf("\ncom isso duplicou sua vida");
				jvida=jvida+jvida;
				printf("\nvida :%i\n\n",jvida);
				matriz[linha][coluna] = 'J';
				cvida =0;
			}else{
				printf("\njon nao conseguiu convencer");
				printf("\niniciou a guerra");
				getchar();
				printf("\nJon comeca o ataque\n\n");
				do{
					int c = rand() %101;
					int j = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque");
						cvida = cvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else{
						printf("Jon errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
					if(c >= 50 && cvida > 0){
						printf("Cersie acertou o ataque");
						jvida =jvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else if(c < 50 && cvida >0){
						printf("Cersie errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
				}while(jvida > 0 && cvida >0);
				if(jvida == 0){
					printf("jon morreu");
					getchar();
					g =1;
					break;
				}else{
					printf("\nCersie morreu");
					printf("\nvida de jon = %i\n\n",jvida);
					matriz[linha][coluna] = 'J';
					getchar();
				}
			}

            
		   }else if(matriz[linha][coluna] == 'N'){
		   	if(cvida ==0 ){
		   		printf("\nChegando ao reino do rei da noite, inicia-se a guerra .");
                printf("\nJon comeca atacando. Para acertar um golpe, Jon precisa atingir uma taxa de ataque maior ou igual a 50%, retirando 10 pontos do rei.");
                printf("\nO rei tambem precisa do mesmo percentual de taxa de ataque para atingir Jon. ");
                printf("\nCaso atinja Jon, ele retira 5 pontos de vida de Jon, e incrementa 5 pontos na sua propria vida");
                getchar();
                do{
                	int j = rand() %101;
					int r = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque\n");
						rvida = rvida -15;
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else{
						printf("Jon errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
					if(r >= 50 && rvida > 0){
						printf("rei da noite acertou o ataque\n");
						jvida =jvida -5;
						rvida = rvida +5;
						if(rvida>200){
							do{
								rvida--;
							}while(rvida>200);
						}
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}else if(r < 50 && rvida >0){
						printf("rei da noite errou o ataque\n");
						printf(" vida de jon = %i vida de rei da noite = %i",jvida,rvida);
						getchar();
					}
                	
				}while(jvida >0  && rvida >0);
				if(jvida > 0){
					printf("O rei da noite morreu");
					g =2;
					getchar();
					break;
				}else{
					printf("jon morreu");
					g=1;
					getchar();
					break;
				}
			}else{
				printf("\nva conversar com cersie primeiro depois volte aqui\n\n");
				getchar();
				linha = linha -1;
				matriz[linha][coluna] = 'J';
				
			}
		   	

		   }else{
		   	matriz[linha][coluna] = 'J';
		   }for(int l = 0;l <10;l++){
     for(int c = 0;c <10;c++){
     	printf("  %c",matriz[l][c]);
	 }
		 
 	 printf("\n");
   }
			 
 			}
 	  break;
 	 case 'a':
 			if((linha >0 && linha < 19)){
 			system("cls");
 			matriz[linha][coluna] = '0';
 			coluna = coluna - 1;
 			if(matriz[linha][coluna] == 'i'){
 		  	matriz[linha][coluna] = 'J';
 		  	printf("\nvoce encontrou um inimigo");
 		  	jvida = jvida - 10;
 		  	printf("\nvida :%i\n\n",jvida);
		   }else if(matriz[linha][coluna] == 'v'){
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encontrou uma porcao de vida");
		   	 if(jvida< 100){
		   		jvida = jvida +10;
		   		printf("\nvida :%i\n\n",jvida);
			}else{
				printf("\nsua vida ja to no maximo\n\n");
			}
		   }else if(matriz[linha][coluna] == '-'){
		   	coluna = coluna +1;
		   	matriz[linha][coluna] = 'J';
		   	printf("\nvoce encrountou um obstaculo");
		   	printf("\nnao pode passar por ai\n\n");
		   }else if(matriz[linha][coluna]== 'C'){
		   	printf("\n\nAo chegar no reino de Westeros, Jon precisa convencer Cersei de que ela precisa se juntar a ele para enfrentrar o reino da noite.");
		   	printf("\nPara convencer Cersei, Jon precisa em 5 tentativas alcancar mais de 60 de poder denegociacao em 3.");
		   	printf("\nCaso consiga, Cersei se une a ele na guerra contra o rei da noite duplicando sua vida quepassa a ser vida += 100. Caso contrario, inicia-se uma guerra.\n");
		   	getchar();
            for(int i =0;i <5;i++){
            	int p_nego = rand() %101;
            	
            	if(p_nego > 60){
            		nego++;
				}
				printf("  %i",p_nego);
			}
			if(nego >=3){
				printf("\n\nJon consegui convencer Cersei");
				printf("\ncom isso duplicou sua vida");
				jvida=jvida+jvida;
				printf("\nvida :%i\n\n",jvida);
				matriz[linha][coluna] = 'J';
				cvida =0;
			}else{
				printf("\njon nao conseguiu convencer");
				printf("\niniciou a guerra");
				getchar();
				printf("\nJon comeca o ataque\n\n");
				do{
					int c = rand() %101;
					int j = rand() %101;
					if(j >= 50){
						printf("Jon acertou o ataque");
						cvida = cvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else{
						printf("Jon errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
					if(c >= 50 && cvida > 0){
						printf("Cersie acertou o ataque");
						jvida =jvida -10;
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}else if(c < 50 && cvida >0){
						printf("Cersie errou o ataque");
						printf(" vida de jon = %i vida de cersie = %i",jvida,cvida);
						getchar();
					}
				}while(jvida > 0 && cvida >0);
				if(jvida == 0){
					printf("jon morreu");
					getchar();
					g =1;
					break;
				}else{
					printf("\nCersie morreu");
					printf("\nvida de jon = %i\n\n",jvida);
					matriz[linha][coluna] = 'J';
					getchar();
				}
			}

            
		   }else{
		   	matriz[linha][coluna] = 'J';
		   }for(int l = 0;l <10;l++){
     for(int c = 0;c <10;c++){
     	printf("  %c",matriz[l][c]);
	 }
		 
 	 printf("\n");
   }
			 
 			}
 	  break;
 	  default:
 	  	printf("tecla digitada invalida");
 		
 		
	 }
	 printf("\n\n");
	 
 	
 }while(g == 0);
 
 if(g==1){
 	printf("\n\n****** GAME OVER *****");
 }
 if(g==2){
 	printf("\n\n ********Vitoria*********");
 }
 
 
 

}
