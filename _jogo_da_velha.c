# meus-projetos

#include <stdio.h>
#include <stdlib.h>
#define preenchido "\nO local escolhido ja foi preenchido, tente outro"

int aleatorio(char teste[3][3]){

	int a, b, sair = 0;

	while(sair==0){

		a = rand()%99;
		if(a > 70){
			a = 2;
		} else if((a > 40) && (a <= 70)){
			a = 1;
		} else {
			a = 0;
		}

		b = rand()%99;
		if(b > 70){
			b = 2;
		} else if((b > 40) && (a <= 70)){
			b = 2;
		} else {
			b = 0;
		}

		if(teste[a][b] == ' '){
			teste[a][b] = 'O';
			sair = 1;
			}

	}

	return 0;
}

void cabecalho(){

	char jogo[6][36] = {
						{0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
						{0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
						{0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
						{0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
						{0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0},
						{0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0}
					};

	char da[4][25] = {
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0},
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0},
						{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0}
					};

	char velha[6][38] = {
							{0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0},
							{0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0},
							{0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0},
							{0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
							{0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0},
							{0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0}
					};

	int i, j;
	printf("\tCriado por: Davi Centeno");
	for(i=0; i<6; i++){
		putchar('\n');
		printf("   ");
		for(j=0; j<36; j++){
			if(jogo[i][j] == 0){
				putchar(' ');
			}
			if(jogo[i][j] == 1){
				putchar('#');
			}
		}
	}
	putchar('\n');
	for(i=0; i<4; i++){
		putchar('\n');
		printf("   ");
		for(j=0; j<25; j++){
			if(da[i][j] == 0){
				putchar(' ');
			}
			if(da[i][j] == 1){
				putchar('#');
			}
		}
	}
	putchar('\n');
	for(i=0; i<6; i++){
		putchar('\n');
		printf("   ");
		for(j=0; j<38; j++){
			if(velha[i][j] == 0){
				putchar(' ');
			}
			if(velha[i][j] == 1){
				putchar('#');
			}
		}
	}
	putchar('\n');
}

int ganhador(char teste[3][3]){
	
	int venceu = 0;

									/*Linha Cheia*/
	if((teste[0][0] == 'X') && (teste[0][1] == 'X') && (teste[0][2] == 'X')) venceu = 1;
	if((teste[1][0] == 'X') && (teste[1][1] == 'X') && (teste[1][2] == 'X')) venceu = 1;
	if((teste[2][0] == 'X') && (teste[2][1] == 'X') && (teste[2][2] == 'X')) venceu = 1;
	if((teste[0][0] == 'O') && (teste[0][1] == 'O') && (teste[0][2] == 'O')) venceu = 2;
	if((teste[1][0] == 'O') && (teste[1][1] == 'O') && (teste[1][2] == 'O')) venceu = 2;
	if((teste[2][0] == 'O') && (teste[2][1] == 'O') && (teste[2][2] == 'O')) venceu = 2;

									/*Coluna Cheia*/
	if((teste[0][0] == 'X') && (teste[1][0] == 'X') && (teste[2][0] == 'X')) venceu = 1;
	if((teste[0][1] == 'X') && (teste[1][1] == 'X') && (teste[2][1] == 'X')) venceu = 1;
	if((teste[0][2] == 'X') && (teste[1][2] == 'X') && (teste[2][2] == 'X')) venceu = 1;
	if((teste[0][0] == 'O') && (teste[1][0] == 'O') && (teste[2][0] == 'O')) venceu = 2;
	if((teste[0][1] == 'O') && (teste[1][1] == 'O') && (teste[2][1] == 'O')) venceu = 2;
	if((teste[0][2] == 'O') && (teste[1][2] == 'O') && (teste[2][2] == 'O')) venceu = 2;

								/*Cruzadas Cheias*/
	if((teste[0][0] == 'X') && (teste[1][1] == 'X') && (teste[2][2] == 'X')) venceu = 1;
	if((teste[2][0] == 'X') && (teste[1][1] == 'X') && (teste[0][2] == 'X')) venceu = 1;
	if((teste[0][0] == 'O') && (teste[1][1] == 'O') && (teste[2][2] == 'O')) venceu = 2;
	if((teste[2][0] == 'O') && (teste[1][1] == 'O') && (teste[0][2] == 'O')) venceu = 2;


	if((venceu != 1) && (venceu != 2)){
		if((teste[0][0] != ' ') && (teste[0][1] != ' ') && (teste[0][2] != ' ') && (teste[1][0] != ' ') && (teste[1][1] != ' ') && (teste[1] [1] != ' ') && (teste[2][0] != ' ') && (teste[2][1] != ' ') && (teste[2][2] != ' ')){

			venceu = 3;

		}
	}


	return venceu;
}

int com_defesa(char teste[3][3]){

	int cnt = 0;
	/*Verticais*/
	/*Alinhado a direita*/
	if((teste[0][0] == 'X') && (teste[0][1] == 'X') && (teste[0][2] == ' ') && (cnt == 0))cnt = 1;
	if((teste[1][0] == 'X') && (teste[1][1] == 'X') && (teste[1][2] == ' ') && (cnt == 0))cnt = 2;
	if((teste[2][0] == 'X') && (teste[2][1] == 'X') && (teste[2][2] == ' ') && (cnt == 0))cnt = 3;
	/*Alinhado a esquerda*/
	if((teste[0][1] == 'X') && (teste[0][2] == 'X') && (teste[0][0] == ' ') && (cnt == 0))cnt = 4;
	if((teste[1][1] == 'X') && (teste[1][2] == 'X') && (teste[1][0] == ' ') && (cnt == 0))cnt = 5;
	if((teste[2][1] == 'X') && (teste[2][2] == 'X') && (teste[2][0] == ' ') && (cnt == 0))cnt = 6;
	/*Aberto*/
	if((teste[0][0] == 'X') && (teste[0][2] == 'X') && (teste[0][1] == ' ') && (cnt == 0))cnt = 7;
	if((teste[1][0] == 'X') && (teste[1][2] == 'X') && (teste[1][1] == ' ') && (cnt == 0))cnt = 8;
	if((teste[2][0] == 'X') && (teste[2][2] == 'X') && (teste[2][1] == ' ') && (cnt == 0))cnt = 9;
	/*Atravessadas*/
	if((teste[0][0] == 'X') && (teste[1][1] == 'X') && (teste[2][2] == ' ') && (cnt == 0))cnt = 10;
	if((teste[1][1] == 'X') && (teste[2][2] == 'X') && (teste[0][0] == ' ') && (cnt == 0))cnt = 11;
	if((teste[0][0] == 'X') && (teste[2][2] == 'X') && (teste[1][1] == ' ') && (cnt == 0))cnt = 12;
	if((teste[0][2] == 'X') && (teste[1][1] == 'X') && (teste[2][0] == ' ') && (cnt == 0))cnt = 13;
	if((teste[0][2] == 'X') && (teste[2][0] == 'X') && (teste[1][1] == ' ') && (cnt == 0))cnt = 14;
	if((teste[1][1] == 'X') && (teste[2][0] == 'X') && (teste[1][1] == ' ') && (cnt == 0))cnt = 15;
	/*Horizontais*/
	/*Primeira Coluna*/
	if((teste[0][0] == 'X') && (teste[1][0] == 'X') && (teste[2][0] == ' ') && (cnt == 0))cnt = 16;
	if((teste[1][0] == 'X') && (teste[2][0] == 'X') && (teste[0][0] == ' ') && (cnt == 0))cnt = 17;
	if((teste[0][0] == 'X') && (teste[2][0] == 'X') && (teste[1][0] == ' ') && (cnt == 0))cnt = 18;
	/*Segunda Coluna*/
	if((teste[0][1] == 'X') && (teste[1][1] == 'X') && (teste[2][1] == ' ') && (cnt == 0))cnt = 19;
	if((teste[1][1] == 'X') && (teste[2][1] == 'X') && (teste[0][1] == ' ') && (cnt == 0))cnt = 20;
	if((teste[0][1] == 'X') && (teste[2][1] == 'X') && (teste[1][1] == ' ') && (cnt == 0))cnt = 21;
	/*Terceira Coluna*/
	if((teste[0][2] == 'X') && (teste[1][2] == 'X') && (teste[2][2] == ' ') && (cnt == 0))cnt = 22;
	if((teste[1][2] == 'X') && (teste[2][2] == 'X') && (teste[0][2] == ' ') && (cnt == 0))cnt = 23;
	if((teste[0][2] == 'X') && (teste[2][2] == 'X') && (teste[1][2] == ' ') && (cnt == 0))cnt = 24;

	switch(cnt){

		case 1: 	teste[0][2] = 'O';	break;
		case 2:		teste[1][2] = 'O';	break;
		case 3:		teste[2][2] = 'O';	break;
		case 4:		teste[0][0] = 'O';	break;
		case 5:		teste[1][0] = 'O';	break;
		case 6:		teste[2][0] = 'O';	break;
		case 7:		teste[0][1] = 'O';	break;
		case 8:		teste[1][1] = 'O';	break;
		case 9:		teste[2][1] = 'O';	break;
		case 10:	teste[2][2] = 'O';	break;
		case 11:	teste[0][0] = 'O';	break;
		case 12:	teste[1][1] = 'O';	break;
		case 13:	teste[2][0] = 'O';	break;
		case 14:	teste[1][1] = 'O';	break;
		case 15:	teste[0][2] = 'O';	break;
		case 16:	teste[2][0] = 'O';	break;
		case 17:	teste[0][0] = 'O';	break;
		case 18:	teste[1][0] = 'O';	break;
		case 19:	teste[2][1] = 'O';	break;
		case 20:	teste[0][1] = 'O';	break;
		case 21:	teste[1][1] = 'O';	break;
		case 22:	teste[2][2] = 'O';	break;
		case 23:	teste[0][2] = 'O';	break;
		case 24:	teste[1][2] = 'O';	break;
		default:	aleatorio(teste);	break;
	}
	return cnt;
}

int com_ataque(char teste[3][3]){

	int cont = 0;

	/*Horizontais*/
	/*Primeira Linha*/
	if((teste[0][0] == 'O') && (teste[0][1] == 'O') && (teste[0][2] == ' ') && (cont == 0)) cont = 1;
	if((teste[0][1] == 'O') && (teste[0][2] == 'O') && (teste[0][0] == ' ') && (cont == 0)) cont = 2;
	if((teste[0][0] == 'O') && (teste[0][2] == 'O') && (teste[0][1] == ' ') && (cont == 0)) cont = 3;
	/*Segunda Linha*/
	if((teste[1][1] == 'O') && (teste[1][2] == 'O') && (teste[1][0] == ' ') && (cont == 0)) cont = 4;
	if((teste[1][0] == 'O') && (teste[1][2] == 'O') && (teste[1][1] == ' ') && (cont == 0)) cont = 5;
	if((teste[1][0] == 'O') && (teste[1][1] == 'O') && (teste[1][2] == ' ') && (cont == 0)) cont = 6;
	/*Terceira Linha*/
	if((teste[2][1] == 'O') && (teste[2][2] == 'O') && (teste[2][0] == ' ') && (cont == 0)) cont = 7;
	if((teste[2][0] == 'O') && (teste[2][2] == 'O') && (teste[2][1] == ' ') && (cont == 0)) cont = 8;
	if((teste[2][0] == 'O') && (teste[2][1] == 'O') && (teste[2][2] == ' ') && (cont == 0)) cont = 9; 
	/*Verticais*/
	/*Primeira Coluna*/
	if((teste[1][0] == 'O') && (teste[2][0] == 'O') && (teste[0][0] == ' ') && (cont == 0)) cont = 10;
	if((teste[0][0] == 'O') && (teste[2][0] == 'O') && (teste[1][0] == ' ') && (cont == 0)) cont = 11;
	if((teste[0][0] == 'O') && (teste[1][0] == 'O') && (teste[2][0] == ' ') && (cont == 0)) cont = 12;
	/*Segunda Colun*/
	if((teste[1][1] == 'O') && (teste[2][1] == 'O') && (teste[0][1] == ' ') && (cont == 0)) cont = 13;
	if((teste[0][1] == 'O') && (teste[2][1] == 'O') && (teste[1][1] == ' ') && (cont == 0)) cont = 14;
	if((teste[0][1] == 'O') && (teste[1][1] == 'O') && (teste[2][1] == ' ') && (cont == 0)) cont= 15;
	/*Terceira Coluna*/
	if((teste[1][2] == 'O') && (teste[2][2] == 'O') && (teste[0][2] == ' ') && (cont == 0)) cont = 16;
	if((teste[0][2] == 'O') && (teste[2][2] == 'O') && (teste[1][2] == ' ') && (cont == 0)) cont = 17;
	if((teste[0][2] == 'O') && (teste[1][2] == 'O') && (teste[2][2] == ' ') && (cont == 0)) cont = 18;
	/*Diagonais*/
	/*Decrescente*/
	if((teste[1][1] == 'O') && (teste[2][2] == 'O') && (teste[0][0] == ' ') && (cont == 0)) cont = 19;
	if((teste[0][0] == 'O') && (teste[2][2] == 'O') && (teste[1][1] == ' ') && (cont == 0)) cont = 20;
	if((teste[0][0] == 'O') && (teste[1][1] == 'O') && (teste[2][2] == ' ') && (cont == 0)) cont = 21;
	/*Crescente*/
	if((teste[1][1] == 'O') && (teste[2][0] == 'O') && (teste[0][2] == ' ') && (cont == 0)) cont = 22;
	if((teste[0][2] == 'O') && (teste[2][0] == 'O') && (teste[1][1] == ' ') && (cont == 0)) cont = 23;
	if((teste[0][2] == 'O') && (teste[1][1] == 'O') && (teste[2][0] == ' ') && (cont == 0)) cont = 24;

	switch(cont){
		case 1:		teste[0][2] = 'O';	break;
		case 2:		teste[0][0] = 'O';	break;
		case 3:		teste[0][1] = 'O';	break;
		case 4:		teste[1][0] = 'O';	break;
		case 5:		teste[1][1] = 'O';	break;
		case 6:		teste[1][2] = 'O';	break;
		case 7:		teste[2][0] = 'O';	break;
		case 8:		teste[2][1] = 'O';	break;
		case 9:		teste[2][2] = 'O';	break;
		case 10:	teste[0][0] = 'O';	break;
		case 11:	teste[1][0] = 'O';	break;
		case 12:	teste[2][0] = 'O';	break;
		case 13:	teste[0][1] = 'O';	break;
		case 14:	teste[1][1] = 'O';	break;
		case 15:	teste[2][1] = 'O';	break;
		case 16:	teste[0][2] = 'O';	break;
		case 17:	teste[1][2] = 'O';	break;
		case 18:	teste[2][2] = 'O';	break;
		case 19:	teste[0][0] = 'O';	break;
		case 20:	teste[1][1] = 'O';	break;
		case 21:	teste[2][2] = 'O';	break;
		case 22:	teste[0][2] = 'O';	break;
		case 23:	teste[1][1] = 'O';	break;
		case 24:	teste[2][0] = 'O';	break;
		default:	com_defesa(teste);	break;
	}
    return cont;
}

int computador(char teste[3][3]){

	int cont = 0;
	int i, j;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(teste[i][j] == ' '){
				cont += 1;
			}
		}
	}

	switch(cont){

		case 8:

			if(teste[1][1] == ' '){
				teste[1][1] = 'O';
			} else {
				aleatorio(teste);
			}
			break;

		case 6:
			com_ataque(teste);
			break;

		case 4:
			com_ataque(teste);
			break;

		case 2:
			com_ataque(teste);
			break;

		default:
			if(ganhador(teste) != 0){
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						if(teste[i][j] == ' ') teste[i][j] = 'O';
					}
				}
			}
			break;
	}

	return 0;
}

int mostra_matriz(char teste[3][3]){

	printf("\n\t\t %c | %c | %c", teste[0][0], teste[0][1], teste[0][2]);
	printf("\n\t\t-----------");
	printf("\n\t\t %c | %c | %c", teste[1][0], teste[1][1], teste[1][2]);
	printf("\n\t\t-----------");
	printf("\n\t\t %c | %c | %c", teste[2][0], teste[2][1], teste[2][2]);
	putchar('\n');

	return 0;
}

void dois_jogadores(){

	int a, b;

	char forma[3][3] = {
						{' ', ' ', ' '},
						{' ', ' ', ' '},
						{' ', ' ', ' '}
					};

	int escolha, fim = 0, jogador = 2, sair = 0;

	do {

		system("cls");

		cabecalho();
		mostra_matriz(forma);

		if(ganhador(forma) == 1){
			printf("\n\n\t\tO jogador 1 ganhou!\n");
			fim = 1;
			sair = 1;
		} else if (ganhador(forma) == 2){
			printf("\n\n\t\tO jogador 2 ganhou!\n");
			sair = 1;
			fim = 1;
		} else if(ganhador(forma) == 3){
			printf("\n\n\t\tO jogo ficou empatado!\n");
			sair = 1;
			fim = 1;
		} else if(ganhador(forma) == 0){
			if(jogador == 1) jogador = 2;
			else if(jogador == 2) jogador = 1;
			sair = 0;
		}

		if((ganhador(forma) == 1) || (ganhador(forma) == 2) || (ganhador(forma) == 3)){
			printf("\nEscolha uma das opcoes:\n\t1 - Jogar novamente\n\t2 - Voltar\n");
			scanf("%i", &escolha);

			if(escolha == 1){
				um_jogador();
			} else {
				system("cls");
				main();
			}
		}

		while(sair == 0){
			if(jogador == 1){
				printf("\n\nDigite uma linha e uma coluna jogador 1: ");
				scanf("%i %i", &a, &b);
				a -= 1;
				b -= 1;
				if(forma[a][b] == ' '){
					forma[a][b] = 'X';
					sair = 1;
				} else {
					printf(preenchido);
					sair = 0;
				}
			} else if(jogador == 2){
				printf("\n\nDigite uma linha e uma coluna jogador 2: ");
				scanf("%i %i", &a, &b);
				a -= 1;
				b -= 1;
				if(forma[a][b] == ' '){
					forma[a][b] = 'O';
					sair = 1;
				} else {
					printf(preenchido);
					sair = 0;
				}
			}

		}


	}while(fim == 0);
}

void um_jogador(){

	int escolha, i = 1, sair = 0, a = 1;

	char forma[3][3] = {
							{' ', ' ', ' '},
							{' ', ' ', ' '},
							{' ', ' ', ' '}
						};
	do{

		system("cls");

		cabecalho();

		mostra_matriz(forma);

		if(ganhador(forma) == 1){
			printf("\n\tParabens!! Voce Ganhou\n");
			i++;
			sair = 1;
		}
		if(ganhador(forma) == 2){
			printf("\n\tInfelizmente voce foi derrotado por mim...");
			sleep(3);
			printf("\n\t\tHahahahahahaha CHORA\n");
			i++;
			sair = 1;
		}
		if(ganhador(forma) == 3){
			printf("\n\tVoce eh bom hein, o jogo ficou empatado\n");
			sair = 1;
		}

		if((ganhador(forma) == 1) || (ganhador(forma) == 2) || (ganhador(forma) == 3)){
			printf("\nEscolha uma das opcoes:\n\t1 - Jogar novamente\n\t2 - Voltar\n");
			scanf("%i", &escolha);

			if(escolha == 1){
				um_jogador();
			} else {
				system("cls");
				main();
			}
		}

		if(a == 1){
			voce(forma);
			a++;
		} else if(a == 2){
			computador(forma);
			a--;
		}

	}while(i==1);
}

int voce(char teste[3][3]){

	int a, b, sair = 0;
	do{

		printf("\nInforme uma linha e coluna (entre 1 e 3): ");
		scanf("%i %i", &a, &b);

		a -= 1;
		b -= 1;

		if(teste[a][b] == ' '){ teste[a][b] = 'X'; sair = 0;}
		else if((teste[a][b] == 'X') || (teste[a][b] == 'O')){
			printf("\nA posicao escolhida ja foi preenchida, nao visse? Escolhe outra inteligente\n");
			sair = 1;
		}

	}while(sair == 1);

	return 0;
}

int main(){

	int escolha;
	
	system("color 2e");
	
	cabecalho();

	printf("\nEscolha uma das opcoes abaixo\n");
	printf("\t1 - Single Player\n\t2 - Multiplayer\n\t3 - Sair\n");
	scanf("%i", &escolha);

	if(escolha == 1){
		um_jogador();
	} else if(escolha == 2){
		dois_jogadores();
	} else {
		system("exit");
	}

	return 0;
}
