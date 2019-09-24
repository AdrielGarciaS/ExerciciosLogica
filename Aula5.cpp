#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	/*1. Escreva um algoritmo que construa um menu com três funções: (I) Inclusão, (A) Alteração e (T)
Término e mostre para o usuário a opção escolhida. */

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
	
	/*2. O programa recebe um dígito de 0 a 5 e imprime na tela, este dígito, por extenso. Neste exercício a
variável dígito é do tipo inteiro.*/
	
	/*
	int vlr;
	cout << "Digite um valor entre 0 e 5:" << endl;
	cin >> vlr;
	
	if (vlr == 0) {
		cout << "Zero" << endl;
	} else if (vlr == 1) {
		cout << "Um" << endl;
	} else if (vlr == 2) {
		cout << "Dois" << endl;
	} else if (vlr == 3) {
		cout << "Tres" << endl;
	} else if (vlr == 4) {
		cout << "Quatro" << endl;
	} else if (vlr == 5) {
		cout << "Cinco" << endl;
	} else if (vlr < 0 || vlr > 5) {
		cout << "Valor diferente do solicitado!" << endl;
	}
	*/
	
	/* 3. O programa recebe um dígito de 6 a 10 e imprime na tela, este dígito, por extenso. Neste exercício a
variável dígito é do tipo caractere. */
	
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
	
	/* 4. Escreva um algoritmo que leia o código de origem de um produto e imprima a região do mesmo,
conforme a tabela abaixo: */
	
	/*
	int origem;
	cout << "Digite o codigo de origem do produto: " << endl;
	cin >> origem;
	
	if (origem == 1) {
		cout << "O produto vem do sul." << endl;
	} else if (origem == 2) {
		cout << "O produto vem do norte." << endl;
	} else if (origem == 3) {
		cout << "O produto vem do leste." << endl;
	} else if (origem == 4) {
		cout << "O produto vem do oeste." << endl;
	} else if (origem == 5 || origem == 6) {
		cout << "O produto vem do nordeste." << endl;
	} else if (origem >= 7 && origem <= 9){
		cout << "O produto vem do sudeste." << endl;
	} else if (origem >= 10 && origem <= 20) {
		cout << "O produto vem do centro-oeste." << endl;
	}else if (origem >= 25 && origem <= 50) {
		cout << "O produto vem do nordeste." << endl;
	} else {
		cout << "Produto importado." << endl;
	}
	*/
	
	/* 5. Faça um algoritmo que determina o preço com desconto para entradas de cinema. Estudantes recebem
50% de desconto, aposentados, 30%. Os demais clientes pagam o ingresso completo.
Categorias: Estudante: E ou e
Aposentados: A ou a
Normal: N ou n */

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
		
	}

	
	
	
		
	return 0;
}
