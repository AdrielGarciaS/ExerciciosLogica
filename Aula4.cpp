#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	/*1. Escreva um algoritmo que construa um menu com tr�s fun��es: (I) Inclus�o, (A) Altera��o e (T)
T�rmino e mostre para o usu�rio a op��o escolhida. */

	/*
	char func;
	cout << "Digite a funcao desejada: (I) inclusao, (A) alteracao e (T) termino: " << endl;
	cin >> func;
	
	switch  (func){
		case 'I':
			cout << "Voce escolheu inclusao." << endl;
		break;
		case 'i':
			cout << "Voce escolheu inclusao." << endl;
		break;
		case 'A':
			cout << "Voce escolheu alteracao." << endl;
		break;
		case 'a':
			cout << "Voce escolheu alteracao." << endl;
		break;
		case 'T':
			cout << "Voce escolheu termino." << endl;
		break;
		case 't':
			cout << "Voce escolheu termino." << endl;
		break;	
	};
	*/
	
	/*2. O programa recebe um d�gito de 0 a 5 e imprime na tela, este d�gito, por extenso. Neste exerc�cio a
vari�vel d�gito � do tipo inteiro.*/
	
	/*
	int vlr;
	cout << "Digite um valor entre 0 e 5:" << endl;
	cin >> vlr;
	
	switch (vlr) {
		case 0:
			cout << "Zero" << endl;
		break;
		
		case 1:
			cout << "Um" << endl;
		break;
		
		case 2:
			cout << "Dois" << endl;
		break;
		
		case 3:
			cout << "Tres" << endl;
		break;
		
		case 4:
			cout << "Quatro" << endl;
		break;
		
		case 5:
			cout << "Cinco" << endl;
		break;
		
		default:
			cout << "Valor diferente do solicitado!" << endl;
		break;
		
	}*/
	
	/* 3. O programa recebe um d�gito de 6 a 10 e imprime na tela, este d�gito, por extenso. Neste exerc�cio a
vari�vel d�gito � do tipo caractere. */
	
	/*
	char vlr;
	cout << "Digite um valor de 6 a 10:" << endl;
	cin >> vlr;
	
	switch (vlr) {
		case '6':
			cout << "Seis" << endl;
		break;
		case '7':
			cout << "Sete" << endl;
		break;
		case '8':
			cout << "Oito" << endl;
		break;
		case '9':
			cout << "Nove" << endl;
		break;
		case '10':
			cout << "Dez" << endl;
		break;
		
	}
	*/
	
	/* 4. Escreva um algoritmo que leia o c�digo de origem de um produto e imprima a regi�o do mesmo,
conforme a tabela abaixo: */
	
	
	int origem;
	cout << "Digite o codigo de origem do produto: " << endl;
	cin >> origem;
	
	switch (origem) {
		case 1:
			cout << "O produto vem do sul." << endl;
		break;
		
		case 2:
			cout << "O produto vem do norte." << endl;
		break;
		
		case 3:
			cout << "O produto vem do leste." << endl;
		break;
		
		case 4:
			cout << "O produto vem do oeste." << endl;
		break;
		
		case 5 ... 6:
			cout << "O produto vem do nordeste." << endl;
		break;
		
		case 7 ... 9:
			cout << "O produto vem do sudeste." << endl;
		break;
		
		case 10 ... 20:
			cout << "O produto vem do centro-oeste." << endl;
		break;
		
		case 25 ... 50:
			cout << "O produto vem do nordeste." << endl;
		break;
		
		default:
			cout << "Produto importado." << endl;
		break;
		
	}
	
	
	/* 5. Fa�a um algoritmo que determina o pre�o com desconto para entradas de cinema. Estudantes recebem
50% de desconto, aposentados, 30%. Os demais clientes pagam o ingresso completo.
Categorias: Estudante: E ou e
Aposentados: A ou a
Normal: N ou n */
	/*
	float vlrIngresso;
	char tipo;
	
	cout << "Digite o valor do ingresso: " << endl;
	cin >> vlrIngresso;
	cout << "Digite a categoria do ingresso: (N ou n) Normal, (A ou a) Aposentados e (E ou e) Estudantes: " << endl;
	cin >> tipo;
	
	switch (tipo) {
		case 'N':
			printf("O valor total e: R$ %.2f",vlrIngresso);
		break;
		case 'n':
			printf("O valor total e: R$ %.2f",vlrIngresso);
		break;
		case 'A':
			printf("O valor total e: R$ %.2f", vlrIngresso * 0.7);
		break;
		case 'a':
			printf("O valor total e: R$ %.2f", vlrIngresso * 0.7);
		break;
		case 'E':
			printf("O valor total e: R$ %.2f", vlrIngresso * 0.5);
		break;
		case 'e':
			printf("O valor total e: R$ %.2f", vlrIngresso * 0.5);
		break;
		
	} */

	
	
	
		
	return 0;
}
