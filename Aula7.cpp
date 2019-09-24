#include <iostream>
#include <string.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	/* 1. Escreva um algoritmo para escrever a palavra PROGRAMACAO 5 vezes. */
	/*
	for( int i = 1; i <=5; i++) {
		cout << "PROGRAMACAO" << endl;
	} */
	
	/* 2. Escreva um algoritmo para ler um número inteiro e escrevê-lo na tela 10 vezes*/
	
	/*
	int n;
	cout << "Digite um numero: " << endl;
	cin >> n;
	
	for(int i = 0; i < 10; i++) {
		cout << n << endl;
	} */
	
	/* 3. Faça um programa que leia 20 números quaisquer e conte quantos são negativos. */
	/*
	int num, negativos = 0;
	
	for(int i = 0; i < 20; i++){
		cout << "Digite um numero: " << endl;
		cin >> num;
		if (num < 0) {
			negativos ++;
		}
	}
	
	cout << "Numeros negativos: " << negativos << endl;
	*/
	
	/* 4. Faça um programa que apresente os quadrados dos números inteiros de 15 a 200. */
	/*
	int num = 15;
	for (int i = 15; i <= 200; i++) {
		cout << num * num << endl;
		num++;
	} */
	
	/* 5. Faça um programa que leia o dia da semana (Domingo, Segunda, Terça, Quarta, Quinta, Sexta e
	Sabado). Esse dia deve ser um texto. Se for Sábado ou Domingo imprimir “Final de Semana”, senão
	imprimir “Dia Útil”. Dica: Utilizar a função de comparação de string compare */ 
	/*
	char dia[10];
	
	cout << "Digite o dia da semana: " << endl;
	cin >> dia;
	
	if (((strcmp(dia,"sabado") == 0)) || (strcmp(dia,"domingo") == 0))  {
		cout << "Final de semana" << endl;
	} else {
		cout << "Dia Util" << endl;
	} */

	/* 6. Escreva um algoritmo que imprima na tela os 10 primeiros números inteiros maiores que 100. */
	/*
	for(int i = 101; i <= 110; i++){
		cout << i << endl;
	} */
	
	/* 7. Escreva um algoritmo que imprima os números ímpares existentes de entre 1(inclusive) e 9 (inclusive). */
	/*
	for (int i = 1; i < 10; i++) {
		if (i %2 == 1) {
			cout << i << endl;
		}
	} */
	
	/* 8. Escreva um algoritmo que imprima os números de 100 a 200 de 10 em 10.*/
	/*
	int n = 100;
	for (int i = 1; i <= 10; i++) {
		n += 10;
		cout << n << endl;
		
	} */
	
	/* 9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado. */
	/*
	int maior = 0, menor = 0, num;
	
	for (int i = 1; i <= 50; i++){
		cout << "Digite um valor: " << endl;
		cin >> num;
		if (num > maior) {
			maior = num;
		}
		if (num < menor) {
			menor = num;
		}
	}
	cout << "O maior valor e: " << maior << endl;
	cout << "O menor valor e: " << menor << endl;
	*/
	
	/* 10. Escreva um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de
	0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for
	fornecido a repetição deve ser encerrada sem imprimir mensagem alguma. */
	/*
	int num;
	
	for (int i = 1; i != 0; i++){
		cout << "Digite um valor: " << endl;
		cin >> num;

		if (num > 0) {
			cout << "Positivo" << endl;
		} else if (num < 0) {
			cout << "Negativo" << endl;
		} else {
			i = -1;
		}
	} */
	
	/* 11. Escreva um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor
	fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo
	será encerrado imediatamente após a leitura de um valor NULO ou NEGATIVO. */
	/*
	int num;
	
	cout << "Digite um valor: " << endl;
	cin >> num;
	
	while (num > 0) {
		if (num %2 == 0) {
			cout << "Par" << endl;
		} else {
			cout << "Impar" << endl;
		}
		cout << "Digite um valor: " << endl;
		cin >> num;
	} */
	
	/* 12. Escreva um algoritmo que gere os números de 1000 a 1999 e escreva aqueles que, divididos por 11,
	dão resto igual a 5. */
	/*
	int num = 1000;
	for(int i = 0; i <= 1000; i++) {
		if (num %11 == 5){
			cout << num << endl;
		}
		num++;
	} */
	
	/* 13. Programa para gerar e imprimir os números pares menores que 51 e sua soma. Os números devem
	ser impressos em ordem decrescente. */
	/*
	int num = 51;
	for (int i = 1; i <= 51; i++){
		if (num %2 == 0){
			cout << num << endl;
		}
		num--;
	} */
	
	/* 14. Programa para ler um número N qualquer e imprimir todos os inteiros positivos menores que N, bem
	como a soma e a média desses inteiros */
	/*
	int num, soma = 0, count = 0;
	float media;
	
	cout << "Digite um valor: " << endl;
	cin >> num;
	
	for(int i = 1; i < num;i++){
		cout << i << endl;
		soma += i;
		count++;
	}
	 media = soma / (float)count;
	 cout << "A media e: " << media << endl;
	*/
	
	/* 15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles
	estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar
	quando for lido um número negativo. */
	/*
	int num, count025 = 0, count2650 = 0, count5175 = 0, count76100 = 0;
	
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	while (num >= 0) {
			if (num >= 0 && num <= 25 ) {
				count025++;
			} else if (num >= 26 && num <= 50){
				count2650++;
			} else if (num >= 51 && num <=75){
				count5175++;
			} else if (num >= 76 && num <= 100){
				count76100++;
			}
		
		
		cout << "Digite um numero: " << endl;
		cin >> num;
	}
	
	cout <<"Quantidade de numeros digitados entre [0:25]: " << count025 << endl;
	cout <<"Quantidade de numeros digitados entre [26:50]: " << count2650 << endl;
	cout <<"Quantidade de numeros digitados entre [51:75]: " << count5175 << endl;
	cout <<"Quantidade de numeros digitados entre [76:100]: " << count76100 << endl;
	*/
	
	/* 16. Ler uma quantidade indeterminada de duplas de valores (2 valores de cada vez). Escrever para cada
	dupla uma mensagem que indique se ela foi informada em ordem crescente ou decrescente. A
	repetição será encerrada ao ser fornecido para os elementos da dupla valores iguais. */
	/*
	int n1, n2;
	
	cout << "Digite dois valores: " << endl;
	cin >> n1 >> n2;
	
	while (n1 != n2){
		if (n1 > n2) {
			cout << "Decrescente" << endl;
		} else {
			cout << "Crescente" << endl;
		}
		cout << "Digite dois valores: " << endl;
		cin >> n1 >> n2;
	} */
	
	/* 17. Escreva um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da
	senha incorreta informada escrever a mensagem "SENHA INVÁLIDA". Quanto a senha for informada
	corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo encerrado.
	Considere que a senha correta é o valor 2807. */
	/*
	int senha;
	
	cout << "Digite sua senha: " << endl;
	cin >> senha;
	
	while (senha != 2807){
		cout << "Senha Invalida!" << endl;
		cout << "Digite sua senha: " << endl;
		cin >> senha;
	}
	
	cout << "Acesso Permitido!" << endl;
	*/
	
	/* 18. Escreva um algoritmo para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
	sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será
	encerrado quando o usuário informar um valor NULO para a coordenada X (nesta situação sem fazer
	a leitura da coordenada Y). */
	/*
	int x, y;
	
	cout << "Digite o valor de x: " << endl;
	cin >> x;
	while (x != 0) {
		cout << "Digite o valor de y: " << endl;
		cin >> y;
	
		if (x > 0 && y > 0) {
			cout << "Primeiro quadrante" << endl;
		} else if (x < 0 && y > 0) {
			cout << "Segundo quadrante" << endl;
		} else if (x < 0 && y < 0) {
			cout << "Terceiro quadrante" << endl;
		} else if (x > 0 && y < 0) {
			cout << "Quarto quadrante" << endl;
		}
		cout << "Digite o valor de x: " << endl;
		cin >> x;
	} */
	
	/* 19. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares.
	Termine a leitura se o usuário digitar zero (0). */
	/*
	int num, somaNum = 0, count = 0;
	
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	while (num != 0){
		if (num %2 == 0) {
			somaNum += num;
			count ++;
		} 
		cout << "Digite um numero: " << endl;
		cin >> num;
		
	}
	if (somaNum == 0 && count == 0) {
		cout << "Todos valores digitados sao impar" << endl;
	} else {
	cout << "A media dos valores informados e: " << somaNum / count << endl;
	} */
	
	/* 20. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O
	algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for
	igual a zero. */
	/*
	int cod, n1, n2, n3;
	float media;
	
	cout << "Digite o codigo do aluno: " << endl;
	cin >> cod;
	while (cod != 0) {
		cout << "Digite a primeira nota: " << endl;
		cin >> n1;
		cout << "Digite a segunda nota: " << endl;
		cin >> n2;
		cout << "Digite a terceira nota: " << endl;
		cin >> n3;
		
		media = (n1 + n2 + n3) / 3;
		
		printf("A media do aluno %d e %.1f\n", cod, media);
		
		cout << "Digite o codigo do aluno: " << endl;
		cin >> cod;
				
	} */
	
	/* 21. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, lidos
	externamente. O final da leitura acontecerá quando for lido um valor negativo. */
	/*
	int num, somaNum = 0, count = 0;
	float media;
	
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	while (num >= 0){
		somaNum += num;
		count++;
		cout << "Digite um numero: " << endl;
		cin >> num;
	}
	
	media = somaNum / count;
	
	cout << "A media dos valores digitados e: " << media << endl;
	
	*/
	
	/* 22. Faça um programa que leia uma série de 15 números e no final imprima o maior valor encontrado */
	/*
	int num, maior = 0;
	
	for (int i = 0; i < 15; i++){
		cout << "Digite um numero: " << endl;
		cin >> num;
		if (num > maior) {
			maior = num;
		}
	}
	
	cout << "O maior valor digitado e: " << maior << endl;
	*/
	
	/* 23. Programa para ler a nota de cada aluno de uma turma de 37 alunos e calcular a média da turma.
	Achar e imprimir, também, a maior e a menor nota da turma. */
	/*
	int nota, count = 0, maior = 0, menor = INT_MAX, somaNota = 0;
	
	for (int i = 0; i < 37; i++){
		cout << "Digite a nota: " << endl;
		cin >> nota;
		somaNota += nota;
		count++;
		
		if (nota > maior) {
			maior = nota;
		} if (nota < menor) {
			menor = nota;
		}
		
	}
	float media = somaNota / count;
	printf("A media da turma e: %.1f\n",media);
	cout << "A maior nota e: " << maior << endl;
	cout << "A menor nota e: " << menor << endl;
	*/
	
	/* 24. O programa anterior só funciona para as turmas de 37 alunos. Reescreva-o de modo a permitir
	processar para turmas de qualquer quantidade de alunos.
	*/
	/*
	int nota, count = 0, maior = 0, menor = INT_MAX, somaNota = 0, qtdAlunos;
	
	cout << "Digite a quantidade de alunos na turma: " << endl;
	cin >> qtdAlunos;
	
	for (int i = 0; i < qtdAlunos; i++){
		cout << "Digite a nota: " << endl;
		cin >> nota;
		somaNota += nota;
		count++;
		
		if (nota > maior) {
			maior = nota;
		} if (nota < menor) {
			menor = nota;
		}
		
	}
	float media = somaNota / count;
	printf("A media da turma e: %.1f\n",media);
	cout << "A maior nota e: " << maior << endl;
	cout << "A menor nota e: " << menor << endl;
	*/
	
	/* 25. Uma empresa deseja aumentar seus preços em 20%. Faça um algoritmo que leia o código e o preço
	de custo de cada produto e calcule o preço novo. Calcule também, a média dos preços com e sem
	aumento. Mostre o código e o preço novo de cada produto e, no final, as médias. A entrada de dados
	deve terminar quando for lido um código de produto negativo. (Use o comando Enquanto ... faça)
	*/
	/*
	int cod, count = 0;
	float preco, precoNovo, somaPreco = 0, somaPrecoNovo = 0;
	
	cout << "Digite o codigo do produto: " << endl;
	cin >> cod;
	
	while (cod >= 0 ) {
		cout << "Digite o preco do produto: " << endl;
		cin >> preco;
		precoNovo = preco * 1.2;
		somaPreco += preco;
		somaPrecoNovo += precoNovo;
		count++;
		printf("Produto codigo: %d preco: R$ %.2f\n", cod, preco);
		printf("Produto codigo: %d preco + 20%% R$ %.2f\n", cod, precoNovo);
		cout << "Digite o codigo do produto: " << endl;
		cin >> cod;
	}
	printf("A media dos precos antigos era de: R$ %.2f\n", somaPreco / count);
	printf("A meia dos novos precos e de: R$ %.2f\n", somaPrecoNovo / count);
	*/
	
	/* 26. Ler 2 inteiros positivos A e B. Calcular e imprimir a soma de todos os números pares menores que A,
	mais a soma de todos os ímpares existentes entre A e B. */
	/*
	int a, b, somaPar = 0, somaImpar = 0;
	
	cout << "Digite o valor de A: " << endl;
	cin >> a;
	cout << "Digite o valor de B: " << endl;
	cin >> b;
	
	for(int i = 0; i <= a; i++){
		if (i %2 == 0){
			somaPar += i;
		}
	}
	if (a > b) {
		for(int i = b; i <= a; i++){
			if (i %2 == 1) {
				somaImpar += i;
			}
		}
	} else if (a < b) {
		for(int i = a; i <= b; i++){
			if (i %2 == 1) {
				somaImpar += i;
			}
		}
	}
	
	cout << "A soma dos valores pares menores que A e: " << somaPar << endl;
	cout << "A soma dos valores impares entre A e B e: " << somaImpar << endl;
	*/
	
	/* 27. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de
	códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
	1 = votos para candidato A
	2 = votos para candidato B
	3 = votos para candidato C
	4 = votos para candidatos D
	5 = votos nulo
	6 = votos em branco
	*/
	
	/*
	int a = 0, b = 0, c = 0, d = 0, nulo = 0, branco = 0, voto;
	
	cout << "Digite seu voto: " << endl;
	cin >> voto;
	
	while (voto >= 1 && voto <=6){
		if (voto == 1){
			a++;
		} else if (voto == 2){
			b++;
		} else if (voto == 3){
			c++;
		} else if (voto == 4){
			d++;
		} else if (voto == 5 ){
			nulo++;
		} else if (voto == 6){
			branco++;
		}
		
		cout << "Digite seu voto: " << endl;
		cin >> voto;
		
	}
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	cout << "D: " << d << endl;
	cout << "Nulos: " << nulo << endl;
	cout << "Brancos: " << branco << endl;
	*/
	
	/* 28. Elabore um algoritmo que leia o código do candidato em um voto, o número de votantes naquela
	seção, e o número de abstenções. Calcule e escreva:
	? Total de votos para cada candidato;
	? Total de votos nulos;
	? Total de votos em branco;
	? O percentual de votos de cada candidato em relação ao total de votos;
	? O percentual de votos válidos para cada candidato;
	? O percentual de abstenções.
	Como finalizador do conjunto de votos, tem-se o valor 0. */
	/*
	int a = 0, b = 0, c = 0, d = 0, nulo = 0, branco = 0, somaVotos, somaNulosBrancos, voto;
	
	cout << "Digite seu voto: " << endl;
	cin >> voto;
	
	while (voto >= 1 && voto <=6){
		if (voto == 1){
			a++;
		} else if (voto == 2){
			b++;
		} else if (voto == 3){
			c++;
		} else if (voto == 4){
			d++;
		} else if (voto == 5 ){
			nulo++;
		} else if (voto == 6){
			branco++;
		}
		
		cout << "Digite seu voto: " << endl;
		cin >> voto;
		
	}
	somaVotos = a + b + c + d + nulo + branco;
	somaNulosBrancos = nulo + branco;
	
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	cout << "D: " << d << endl;
	cout << "Nulos: " << nulo << endl;
	cout << "Brancos: " << branco << endl;
	cout << "-------------------------------------------" << endl;
	printf("A em relacao ao total de votos: %%%.2f\n",(a * 100) / (float)somaVotos);
	printf("B em relacao ao total de votos: %%%.2f\n",(b * 100) / (float)somaVotos);
	printf("C em relacao ao total de votos: %%%.2f\n",(c * 100) / (float)somaVotos);
	printf("D em relacao ao total de votos: %%%.2f\n",(d * 100) / (float)somaVotos);
	cout << "-------------------------------------------" << endl;
	printf("A em relacao ao total de votos validos: %%%.2f\n",(a * 100) / (float)(somaVotos - somaNulosBrancos));
	printf("B em relacao ao total de votos validos: %%%.2f\n",(b * 100) / (float)(somaVotos - somaNulosBrancos));
	printf("C em relacao ao total de votos validos: %%%.2f\n",(c * 100) / (float)(somaVotos - somaNulosBrancos));
	printf("D em relacao ao total de votos validos: %%%.2f\n",(d * 100) / (float)(somaVotos - somaNulosBrancos));
	printf("Abstencoes: %%%.2f\n",((nulo + branco) * 100) / (float)somaVotos);
	*/
	
	/* 29. Escrever um algoritmo que leia 5 valores para uma variável N e, para cada um deles, calcule e
	mostre a tabuada de 1 até N. Mostre a tabuada na forma:
	1 x N = N
	2 x N = 2N
	3 x N = 3N
	N x N = N2
	*/
	
	/*
	int num;
	
	for (int i = 0; i < 5;i++){
		cout << "Digite um valor: " << endl;
		cin >> num;
		for(int i = 1; i <= num;i++){
			printf("%d X %d = %d\n", i, num, i * num);
		}
	} */
	
	/* 30. Faça um programa que leia uma série não determinada de dois valores. O primeiro valor é um código
	que significa: (1) débito, (2) crédito e (0) fim. O segundo valor é uma quantia numérica real. O
	programa deve identificar o código e se for 1, somar a quantia em um acumulador de débitos; se for
	2, somar a quantia em um acumulador de créditos; se for 0, encerrar o programa. Ao final, mostre o
	total de débitos e créditos e o saldo (saldo ? créditos – débitos). (use o comando CASO).
	*/
	
	/*
	int debito, credito, cod;
	float debitoSoma = 0, creditoSoma = 0, vlr;
	menu:
	cout << "Digite a funcao desejada: (1) debito (2) credito (0) fim: " << endl;
	cin >> cod;
	
	switch (cod){
		case 1:
			debito++;
			cout << "Digite o valor: " << endl;
			cin >> vlr;
			debitoSoma += vlr;
			goto menu;
		break;
		case 2:
			credito++;
			cout << "Digite o valor: " << endl;
			cin >> vlr;
			creditoSoma += vlr;
			goto menu;
		break;
		default:
			cout << "Fim." << endl;
		break;
	}

	printf("O total de vendas em debito e: %d e o valor e: R$ %.2f\n", debito, debitoSoma);
	printf("O total de vendas em credito e: %d e o valor e: R$ %.2f\n", credito, creditoSoma);
	*/
	
	/* 31. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo
	(M/F) e salário. Faça um algoritmo que informe: (Use o comando CASO).
	? A média de salário do grupo;
	? A maior e menor idade do grupo;
	? A média da idade dos homens;
	? A quantidade de mulheres com salário até R$1000,00.
	? Encerre a entrada de dados quando for digitada uma idade negativa. 
	*/
	/*
	int idadeMaiorM = 0, idadeMaiorF = 0, somaIdadeM = 0, somaIdadeF = 0, qtdIdadeM = 0, idadeMenorM = INT_MAX, idadeMenorF = INT_MAX, idade, salarioMenor1000 = 0;
	char sexo;
	float salarioM, salarioF,somaSalarioM = 0, somaSalarioF = 0, qtdSalarioM = 0, qtdSalarioF = 0;
	
	cout << "Digite o sexo (M) Masculino (F) Feminino: " << endl;
	cin >> sexo;
	cout << "Digite a idade: " << endl;
	cin >> idade;
	
	while (idade >= 0){
		switch (sexo){
			case 'M':
				qtdIdadeM++;
				somaIdadeM += idade;
				cout << "Digite o salario: " << endl;
				cin >> salarioM;
				qtdSalarioM++;
				somaSalarioM += salarioM;
				if(idade > idadeMaiorM) {
					idadeMaiorM = idade;
				} 
				if (idade < idadeMenorM){
					idadeMenorM = idade;
				}
			break;
			case 'F':
				somaIdadeF += idade;
				cout << "Digite o salario: " << endl;
				cin >> salarioF;
				qtdSalarioF++;
				somaSalarioF += salarioF;
				if(idade > idadeMaiorF) {
					idadeMaiorF = idade;
				} 
				if (idade < idadeMenorF){
					idadeMenorF = idade;
				}
				if (salarioF <= 1000.00){
					salarioMenor1000++;
				}
			break;
			default:
				cout << "Opcao Invalida." << endl;
			break;
		}
		cout << "Digite o sexo (M) Masculino (F) Feminino: " << endl;
		cin >> sexo;
		cout << "Digite a idade: " << endl;
		cin >> idade;
	}
	printf("A media de salario dos homens: %.2f\n",somaSalarioM / qtdSalarioM);
	printf("A media de salario das mulheres: %.2f\n",somaSalarioF / qtdSalarioF);
	printf("A maior idade entre os homens: %d\n", idadeMaiorM);
	printf("A menor idade entre os homens: %d\n", idadeMenorM);
	printf("A media idade entre os homens: %d\n", somaIdadeM / qtdIdadeM);
	printf("A maior idade entre as mulheres: %d\n", idadeMaiorF);
	printf("A menor idade entre as mulheres: %d\n", idadeMenorF); 
	printf("A quantidade de mulheres com o salario menor que R$ 1000.00 e: %d", salarioMenor1000);
	*/
	
	/* 32. Em um laboratório usam-se dois tipos de cobaias: ratos e coelhos. O código para ratos é 1 e para
	coelhos, 2. Foram feitas 15 experiências, nas quais foram utilizados um dos tipos de cobaias. Faça
	um algoritmo que leia, para cada uma das experiências, o código da cobaia utilizada e a quantidade
	de cobaias. Deseja-se saber: o total de cobaias utilizadas, o total de ratos, o total de coelhos e o
	percentual de cada cobaia. (Use o comando CASO).
	*/
	/*
	int cod, somaRatos = 0, somaCoelhos = 0, qtdExp;
	
	for (int i = 0; i < 15; i++) {
		cout << "Digite o codigo da cobaia (1) Ratos (2) Coelhos: " << endl;
		cin >> cod;
		cout << "Digite a quantidade: " << endl;
		cin >> qtdExp;
		
		switch (cod){
			case 1:
				somaRatos += qtdExp;
			break;
			case 2:
				somaCoelhos += qtdExp;
			break;
		}
	}
	cout << "O total de cobaias utilizadas e: " << somaRatos + somaCoelhos << endl;
	cout << "O total de ratos utilizados e: " << somaRatos << endl;
	cout << "O total de coelhos utilizados e:" << somaCoelhos << endl;
	printf("O percentual de coelhos utilizados e: %.2f%%\n", (somaCoelhos * 100) / ((float)somaCoelhos + (float)somaRatos));
	printf("O percentual de ratos utilizados e: %.2f%", (somaRatos * 100) / ((float)somaCoelhos + (float)somaRatos));
	*/
	
	/* 33. Escrever um algoritmo que leia um conjunto de 15 informações contendo, cada uma delas, a altura e
	o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:
	? A maior e a menor altura da turma;
	? A média da altura das mulheres;
	? A média da altura da turma.
	*/
	
	int cod, qtdM = 0, qtdF = 0;
	float altura, somaAltura = 0, maiorAltura = INT_MIN, menorAltura = INT_MAX, somaAlturaF = 0;
	
	for(int i = 0; i < 15; i++){
		cout << "(1) Masculino (2) Feminino: " << endl;
		cin >> cod;
		cout << "Digite a altura: " << endl;
		cin >> altura;
		
		if (altura > maiorAltura){
			maiorAltura = altura;
		}
		
		if (altura < menorAltura){
			menorAltura = altura;
		}
		
		if (cod == 2) {
			qtdF++;
			somaAlturaF += altura;
			somaAltura += altura;
		} else if (cod == 1) {
			qtdM++;
			somaAltura += altura;
		}
		
	}
	printf("A maior altura e: %.2f\n", maiorAltura);
	printf("A menor altura e: %.2f\n", menorAltura);
	printf("A media da altura entre as mulheres e: %.2f\n",somaAlturaF / qtdF);
	printf("A media da altura da turma e: %.2f\n", somaAltura / (qtdM + qtdF));
	
	
	
	
	
	
	return 0;
}
