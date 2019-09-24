#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
	
	/* 1. Faça um algoritmo que receba o ano de nascimento de 30 pessoas e o ano atual, calcule e mostre: a
	idade de cada pessoa; quantos anos cada pessoa terá em 2029.
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
	
	/* 2. Faça um algoritmo que leia 22 números inteiros positivos maiores que zero. A cada número
	informado calcule e mostre:
	a. O número digitado;
	b. A metade do número digitado;
	c. O dobro do numero digitado;
	d. O número digitado ao cubo.
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
	
	/* 3. Faça um algoritmo que leia o valor do salário de 35 funcionários e o valor do salário mínimo.
	Calcule e mostre a quantidade de salários mínimos que cada funcionário ganha.
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
	
	/* 4. Ler um número inteiro N (só aceitar valores positivos. Caso o N não seja positivo deverá ser lido um
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
	
	/* 5. Ler um número inteiro N (só aceitar valores positivos. Caso o N não seja positivo deverá ser lido um
	novo valor para o N) e escrever se é ou não um número PRIMO.
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
	
	/* 6. Faça um algoritmo que receba o salário de 17 empregados e o seu percentual de aumento. Calcule e
	mostre o valor do aumento e o novo salário.
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
	
	/*7. Faça um algoritmo que leia três notas de um número indeterminado de alunos. Calcule e mostre:
	a. A média de cada aluno;
	b. O total de alunos reprovados;
	c. O total de alunos aprovados
	d. A média da turma
	Obs.: Considere média >= 7 aprovados e caso contrário reprovados.
	Para calcular a média final descarte a nota mais baixa e duplique a nota mais alta.
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
		//testa se n2 é maior ou menor que o valor ja informado
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
		//testa se n3 é maior ou menor que os valores ja informados
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
	
	/* 8. Os funcionários de uma loja de motos recebem um salário fixo mais 4% de comissão sobre as
	vendas. Faça um algoritmo que leia o número de funcionários, o salário fixo e o valor das vendas de
	cada funcionário. Calcule e mostre o valor da comissão, o salário final de cada funcionário e o valor
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
	
	/*9. O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do
	distribuidor e dos impostos aplicados ao preço de fábrica. Faça um algoritmo que leia o código, o
	nome e o preço de fábrica de 8 veículos; o percentual de lucro do distribuidor e o percentual de
	impostos de cada veículo. Calcule e mostre:
	a. O valor correspondente ao lucro do distribuidor;
	b. O valor correspondente aos impostos;
	c. O preço final de cada veículo. */
	
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
