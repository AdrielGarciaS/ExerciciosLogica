#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
	
	/* 1. Fa�a um algoritmo que receba o ano de nascimento de 30 pessoas e o ano atual, calcule e mostre: a
	idade de cada pessoa; quantos anos cada pessoa ter� em 2029.
	*/
	/*
	int anoAtual, anoNasc, count = 0;
	cout << "Digite o ano atual: " << endl;
	cin >> anoAtual;
	while (count < 30) {
		cout << "Digite o ano de nascimento: " << endl;
		cin >> anoNasc;
		cout << "Idade: " << anoAtual - anoNasc << endl;
		cout << "Idade em 2029: " << 2029 - anoNasc << endl;
		count++;
	}
	*/
	
	/* 2. Fa�a um algoritmo que leia 22 n�meros inteiros positivos maiores que zero. A cada n�mero
	informado calcule e mostre:
	a. O n�mero digitado;
	b. A metade do n�mero digitado;
	c. O dobro do numero digitado;
	d. O n�mero digitado ao cubo.
	*/
	/*
	int num, count = 0;
	
	while (count < 22){
		cout << "Digite um valor: " << endl;
		cin >> num;
		
		cout << "Numero digitado: " << num << endl;
		cout << "Metade do numero digitado: " << num / 2 << endl;
		cout << "O dobro do numero digitado: " << num * 2 << endl;
		cout << "O numero digitado ao cubo: " << num * num * num << endl;
		
		count++;
	}
	*/
	
	/* 3. Fa�a um algoritmo que leia o valor do sal�rio de 35 funcion�rios e o valor do sal�rio m�nimo.
	Calcule e mostre a quantidade de sal�rios m�nimos que cada funcion�rio ganha.
	*/
	/*
	float salarioMinimo, salario, count = 0;
	
	cout << "Digite o valor do salario minimo: " << endl;
	cin >> salarioMinimo;
	
	while (count < 35){
		cout << "Digite o valor do salario do funcionario: " << endl;
		cin >> salario;
		
		printf("O funcionario recebe %.2f salarios minimos. \n", salario / salarioMinimo);
		count++;
	}
	*/
	
	/* 4. Ler um n�mero inteiro N (s� aceitar valores positivos. Caso o N n�o seja positivo dever� ser lido um
	novo valor para o N) e escrever os divisores de N
	*/
	/*
	int vlr, count = 0;
	
	cout << "Digite um valor: " << endl;
	cin >> vlr;
	
	while (vlr > 0) {
		for (int i = 1; i <= vlr; i++){
			if (vlr % i == 0){
				cout << i << endl;
			}
		}
		cout << "Digite um valor: " << endl;
		cin >> vlr;
	}
	if (vlr < 0) {
		cout << "Digite um novo valor: " << endl;
		cin >> vlr;
			for (int i = 1; i <= vlr; i++){
				if (vlr % i == 0){
					cout << i << endl;
				}
			}
		}	
	*/
	
	/* 5. Ler um n�mero inteiro N (s� aceitar valores positivos. Caso o N n�o seja positivo dever� ser lido um
	novo valor para o N) e escrever se � ou n�o um n�mero PRIMO.
	*/
	/*
	int vlr, count = 0, primo;
	
	cout << "Digite um valor: " << endl;
	cin >> vlr;
	
	while (vlr > 0){
		for (int i = 1; i <= vlr; i++){
			if (vlr % 2 == 0){
				if (vlr % i == 0 && i > 1) {
					cout << "Nao e primo" << endl;
				} 
			} else {
				cout << "Primo" << endl;
			}
		}
		cout << "Digite um valor: " << endl;
		cin >> vlr;
	}
	if (vlr < 0) {
		cout << "Digite um novo valor: " << endl;
		cin >> vlr;
			for (int i = 1; i <= vlr; i++){
			if (vlr % 2 == 0){
				if (vlr % i == 0 && i > 1) {
					cout << "Nao e primo" << endl;
				} 
			} else {
				cout << "Primo" << endl;
			}
		}
	}
	*/
	
	/* 6. Fa�a um algoritmo que receba o sal�rio de 17 empregados e o seu percentual de aumento. Calcule e
	mostre o valor do aumento e o novo sal�rio.
	*/
	/*
	float salario, aumento;
	int count = 0;
	
	
	while (count < 17){
		cout << "Digite o salario: " << endl;
		cin >> salario;
		cout << "Digite quantos % de aumento: " << endl;
		cin >> aumento;
		printf("O salario com aumento ficou: R$ %.2f\n", salario * (aumento /= 100) + salario);
		
		count++;	
	}
	*/
	
	/*7. Fa�a um algoritmo que leia tr�s notas de um n�mero indeterminado de alunos. Calcule e mostre:
	a. A m�dia de cada aluno;
	b. O total de alunos reprovados;
	c. O total de alunos aprovados
	d. A m�dia da turma
	Obs.: Considere m�dia >= 7 aprovados e caso contr�rio reprovados.
	Para calcular a m�dia final descarte a nota mais baixa e duplique a nota mais alta.
	*/
	
	/*
	float mediaAluno, somaNotasTurma = 0, n1, n2 = 0, n3, maior = INT_MIN, menor = INT_MAX, notaMedia;
	int totalAprovados = 0, totalReprovados = 0;
	
	cout << "Digite a primeira nota do aluno ou 999 para sair" << endl;
	cin >> n1;
	
	while (n1 != 999){
		menor = n1;
		maior = n1;
		notaMedia = n1;
		cout << "Digite a segunda nota do aluno" << endl;
		cin >> n2;
		//testa se n2 � maior ou menor que o valor ja informado
		if (n2 < menor){
			menor = n2;
			//cout << "menor" << menor << endl;
		}
		if (n2 > maior){
			maior = n2;
			//cout<< "maior" << maior << endl;
		} 
		cout << "Digite a terceira nota do aluno" << endl;
		cin >> n3;
		//testa se n3 � maior ou menor que os valores ja informados
		if (n3 < menor) {
			menor = n3;
			//cout << "menor" << menor << endl;
		}
		if (n3 > maior){
			maior = n3;
			//cout<< "maior" << maior << endl;
		}
		//testa o segundo valor mais alto
		if (n1 > menor && n1 < maior){
			notaMedia = n1;
			//cout<< "medio" << notaMedia << endl;
		} else if (n2 > menor && n2 < maior){
			notaMedia = n2;
			//cout<< "medio" << notaMedia << endl;
		} else if (n3 > menor && n3 < maior){
			notaMedia = n3;
			//cout<< "medio" << notaMedia << endl;
		}
		
		mediaAluno = ((maior * 2) + notaMedia) / 3;
		if (mediaAluno >= 7){
			somaNotasTurma += mediaAluno;
			totalAprovados++;
			printf("A media do aluno e %.2f\n", mediaAluno);
		} else {
			somaNotasTurma += mediaAluno;
			totalReprovados++;
			printf("A media do aluno e %.2f\n", mediaAluno);
		}
		
	cout << "Digite a primeira nota do aluno ou 999 para sair" << endl;
	cin >> n1;
	}
	cout << "O total de alunos reprovados e: " << totalReprovados << endl;
	cout << "O total de alunos aprovados e: " << totalAprovados << endl;
	printf("A media total da turma e: %.2f", somaNotasTurma / (totalAprovados + totalReprovados));
	*/
	
	/* 8. Os funcion�rios de uma loja de motos recebem um sal�rio fixo mais 4% de comiss�o sobre as
	vendas. Fa�a um algoritmo que leia o n�mero de funcion�rios, o sal�rio fixo e o valor das vendas de
	cada funcion�rio. Calcule e mostre o valor da comiss�o, o sal�rio final de cada funcion�rio e o valor
	total da folha de pagamento da loja. */
	/*
	float salario, salarioTotal, vendas = 0, folhaPagamento = 0;
	int qtdFunc;
	
	cout << "Digite a quantidade de funcionarios: " << endl;
	cin >> qtdFunc;
	
	while (qtdFunc > 0){
		cout << "Digite o salario do funcionario:" << endl;
		cin >> salario;
		cout << "Digite o valor das vendas: " << endl;
		cin >> vendas;
		
		vendas *= 0.04;
		salarioTotal = salario + vendas;
		printf("O salario total do funcionario e: R$ %.2f\n", salarioTotal);
		printf("O valor da comissao do funcionarioe: R$ %.2f\n", vendas);
		folhaPagamento += salarioTotal;
		
		qtdFunc--;		
	}
	
	printf("A folha de pagamento e no valor de: R$ %.2f\n", folhaPagamento);
	*/
	
	/*9. O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do
	distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um algoritmo que leia o c�digo, o
	nome e o pre�o de f�brica de 8 ve�culos; o percentual de lucro do distribuidor e o percentual de
	impostos de cada ve�culo. Calcule e mostre:
	a. O valor correspondente ao lucro do distribuidor;
	b. O valor correspondente aos impostos;
	c. O pre�o final de cada ve�culo. */
	
	float valorFabrica, margemLucro, imposto, lucroReais, impostoReais, precoFinal;
	int cod;
	string modelo;
	
	for (int i = 0; i < 8; i++){
		cout << "Digite o codigo do veiculo: " << endl;
		cin >> cod;
		cout << "Digite o modelo:" << endl;
		cin >> modelo;
		cout << "Digite o valor de fabrica: " << endl;
		cin >> valorFabrica;
		cout << "Digite o percentual de imposto: " << endl;
		cin >> imposto;
		imposto /= 100;
		cout << "Digite a margem de lucro: " << endl;
		cin >> margemLucro;
		margemLucro /= 100;
		
		impostoReais = valorFabrica * imposto;
		lucroReais = valorFabrica * margemLucro;
		precoFinal = valorFabrica + lucroReais + impostoReais;
		
		cout << "---------------------------------------" << endl;
		cout << "Codigo: " << cod << " modelo: " << modelo << endl;
		printf("O valor correspondente ao lucro do distribuidor e: R$ %.2f\n", lucroReais);
		printf("O valor correspondente aos impostos e: R$ %.2f\n",impostoReais);
		printf("O preco final do veiculo e: %.2f\n", precoFinal);
		cout << "---------------------------------------" << endl;
		
		
		
	}
	
	
	
	
	
	return 0;
}
