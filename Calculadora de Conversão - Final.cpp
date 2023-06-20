#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>



/*	Realizar uma caluculadora para conversão de valores.

		Opções:
		
			1.	De Decimal para Binário;
			2.	De Binário para Decimal;
			3.	De Decimal para Hexadecimal;
			4.	De Hexadecimal para Decimal;
			5.	De Binário para Hexadecimal;
			6.	De Hexadecimal para Binário. 
			7.	Sair
		
		Mostrar o RESULTADO!
*/

void menuPrincipal();

void menu_1();
void menu_2();
void menu_3();
void menu_4();
void menu_5();
void menu_6();
void exit();

int main() {
	setlocale(LC_ALL, "Portuguese");
		
		menuPrincipal();
		
	return 0;
}	

void menuPrincipal() {
	
	int opcao;
	
	printf("\n		=========================	CALCULADORA DE CONVERSÃO	=========================\n\n\n");
	
	
	printf("		1. De Decimal para Binário\n		2. De Binário para Decimal\n		3. De Decimal para Hexadecimal\n		4. De Hexadecimal para Decimal\n		5. De Binário para Hexadecimal\n		6. De Hexadecimal para Binário\n		7. Sair\n\n   			Escolha uma opção: ");
	scanf("%d", &opcao);
	fflush(stdin);
	
		//	Validando Opção digitada no menu de inicio. 
		while (opcao == 0 || opcao >= 8) {
			printf("   			Escolha uma opção válida.(entre 1 a 7): ");
			scanf("%d", &opcao);
			fflush(stdin);
		}
		
	switch(opcao) {
		
		case 1:
			// De Decimal para Binário.
			system("cls");
			menu_1();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		case 2:
			// De Binário para Decimal.
			system("cls");
			menu_2();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		case 3:
			// De Decimal para Hexadecimal.
			system("cls");
			menu_3();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		case 4:
			// De Hexadecimal para Decimal.
			system("cls");
			menu_4();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		case 5:
			// De Binário para Hexadecimal;
			system("cls");
			menu_5();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
			break;
		case 6:
			// De Hexadecimal para Binário.
			system("cls");
			menu_6();
			printf("\n\n   			Pressione qualquer tecla para retornar ao  Menu Principal.\n\n");
			system("pause");
			system("cls");
			menuPrincipal();
		case 7:
			exit();
			break;	
	}	
		
	
}

void menu_1() {
	
	char repetir;
	
	do {
		
		system("cls");
	
		int num, z = -1, mod_dec_bin[20];
		
			printf("\n		=========================	CONVERSÃO DE DECIMAL PARA BINÁRIO	=========================\n\n\n");
			
			printf("		Digite o valor desejado para conversão:");
			scanf("%d", &num);
			fflush(stdin);
			
			do {
				if (num >= 2) {
					for (int i = 0; i < 1; i++) {
						
						z++;
						mod_dec_bin[z] = num % 2;
						
						fflush(stdin);
						
						num = num / 2;
						
						fflush(stdin);
					}
				}
			} while(num >= 2);
				
				fflush(stdin);
				
				printf("\n\n			Resultado: %d", num);
				fflush(stdin);
				
			for (int k = z; k >= 0; k--) {
				printf("%d", mod_dec_bin[k]);
			}
			
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);	
			
	} while(repetir == 's');
		
}

void menu_2() {
	
	char repetir;
	
	do {
		
		system("cls");
	
	
		char num[100];
		int decimal = 0;
		
		printf("\n		=========================	CONVERSÃO DE BINÁRIO PARA DECIMAL	=========================\n\n\n");
		
		printf("		Digite o valor desejado para conversão:");
		scanf("%s", &num);
	
		int tam;
		tam = strlen(num); //verifica quantos dígitos tem no número
		
		for (int i = tam-1; i >= 0; i--) {
			
			if (num[i] == '1') {
				decimal += pow(2,tam-1-i);
			}
		}
		
			fflush(stdin);
			printf("\n\n			Resultado: %d", decimal);
			fflush(stdin);
			
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);
				
	} while(repetir == 's');
		
}
	
void menu_3() {
	
	char repetir;
	
	do {
		
		system("cls");
	
		int num, z = -1, mod_dec_hex[20];
		char num_para_letra;
		
		printf("\n		=========================	CONVERSÃO DE DECIMAL PARA HEXADECIMAL	=========================\n\n\n");
			
			printf("		Digite o valor desejado para conversão:");
			scanf("%d", &num);
			fflush(stdin);
			
		do {
			if (num >= 16) {
				for (int i = 0; i < 1; i++) {
					
					z++;
					mod_dec_hex[z] = num % 16;
					fflush(stdin);
					
					num = num / 16;
					fflush(stdin);
				}
			}
		} while(num >= 16);
			
				fflush(stdin);
				printf("\n\n			Resultado: ");
				fflush(stdin);
				
			
				
			if (num <=15) {
					
					switch (num) {
						case 10:
							printf("A");
							break;
						case 11:
							printf("B");
							break;
						case 12:
							printf("C");
							break;
						case 13:
							printf("D");
							break;
						case 14:
							printf("E");
							break;
						case 15:
							printf("F");
							break;
						default:
							printf("%d ", num);
							fflush(stdin);
							break;
					}
			}
						
			for (int k = z; k >= 0; k--) {
				if (mod_dec_hex[k] <=15) {
					
					switch (mod_dec_hex[k]) {
						case 10:
							printf("A");
							break;
						case 11:
							printf("B");
							break;
						case 12:
							printf("C");
							break;
						case 13:
							printf("D");
							break;
						case 14:
							printf("E");
							break;
						case 15:
							printf("F");
							break;
						default:
							printf("%d ", mod_dec_hex[k]);
							fflush(stdin);
							break;
					}
				}
			}
			
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);
				
	} while(repetir == 's');			

}

void menu_4() {
	
	char repetir;
	
	do {
		
		system("cls");
		
		int hex_para_dec;
		
		printf("\n		=========================	CONVERSÃO DE HEXADECIMAL PARA DECIMAL	=========================\n\n\n");
				
			printf("		Digite o valor desejado para conversão: ");
			scanf("%x", &hex_para_dec);
			fflush(stdin);
			
			fflush(stdin);
			printf("\n\n			Resultado: %d", hex_para_dec);
			fflush(stdin);
			
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);	
			
	} while(repetir == 's');
			
}
				
void menu_5() {
	
	char repetir;
	
	do {
		
		system("cls");
	
	
		char num[100];
		int decimal = 0;
		
		printf("\n		=========================	CONVERSÃO DE BINÁRIO PARA HEXADECIMAL	=========================\n\n\n");
		
		printf("		Digite o valor desejado para conversão:");
		scanf("%s", &num);
	
		int tam;
		tam = strlen(num); //verifica quantos dígitos tem no número
		
		for (int i = tam-1; i >= 0; i--) {
			
			if (num[i] == '1') {
				decimal += pow(2,tam-1-i);
			}
		}
		
		//		Conversão de Decimal para Hexadecimal
			
		int decParaHexa, z = -1, mod_dec_hex[100];
		char num_para_letra;
		
		decParaHexa = decimal;
		fflush(stdin);
		
		do {
			if (decParaHexa >= 16) {
				for (int i = 0; i < 1; i++) {
					
					z++;
					mod_dec_hex[z] = decParaHexa % 16;
					fflush(stdin);
					
					decParaHexa = decParaHexa / 16;
					fflush(stdin);
				}
			}
			
		} while(decParaHexa >= 16);
			
				fflush(stdin);
				printf("\n\n			Resultado: ");
				fflush(stdin);
				
			if (decParaHexa <=15) {
					
				switch (decParaHexa) {
					case 10:
						printf("A");
						break;
					case 11:
						printf("B");
						break;
					case 12:
						printf("C");
						break;
					case 13:
						printf("D");
						break;
					case 14:
						printf("E");
						break;
					case 15:
						printf("F");
						break;
					default:
						printf("%d", decParaHexa);
						fflush(stdin);
						break;
				}
		}
					
		for (int k = z; k >= 0; k--) {
			if (mod_dec_hex[k] <=15) {
				
				switch (mod_dec_hex[k]) {
					case 10:
						printf("A");
						break;
					case 11:
						printf("B");
						break;
					case 12:
						printf("C");
						break;
					case 13:
						printf("D");
						break;
					case 14:
						printf("E");
						break;
					case 15:
						printf("F");
						break;
					default:
						printf("%d", mod_dec_hex[k]);
						fflush(stdin);
						break;
				}
			}
		}
		
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);	
			
	} while(repetir == 's');
			
			
			
}

void menu_6() {
	
	char repetir;
	
	do {
		
		system("cls");
		
		int contador = -1;
		char num[30], aux[300] = {' '};
	
		for (int i = 0; i < 30; i++) {
			num[i] = ' ';
			
	
		}
		
		printf("\n		=========================	CONVERSÃO DE HEXADECIMAL PARA BINÁRIO	=========================\n\n\n");
	
		fflush(stdin);
		printf("		Digite o valor desejado para conversão:");
		scanf("%s", &num);
		fflush(stdin);
		
		for (int i = 0; i < 30; i++) {
			if (num[i] != ' ') {
				contador++;
			}
		}	
		
		for (int k = 0; k < contador; k++) {
			
			fflush(stdin);
					
			if(num[k] == '0') {
				fflush(stdin);
		        strcat(aux,"0000");
		    }
		    else if(num[k] == '1') {
		    	fflush(stdin);
		        strcat(aux,"0001");
		    }
		    else if(num[k] == '2') {
		    	fflush(stdin);
		        strcat(aux,"0010");
		    }
		    else if(num[k] == '3') {
		    	fflush(stdin);
		        strcat(aux,"0011");
		    }
		    else if(num[k] == '4') {
		    	fflush(stdin);
		        strcat(aux,"0100");
		    }
		    else if(num[k] == '5') {
		    	fflush(stdin);
		        strcat(aux,"0101");
		    }
		    else if(num[k] == '6') {
		    	fflush(stdin);
		        strcat(aux,"0110");
		    }
		    else if(num[k] == '7') {
		    	fflush(stdin);
		        strcat(aux,"0111");
		    }
		    else if(num[k] == '8') {
		    	fflush(stdin);
		        strcat(aux,"1000");
		    }
		    else if(num[k] == '9') {
		    	fflush(stdin);
		        strcat(aux,"1001");
		    }
		    else if((num[k] == 'A')||(num[k])=='a') {
		    	fflush(stdin);
		    	strcat(aux,"1010");
			}
		    else if((num[k] == 'B')||(num[k])=='b') {
		    	fflush(stdin);
		        strcat(aux,"1011");
		    }
		    else if((num[k] == 'C')||(num[k])=='c') {
		    	fflush(stdin);
		        strcat(aux,"1100");
		    }
		    else if((num[k] == 'D')||(num[k])=='d') {
		    	fflush(stdin);
		        strcat(aux,"1101");
		    }
		    else if((num[k] == 'E')||(num[k])=='e') {
		    	fflush(stdin);
		        strcat(aux,"1110");
		    }
		    else if((num[k] == 'F')||(num[k])=='f') {
		    	fflush(stdin);
		        strcat(aux,"1111");
		    } 
		    
			fflush(stdin);
		}
		    
		fflush(stdin);
		printf("\n\n			Resultado:%s", aux);
		fflush(stdin);
		
		printf("\n\n\n		Digite a letra(s) se deseja repetir ou qualquer outra para descartar opção: ");
		scanf("%c", &repetir);
		
	} while(repetir == 's');
							
}

void exit () {
	
	printf("\n\n\nRealizado Finalização!");
	
	exit(0);
}


