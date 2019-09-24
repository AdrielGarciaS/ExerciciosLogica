#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/* 1 – Faça um algoritmo que leia a quantidade de produtos vendidos em uma loja e armazene em uma variável
(intero), o preço dos produtos (float) e a quantidade de parcelas (inteiro).
Imprimir o valor total da compra (quantidade de produtos vendidos * preço de cada produto), valor de cada parcela
(total da compra / quantidade de parcelas). */
	/*
	int qtdProdVend, qtdParcelas;
	float precoProd, vlrTotalCompra, vlrParcela;	
	cout << "Digite a quantidade de produtos vendidos: " << endl;
	cin >> qtdProdVend;
	cout << "Digite o preco dos produtos: " << endl;
	cin >> precoProd;
	cout << "Digite a quantidade de parcelas: " << endl;
	cin >> qtdParcelas;
	
	vlrTotalCompra = qtdProdVend * precoProd;
	vlrParcela = vlrTotalCompra / qtdParcelas;
	
	printf("O valor total da compra e: R$ %.2f\n", vlrTotalCompra);
	printf("O valor de cada parcela e: R$ %.2f\n", vlrParcela); 
	*/
	
	/* 2 – Faça um algoritmo que leia três números float e calcule a média desses números. Essa média será a soma dos
três números dividido por 3. */
/*
	
	float n1, n2, n3, media;
	cout << "Digite o primeiro numero: " << endl;
	cin >> n1;
	cout << "Digite o segundo numero: " << endl;
	cin >> n2;
	cout << "Digite o terceiro numero: " << endl;
	cin >> n3;
	
	media = (n1 + n2 + n3) / 3;
	
	printf("A media e: %.2f", media);
	*/
	
	/* 3 – Faça um algoritmo que leia quatro números inteiros e realize as seguintes operações:
- Some 25 ao primeiro inteiro;
- Triplique o valor do segundo inteiro;
- Modifique o valor do terceiro inteiro para 12% do valor original;
- Armazene no quarto inteiro a soma dos valores originais (os que o usuário digitou) dos primeiros três inteiros. */
	
	
	int n1, n2, n3, n4;
	float  calcPorcent;
	cout << "Digite o primeiro numero: " << endl;
	cin >> n1;
	cout << "Digite o segundo numero: " << endl;
	cin >> n2;
	cout << "Digite o terceiro numero: " << endl;
	cin >> n3;
	cout << "Digite o quarto numero: " << endl;
	cin >> n3;
	
	n4 = n1 + n2 + n3;
	n1 = n1 + 25;
	n2 = n2 * 3;
	calcPorcent = (float)n3 * 0.12;
	
	
	cout << "Primeiro numero + 25: " << n1 << endl;
	cout << "Segundo numero vezes 3: " << n2 << endl;
	printf("12%% do terceiro numero: %.2f\n", calcPorcent);
	cout << "A soma dos 3 primeiros valores digitados pelo usuario: " << n4 << endl;
	
	
	
	return 0;
}
