#include <iostream>


using namespace std;

int main(int argc, char** argv) {
	/* 1. Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo. */
	/*
	int valor;
	cout << "Digite o valor: " << endl;
	cin >> valor;
	
	if (valor >= 0) {
		cout << "valor positivo" << endl;
	} else {
		cout << "valor negativo" << endl;
	}
	*/
	
	/* 2. Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo e apresentar o valor
	lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser
	multiplicado por -1. */
	
	/*
	int vlr;
	cout << "Digite um valor: " << endl;
	cin >> vlr;
	
	if (vlr <= 0) {
		vlr *= -1;
		cout << "Valor: " << vlr << endl;
	} else {
		cout << "Valor: " << vlr << endl;
	}*/
	
	/* 3. Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e
	escrever a média semestral e a seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se
	o aluno foi aprovado (considere 6.0 a nota mínima para aprovação). 	
	
	4. Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média
	calculada seja menor que 6,0.*/	
	/*
	float n1, n2, media;
	cout << "Digite a nota 1: " << endl;
	cin >> n1;
	cout << "Digite a nota 2: " << endl;
	cin >> n2;
	
	media = (n1 + n2) / 2;
	
	if(media >= 6) {
		cout << "PARABENS! Voce foi aprovado" << endl;
	} else {
		cout << "Voce foi REPROVADO! Estude mais" << endl;
	} */
	
	/* 5. Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e
	escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem “APROVADO”. Se
	a média for menor que 6.0 e maior que 3.0, imprimir a mensagem “EXAME”, se a média for menor
	que 3.0 imprimir a mensagem “REPROVADO”. */
	/*
	float n1, n2, media;
	cout << "Digite a primeira nota: " << endl;
	cin >> n1;
	cout << "Digite a segunda nota: " << endl;
	cin >> n2;
	
	media = (n1 + n2) / 2;
	
	if (media >= 6) {
		cout << "Aprovado" << endl;
	} else if (media < 6 && media > 3) {
		cout << "Exame" << endl;
	} else {
		cout << "Reprovado" << endl;
	}
	*/
	
	/* 6. Escreva um algoritmo para ler 2 valores (considere que não serão informados valores iguais) e
escrever o maior deles. */
	/*
	float vlr1, vlr2;
	cout << "Digite o primeiro valor: " << endl;
	cin >> vlr1;
	cout << "Digite o segundo valor: " << endl;
	cin >> vlr2;
	
	if (vlr1 > vlr2) {
		cout << "O maior valor e: " << vlr1 << endl;
	} else if (vlr2 > vlr1) {
		cout << "O maior valor e: " << vlr2 << endl;
	} else {
		cout << "Os valores devem ser diferentes!" << endl;
	}
	*/
	
	/* 7. Ler um valor numérico que esteja na faixa de valores de 1 até 9. O programa deve apresentar a
	mensagem “O valor está na faixa permitida”, caso o valor informado esteja entre 1 e 9. Se o valor
	estiver fora dessa faixa, o programa deve apresentar a mensagem “O valor está fora da faixa
	permitida” */
	
	/*
	int vlr;
	cout << "Digite um numero entre 1 e 9: " << endl;
	cin >> vlr;
	
	switch (vlr) {
		case 1 ... 9:
			cout << "O valor esta na faixa permitida" << endl;
		break;
		
		default:
			cout << "o valor esta fora da faixa permitida" << endl;
		break;
	} */
	
	/* 8. Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que
	diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu). */
	
	/*
	int anoNasc, anoAtual = 2019, idade;
	cout << "Digite o ano que voce nasceu: " << endl;
	cin >> anoNasc;
	
	idade = anoAtual - anoNasc;
	
	if (idade >= 16 && idade <18 ) {
		printf("Sua idade e: %d e o voto e facultativo\n", idade);
	} else if ( idade >= 18 ) {
		printf("Sua idade e: %d e deve votar\n", idade);
	} else {
		printf ("Sua idade e: %d e nao pode votar\n", idade);
	} */
	
	/* 9. Ler três valores para os lados de um triângulo: A, B e C. Verificar se os lados fornecidos formam
	realmente um triângulo. Se formar, deve ser indicado o tipo de triângulo: Isósceles, escaleno ou
	eqüilátero.
	Para verificar se os lados fornecidos formam triângulo: A < B + C e B < A + C e C < A + B
	Triângulo isósceles: possui dois lados iguais (A=B ou A=C ou B = C)
	Triângulo escaleno: possui todos os lados diferentes (A<>B e B <> C)
	Triângulo eqüilátero: possui todos os lados iguais (A=B e B=C) */
	/*
	int a, b, c;
	cout << "Digite o valor do lado A: " << endl;
	cin >> a;
	cout << "Digite o valor do lado B: " << endl;
	cin >> b;
	cout << "Digite o valor do lado C: " << endl;
	cin >> c;
	
	if (a < (b + c) && b < (a + c) && c < (a + b) )  {
		cout << "Estes lados formam um triangulo!" << endl;
		if ( a == b && b == c) {
			cout << "Estes lados formam um triangulo equilatero: possui todos os lados iguais" << endl;
		} else if(a != b && b != c && a != c){
			cout << "Estes lados formam um triangulo escaleno: possui todos os lados diferentes" << endl;
		} else if (a == b || a == c || b == c) {
			cout << "Estes lados formam um triangulo isosceles: possui dois lados iguais" << endl;		 
		}
	} else  {
		cout << "Estes lados nao formam um triangulo!" << endl;
	} */
	
	/* 10. As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, e R$ 0,25 se forem
	compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas,
	calcule e escreva o valor total da compra */
	/*
	float vlr;
	int qtdMaca;
	cout << "Digite a quantidade de macas compradas: " << endl;
	cin >> qtdMaca;
	
	if (qtdMaca >= 1 && qtdMaca <= 11) {
		vlr = qtdMaca * 0.30;
		printf("A quantidade comprada foi %d, o valor de cada maca e: R$ 0.30 e o total da compra e: R$ %.2f\n", qtdMaca, vlr);
	} else if (qtdMaca >= 12) {
		vlr = qtdMaca * 0.25;
		printf("A quantidade comprada foi %d, o valor de cada maca e: R$ 0.25 e o total da compra e: R$ %.2f\n", qtdMaca, vlr);
	} else {
		printf("Digite uma quantidade positiva.");
	} */
	
	/* 11. Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los
	em ordem crescente. */
	/*
	float n1, n2;
	cout << "Digite o primeiro valor: " << endl;
	cin >> n1;
	cout << "Digite o segundo valor: " << endl;
	cin >> n2;
	
	if (n1 < n2) {
		cout << "Ordem crescente: " << endl;
		cout << n1 << endl;
		cout << n2 << endl;
	} else if (n2 < n1) {
		cout << "Ordem crescente: " << endl;
		cout << n2 << endl;
		cout << n1 << endl;
	} else {
		cout << "Os valores precisam ser diferentes!" << endl;
	} */
	
	/* 12. Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida
	é o número 1234. Deve ser impresso as seguintes mensagens:
	ACESSO PERMITIDO caso a senha seja válida. 
	ACESSO NEGADO caso a senha seja inválida. */
	/*
	int senha;
	cout << "Digite a senha: " << endl;
	cin >> senha;
	
	if (senha == 1234) {
		cout << "ACESSO PERMITIDO" << endl;
	} else {
		cout << "ACESSO NEGADO" << endl;
	} */
	
	/* Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de
	uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes
	fórmulas:
	para homens: (72.7 * h)-58
	para mulheres: (62.1*h)-44.7 */
	/*
	int sexo;
	float altura, peso;
	cout << "Digite o sexo: (1) feminino (2) masculino" << endl;
	cin >> sexo;
	cout << "Digite a altura: " << endl;
	cin >> altura;
	
	if (sexo == 1) {
		peso = (62.1 * altura) - 44.7;
		printf("Peso ideal para mulheres com a altura %.2f e: %.2f Kg\n", altura, peso);
	} else {
		peso = (72.7 * altura) - 58;
		printf("Peso ideal para homens com a altura %.2f e: %.2f Kg\n", altura, peso);
	} */
	
	/* 14. Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores
	positivos e inteiros) e escrever se é par ou ímpar. */
	/*
	int vlr, testePar;
	cout << "Digite um numero:" << endl;
	cin >> vlr;
	
	testePar = vlr % 2;
	
	if (testePar == 0) {
		cout << "O numero digitado e par" << endl;
	} else {
		cout << "O numero digitado e impar" << endl;
	} */
	
	/* 15. Faça um algoritmo para ler dois números e imprimir o maior e o menor número lido, acompanhados
	da mensagem Menor ou Maior, conforme o caso. Se iguais, imprimir os dois números
	acompanhados da mensagem São iguais */
	/*
	float n1, n2;
	cout << "Digite o primeiro valor:" << endl;
	cin >> n1;
	cout << "Digite o segundo valor:" << endl;
	cin >> n2;
	
	if (n1 > n2){
		cout << "Maior: " << n1 << endl;
		cout << "Menor: " << n2 << endl;
	} else if (n2 > n1) {
		cout << "Maior: " << n2 << endl;
		cout << "Menor: " << n1 << endl;
	} else {
		cout << "Sao iguais: " << n1 << endl;
		cout << "Sao iguais: " << n2 << endl;
	} */
	
	/* 6. Ler dois números inteiros. Se forem iguais, imprimir a mensagem ‘São iguais’ e terminar o
	programa. Se forem diferentes, e o primeiro deles for par, ler um terceiro número, imprimir o maior
	valor existente entre os três e terminar; todavia, se o primeiro for ímpar, ler mais dois números e
	imprimir o maior entre os dois primeiros e o maior valor existente entre estes dois últimos, mas de
	modo que não apareçam na tela em ordem decrescente. */
	/*
	int n1, n2;
	cout << "Digite o primeiro valor: " << endl;
	cin >> n1;
	cout << "Digite o segundo valor: " << endl;
	cin >> n2;
	
	if (n1 == n2) {
		cout << "Sao iguais" << endl;
	} else if (n1 %2 == 0) {
		int n3;
		cout << "Digite o terceiro valor: " << endl;
		cin >> n3;
		if (n1 > n2 && n1 > n3) {
			cout << "O maior valor e: " << n1 << endl;
		} else if (n2 > n1 && n2 > n3 ) {
			cout << "O maior valor e: " << n2 << endl;
		} else if (n3 > n2 && n3 > n1) {
			cout << "O maior valor e: " << n3 << endl;
		}
	} else {
		int n3, n4, maiorPrimeiros, maiorUltimos;
		cout << "Digite o terceiro valor: " << endl;
		cin >> n3;
		cout << "Digite o quarto valor: " << endl;
		cin >> n4;
		if (n1 > n2) {
			maiorPrimeiros = n1;
			if (n3 > n4) {
				maiorUltimos = n3;
			} else if (n4 > n3) {
				maiorUltimos = n4;
			} else {
				cout << "O terceiro e o quarto numero sao iguais" << endl;
			}
		} else {
			maiorPrimeiros = n2;
			if (n3 > n4) {
				maiorUltimos = n3;
			} else if (n4 > n3) {
				maiorUltimos = n4;
			} else {
				cout << "O terceiro e o quarto numero sao iguais" << endl;
			}
		}
		if (maiorPrimeiros > maiorUltimos) {
			cout << "Maior dos dois primeiros: " << maiorPrimeiros << endl;
			cout << "Maior dos dois ultimos: " << maiorUltimos << endl;
		} else {
			cout << "Maior dos dois ultimos: " << maiorUltimos << endl;
			cout << "Maior dos dois primeiros: " << maiorPrimeiros << endl;
		}	
	} */
		
	/* 17. Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. Se iguais, imprimir
	qualquer um. */
	/*
	int n1, n2, n3;
	cout << "Digite o primeiro valor: " << endl;
	cin >> n1;
	cout << "Digite o segundo valor: " << endl;
	cin >> n2;
	cout << "Digite o terceiro valor: " << endl;
	cin >> n3;
	
	if (n1 > n2 && n1 > n3) {
		cout << "O maior valor digitado e: " << n1;
	} else if (n2 > n1 && n2 > n3) {
		cout << "O maior valor digitado e: " << n2;
	} else if (n3 > n1 && n3 > n2) {
		cout << "O maior valor digitado e: " << n3;
	} else {
		cout << "Os valores sao iguais: " << n1;
	} */
	
	/* 18. Uma loja de eletrodomésticos estabeleceu as seguintes modalidades de pagamento para a venda
	de suas mercadorias: */
	
	/*
	float vlrTabela, vlrParcela, vlrTotal;
	int  qtdParcela;
	cout << "Digite o preco de tabela:" << endl;
	cin >> vlrTabela;
	cout << "Digite o numero de parcelas: " << endl;
	cin >> qtdParcela;
	
	switch (qtdParcela) {
		case 1:
			vlrTotal = vlrTabela * 0.975;
			printf ("PRECO DE TABELA: R$ %.2f\n", vlrTabela);
			printf("NUM DE PARCELAS: %d\n", qtdParcela);
			printf("VALOR DE CADA PARCELA R$ %.2f\n", vlrTotal);
			printf("PRECO TOTAL: R$ %.2f\n", vlrTotal);
		break;
		
		case 2 ... 5:
			vlrParcela = vlrTabela / qtdParcela;
			printf ("PRECO DE TABELA: R$ %.2f\n", vlrTabela);
			printf("NUM DE PARCELAS: %d\n", qtdParcela);
			printf("VALOR DE CADA PARCELA R$ %.2f\n", vlrParcela);
			printf("PRECO TOTAL: R$ %.2f\n", vlrTabela);
		break;
		
		case 6 ... 10:
			vlrTotal = vlrTabela * 1.06;
			vlrParcela = vlrTotal / qtdParcela;
			printf ("PRECO DE TABELA: R$ %.2f\n", vlrTabela);
			printf("NUM DE PARCELAS: %d\n", qtdParcela);
			printf("VALOR DE CADA PARCELA R$ %.2f\n", vlrParcela);
			printf("PRECO TOTAL: R$ %.2f\n", vlrTotal);
		break;
		
		case 11 ... 15:
			vlrTotal = vlrTabela * 1.13;
			vlrParcela = vlrTotal / qtdParcela;
			printf ("PRECO DE TABELA: R$ %.2f\n", vlrTabela);
			printf("NUM DE PARCELAS: %d\n", qtdParcela);
			printf("VALOR DE CADA PARCELA R$ %.2f\n", vlrParcela);
			printf("PRECO TOTAL: R$ %.2f\n", vlrTotal);
		break;
		
		default:
			cout << "Numero de parcelas invalida." << endl;
		break;
	} */
	
	
	/* 19. Faça um programa que leia idade e peso de um atleta e imprima a sua categoria, de acordo com a
	seguinte tabela: */
	
	int idade;
	float peso;
	
	cout << "Digite a idade do atleta: " << endl;
	cin >> idade;
	cout << "Digite o peso: " << endl;
	cin >> peso;
	
	if (idade <= 12){
		cout << "Infantil." << endl;
	} else if (idade >= 13 && idade <= 16) {
		if (peso <= 40) {
			cout << "Juvenil leve" << endl;
		} else {
			cout << "Juveni pesado" << endl;
		} 
	} else if (idade >= 17 && idade <= 24) {
		if (peso <= 45) {
			cout << "Senior leve" << endl;
		} else if (peso > 45 && peso <= 60) {
			cout << "Senior medio" << endl;
		} else {
			cout << "Senior pesado" << endl;
		}
	} else {
		cout << "Veterano" << endl;
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
