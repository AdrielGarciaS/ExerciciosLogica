#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/* 1- Faça um algoritmo que leia, mostre e calcule a soma dos elementos de uma matriz 7 X 9 de inteiros. */
	/*
	int matriz[7][9], soma= 0;
	
	for(int lin = 0; lin < 7; lin++){
		for(int col = 0; col < 9; col++){
			cout << "Digite um valor para a matriz" << endl;
			cin >> matriz[lin][col];
			soma += matriz[lin][col];
		}
	} 
	
	for(int lin = 0; lin < 7; lin++){
		for(int col = 0; col < 9; col++){
			if (matriz[lin][col] < 10){
				cout << "  " << matriz[lin][col] << " ";
			} else if (matriz[lin][col] < 100){
				cout << " " <<  matriz[lin][col] << " ";
			} else{
				cout <<  matriz[lin][col] << " ";
			}
		}
		cout << endl;
	}
	
	cout << "A soma de todos valores da matriz e: " << soma << endl;
	*/
	
	/* 2- Gerar (sem ler) e imprimir uma matriz de 10 linhas e 10 colunas cujos elementos são 1, 2, 3, ... , 99, 100. */
	/*
	int m[10][10], aux = 0;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			m[i][j] = aux;
			aux++;
			
			if(m[i][j] < 10) {
				cout << "0" << m[i][j] << " ";
			} else {
				cout << m[i][j] << " ";
			}
			
		}
		
		cout << endl;
	}
	*/
	
	/* 3- Criar e imprimir a matriz identidade MI[1..7,1..7] em que todos os elementos da diagonal principal são
	iguais a 1 e os demais são nulos. */
	/*
	int mi[7][7];
	
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++){
			if (i == j){
				mi[i][j] = 1;
			} else {
				mi[i][j] = 0;
			}
			
			cout << mi[i][j] << " ";
		}
		cout << endl;
	}
	*/
	
	/* 4- Dada uma matriz M[1..6,1..8], criar um vetor C que contenha, em cada posição, a quantidade de
	elementos negativos da linha correspondente de M. */
	/*
	int m[6][8], countN = 0;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 8; j++){
			cout << "Digite um valor para o vetor: " << endl;
			cin >> m[i][j];
		}
	}
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 8; j++){
			if(m[i][j] < 0){
				countN++;
			}
			if(m[i][j] < 10){
				cout << m[i][j] << " ";
			} else if (m[i][j] < 100){
				cout << m[i][j] << " ";
			}
		}
		cout << "Nesta linha contem " << countN << " numeros negativos" << endl;
		countN = 0;
	}
	*/
	
	/* 5- Faça um algoritmo que leia uma matriz de 15 X 20 de reais e mostre a soma de cada coluna
	separadamente. */
	/*
	int m[15][20], soma = 0;
	
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 20; j++){
			cout << "Digite um valor para posicao " << i << " X " << j << endl;
			cin >> m[i][j];
		}
	}
	
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 20; j++){
			cout << " " << m[i][j];
		}
		cout << endl;
	}
	
	for(int i = 0; i < 15; i++){
		for(int j = 0; j < 20; j++){
			soma+= m[j][i];;
		}
		
		cout << "O valor da soma da coluna #" << i << " e igual a: " << soma << endl;
		soma = 0;
	}
	*/
	
	/* 6- Faça um algoritmo que leia uma matriz de 20 X 15 de inteiros. Calcule e mostre a soma das linhas
	pares da matriz. */
	/*
	int m[20][15], soma = 0;
	
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 15; j++){
			cout << "Digite um valor para posicao " << i << " X " << j << endl;
			cin >> m[i][j];
		}
	}
	
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 15; j++){
			
			if(m[i][j] < 10) {
				cout << "0" << m[i][j] << " ";
			} else {
				cout << m[i][j] << " ";
			}
			
		}
		cout << endl;
	}
	
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 15; j++){
			if (i %2 == 0){
				soma+= m[i][j];
			}
			
		}
		if (i % 2 == 0) {
			cout << "O valor da soma da linha #" << i << " e igual a: " << soma << endl;
			soma = 0;
		}
		
	}
	*/
	
	/* 7- Dada a matriz M[1..4,1..7], criar e imprimir um vetor S[1..4] em que cada elemento contém a soma dos
	elementos de uma linha de M. */
	
	int m[4][7], vet[4] = {};
	
	for(int i = 0; i < 4; i++){
		for (int j = 0; j < 7; j++){
			cout << "Digite um valor para a matriz" << endl;
			cin >> m[i][j];
			vet[i] += m[i][j];
		}
	}
	
	for(int i = 0; i < 4; i++){
		for (int j = 0; j < 7; j++){
			if(m[i][j] < 10){
				cout << "0" << m[i][j] << " ";
			} else if (m[i][j] < 100){
				cout << "  " << m[i][j] " ";
			} else {
				cout << "  " << m[i][j];
			}
			
		}
	}
	

	
	
	
	
	
	return 0;
}
