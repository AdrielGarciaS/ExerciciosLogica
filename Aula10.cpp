#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	/* 1- Preencher um vetor X de 10 elementos (�ndices de 0 a 9) com o valor inteiro 30. Escrever o vetor X, ap�s seu
	total preenchimento */
	/*
	int x[10];
	
	for (int i = 0; i < 10; i++){
		x[i] = 30;
	}
	
	for (int i = 0; i < 10; i++){
		cout << x[i] << endl;
	}
	*/
	
	
	/* 2- Preencher um vetor A de 10 elementos (�ndices de 0 a 9) com os n�meros inteiros 10,20,30,40,50,...,100.
	Escrever o vetor A ap�s o seu total preenchimento. */
	
	/*
	int a[10];
	for(int i = 0; i < 10; i++){
		a[i] = (i * 10) + 10;
	}
	
	for (int i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
	*/
	
	
	
	/* 3- Fa�a um algoritmo que leia um vetor de 80 posi��es e encontre o menor valor. Mostre-o juntamente com seu
	n�mero de ordem (posi��o). */
	
	/*
	int x[10], maior = INT_MIN, menor = INT_MAX;
	
	for(int i = 0; i < 10; i++){
		cout << "Digite o valor para c[" << i << "]" << endl;
		cin >> x[i];
	}
	
	for(int i = 0; i < 10; i++){
		if(x[i] < menor) {
			menor = x[i];
		}
		if(x[i] > maior){
			maior = x[i];
		}
	}
	
	cout << "Maior valor: " << maior << endl;
	cout << "Menor valor:" << menor << endl;
	*/
	
	/*4- Preencher um vetor B de 10 elementos com o n�mero 10 se o �ndice do elemento for �mpar, e com o n�mero
	20 se for par. Escrever o vetor B ap�s o seu total preenchimento. */
	
	/*
	int b[10];
	
	for(int i = 0; i < 10; i++){
		if (i % 2 == 0){
			b[i] = 20;
		} else {
			b[i] = 10;
		}
	}
	
	for (int i = 0; i < 10; i++){
		cout << b[i] << endl;
	}
	*/
	
	/* 5- Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
	pares existem no vetor. */
	
	/*
	int vet[20], somaPares = 0;
	
	for (int i = 0; i < 20; i++){
		cout << "Digite um numero: " << endl;
		cin >> vet[i];
	}
	
	for (int i = 0; i < 20; i++){
		if (vet[i] % 2 == 0){
			somaPares++;
		}
	}
	
	printf("Foi digitado %d numeros pares.\n", somaPares);
	*/
	
	/*6- Escreva um algoritmo que leia dois vetores de 10 posi��es e fa�a a multiplica��o dos elementos de mesmo
	�ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */
	
	/*
	int a[10], b[10], c[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Digite um numero para o primeiro vetor:" << endl;
		cin >> a[i];
	}
	
	for (int i = 0; i < 10; i++){
		cout << "Digite um numero para o segundo vetor:" << endl;
		cin >> b[i];
	}
	
	for (int i = 0; i < 10; i++){
		c[i] = a[i] * b[i];
	}
	
	for (int i = 0; i < 10; i++){
		cout << c[i] << endl;
	}
	*/
	
	/* 7- Escreva um algoritmo que leia um vetor de 50 posi��es de n�meros inteiros e mostre somente os positivos
	com suas respectivas posi��es */
	
	/*
	int vet[50];
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um numero: " << endl;
		cin >> vet[i];
	}
	
	for (int i = 0; i < 50; i++){
		if (vet[i] % 2 == 0){
			cout << "Numero: " << vet[i] << " Posicao no vetor: " << i << endl;
		}
	}
	*/
	
	/* 8- Ler um vetor X de 10 elementos. Crie um vetor Y da seguinte forma. Os elementos de ordem par de Y
	(elementos com �ndice 0,2,4,6,8) receber�o os respectivos elementos de X multiplicados por 2. Os elementos
	de ordem �mpar de Y (elementos com �ndices 1,3,5,7,9) receber�o os respectivos elementos de X
	multiplicados por 3. Escrever o vetor Y. */
	
	/*
	int x[10], y[10];
	
	for(int i = 0; i < 10; i++){
		cout << "Digite um numero: " << endl;
		cin >> x[i];
	}
	
	for(int i = 0; i < 10; i++){
		if (i %2 == 0){
			y[i] = x[i] * 2;
		} else {
			y[i] = x[i] * 3;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << "Vetor Y posicao: " << i << " Resultado: " << y[i] << endl;
	}
	*/
	
	/* 9- Ler um vetor M de 10 elementos. Troque a seguir o 1�. elemento com o 6 �., o 2 �. com o 7 �., etc. at� o 5 �.
	com 10 �. e escreva o vetor M assim modificado. */
	
	/*
	int m[10];
	
	for (int i = 0; i < 10; i++){
		cout << "Digite um numero: " << endl;
		cin >> m[i];
	}
	
	for (int i = 0; i < 5; i++){
		int aux, aux2;
		aux = m[i+5];
		aux2 = m[i];
		m[i] = aux;
		m[i+5] = aux2;
	}
	
	for(int i = 0; i < 10; i++){
		cout << "Posicao " << i << " valor: " << m[i] << endl;
	}
	*/
	
	/* 10- Escreva um algoritmo que leia 2 vetores de 10 elementos inteiros. Crie um terceiro vetor que seja a uni�o dos
	dois primeiros. Mostre o vetor resultante. */
	
	/*
	int a[10], b[10], c[20];
	
	for(int i = 0; i < 10; i++){
		cout << "Digite um numero para o primeiro vetor:" << endl;
		cin >> a[i];
	}
	
	for(int i = 0; i < 10; i++){
		cout << "Digite um numero para o segundo vetor:" << endl;
		cin >> b[i];
	}
	
	for(int i = 0; i < 10; i++){
		c[i] = a[i];
	}
	
	for(int i = 10; i < 20; i++){
		c[i] = b[i-10];
	}
	
	for(int i = 0; i < 20; i++){
		cout << "Vetor C Posicao " << i << " valor: " << c[i] << endl;
	}
	*/
	
	/* 11- Fa�a um algoritmo que leia 100 n�meros inteiros. Distribua os n�meros lidos em dois vetores, sendo um para
	pares e outro para �mpares. Escreva os vetores. */
	
	/*
	int x[100], pares[100] = {0}, impares[100] = {0}, countP = 0, countI = 0;
	
	for(int i = 0; i < 100; i++){
		cout << "Digite um valor: " << endl;
		cin >> x[i];
		if (x[i] % 2 == 0){
			pares[countP] = x[i];
			countP++;
		} else {
			impares[countI] = x[i];
			countI++;
		}
	}
	
	for (int i = 0; i < countP; i++){
		cout << "Pares: " << pares[i] << endl;
	}
	
	for (int i = 0; i < countI; i++){
		cout << "Impares: " << impares[i] << endl;
	}
	*/
	
	/*12- Elaborar um algoritmo que l� um conjunto de 30 valores e os coloca em 2 vetores conforme forem pares ou
	�mpares. O tamanho do vetor � de 5 posi��es. Se algum vetor estiver cheio, escrev�-lo. Terminada a leitura
	escrever o conte�do dos dois vetores. Cada vetor pode ser preenchido tantas vezes quantas for necess�rio. */
	
	/*
	int x, pares[5], impares[5], countP = 0, countI = 0;
	
	for (int i = 0; i < 30; i++){
		cout << "Digite um valor: " << endl;
		cin >> x;
		
		if (x % 2 == 0){
			if(countP < 5) {
				pares[countP] = x[i];
				countP++;
			} else {
				countP = 0;
				pares[countP] = x[i];
				countP++;
			}
		} else {
			if (countI < 5){
				impares[countP] = x[i];
				countI++;
			} else {
				countI = 0;
				impares[countI] = x[i];
				countI++;
			}
		}
	}
	
	cout << "Pares: " << endl;
	for (int i = 0; i < 5; i++){
		cout << pares[i] << endl;
	}
	
	cout << "Impares: " << endl;
	for (int i = 0; i < 5; i++){
		cout << impares[i] << endl;
	}
	*/
	
	/* 13- Escreva um algoritmo que leia diversos n�meros inteiros fornecidos pelo usu�rio. Distribua esses valores
	entre dois vetores; o vetor dos �mpares e o vetor dos pares. Cada um ter� tamanho 10. O t�rmino do algoritmo
	se dar� quando o usu�rio digitar zero ou um dos vetores for totalmente preenchido. Mostre os dois vetores no
	final. */
	/*
	int impares[10] = {}, pares[10] = {}, countI = 0, countP = 0, vlr;
	
	cout << "Digite um valor ou zero para encerrar: " << endl;
	cin >> vlr;
	
	while (vlr != 0) {
		if (vlr % 2 == 0){
			pares[countP] = vlr;
			countP++;
		} else {
			impares[countI] = vlr;
			countI++;
		}
		
		if (countP >= 10){
			break;
		}
		
		if (countI >= 10){
			break;
		}
		
		cout << "Digite um valor ou zero para encerrar: " << endl;
		cin >> vlr;		
	}
	
	cout << "Pares: " << endl;
	for (int i = 0; i < 10; i++){
		cout << pares[i] << endl;
	}
	
	cout << "Impares: " << endl;
	for (int i = 0; i < 10; i++){
		cout << impares[i] << endl;
	}
	*/
	
	/* 14- Escreva um algoritmo que leia um vetor de 100 posi��es e mostre-o ordenado em ordem crescente */
	/*
	int a[100] = {}, temp;
	
	for (int i = 0; i < 100; i++){
		cout << "Digite um valor: " << endl;
		cin >> a[i];
	}
	
	for (int i = 0; i < 100; i++){
		for(int j = 0; j < 100; j++){
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}			
		}
	}
	
	for(int i = 0; i < 100; i++){
		cout << a[i] << endl;
	}
	*/
	
	/* 15- Escreva um algoritmo que leia um vetor de 13 elementos inteiros, que � o Gabarito de um teste da loteria
	esportiva. Leia, a seguir, para cada um dos 100 apostadores, o n�mero do seu cart�o e um vetor de
	Respostas de 13 posi��es. Verifique para cada apostador o n�meros de acertos, comparando o vetor de
	Gabarito com o vetor de Respostas. Escreva o n�mero do apostador e o n�mero de acertos. Se o apostador
	tiver 13 acertos, mostrar a mensagem "Ganhador". */
	
	/*
	int gabarito[13] = {}, resposta[13], cartao, acertos = 0; 
	
	for (int i = 0; i < 13; i++){
		cout << "Digite o valor numero #" << i << " para o gabarito" << endl;
		cin >> gabarito[i];
	}
	//For para receber apostadores	
	for(int i = 0; i < 100; i++){
		cout << "Digite o numero do cartao: " << endl;
		cin >> cartao;
		for (int j = 0; j < 13; j++){
			cout << "Digite o valor numero #" << j << endl;
			cin >> resposta[j];
		}
		for(int i = 0; i < 13; i++){
			for (int j = 0; j < 13; j++){
				if (gabarito[i] == resposta[j]){
					acertos++;
				}
			}
		}
		if(acertos == 13){
			cout << "GANHADOR!!!" << endl;
			acertos = 0;
		} else {
			cout << "O cartao #" << cartao << " obteve " << acertos << " acertos" << endl;
			acertos = 0;
		}
	
	}
	*/
	
	/* 16- Escreva um algoritmo que leia um vetor de 20 posi��es e mostre-o. Em seguida, troque o primeiro elemento
	com o �ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e assim sucessivamente. Mostre o 
	2
	novo vetor depois da troca. */
	/*
	int vet[20], count = 19;
	
	for(int i = 0; i < 20; i++){
		cout << "Digite o valor da posicao #" << i << endl;
		cin >> vet[i];
	}
	
	for(int i = 0; i < 10; i++){
		int aux = vet[i];
		vet[i] = vet[count];
		vet[count] = aux;
		count--;
	}
	
	for (int i = 0; i < 20; i++){
		cout << vet[i] << endl;
	}
	*/
	
	/* 17- Escreva um algoritmo que leia um vetor inteiro de 30 posi��es e crie um segundo vetor, substituindo os
	valores nulos (zero) por 1. Mostre os 2 vetores. */
	/*
	int a[30], b[30];
	
	for(int i = 0; i < 30; i++){
		cout << "Digite o numero posicao #" << i << endl;
		cin >> a[i];
	}

	for(int i = 0; i < 30; i++){
		if(a[i] == 0){
			b[i] = 1;
		} else {
			b[i] = a[i];
		}
	}
	
	cout << "Vetor A" << endl;
	for(int i = 0; i < 30; i++){
		cout << "Posicao #" << i << " valor: " << a[i] << endl;
	}
	
	cout << "Vetor B" << endl;
	for(int i = 0; i < 30; i++){
		cout << "Posicao #" << i << " valor: " << b[i] << endl;
	}
	*/
	
	/* 18- Escreva um algoritmo que leia um vetor G de 20 elementos caractere que representa o gabarito de uma
	prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor de respostas (R) do aluno e conte o
	n�mero de acertos. Mostre o n� de acertos do aluno e uma mensagem APROVADO, se a quantidade de
	acertos for maior ou igual a 12; e mostre uma mensagem de REPROVADO, caso contr�rio. */
	/*
	int g[13], r[13], acertos = 0;
	
	for(int i = 0; i < 13; i++){
		cout << "Digite o gabarito da questao #" << i << endl;
		cin >> g[i];
	}
	
	for(int i = 0; i < 50; i++){
		for(int j = 0; j < 13; j++){
			cout << "Digite a resposta da questao #" << j << endl;
			cin >> r[j];
			if (r[j] == g[j]){
				acertos++;
			}
		}
		if(acertos >= 12){
			cout << "APROVADO" << endl;
			acertos = 0;
		} else {
			cout << "REPROVADO" << endl;
			acertos = 0;
		}
	}
	*/
	
	/* 19- Escrever um algoritmo que l� 2 vetores de tamanho 10 e os escreve. Crie, a seguir, um vetor de 20 posi��es
	que contenha os elementos dos outros 2 vetores em ordem crescente. */
	
	/*
	int a[10], b[10], c[20];
	
	for (int i =0; i < 10; i++){
		cout << "Digite o valor para o vetor A" << endl;
		cin >> a[i];
	}
	
	for (int i =0; i < 10; i++){
		cout << "Digite o valor para o vetor B" << endl;
		cin >> b[i];
	}
	
	for (int i =0; i < 10; i++){
		c[i] = a[i];	
	}
	
	for (int i = 10; i < 20; i++){
		c[i] = b[i-10];
	}
	
	for (int i = 0; i < 20; i++){
		cout << c[i] << endl;
	}
	*/
	
	/* 20- Escrever um algoritmo que l� 2 vetores X(10) e Y(10) e os escreve. Crie, a seguir, um vetor Z que seja:
	a) a diferen�a entre X e Y (nos mesmos �ndices);
	b) a soma entre X e Y (nos mesmos �ndices);
	c) o produto entre X e Y (nos mesmos �ndices);
	Escreva o vetor Z a cada c�lculo. */
	/*
	int x[10], y[10], z[10];
	
	for (int i =0; i < 10; i++){
		cout << "Digite um valor pro vetor X" << endl;
		cin >> x[i];
	}
	
	for (int i =0; i < 10; i++){
		cout << "Digite um valor pro vetor Y" << endl;
		cin >> y[i];
	}
	
	//Diferen�a entre X e Y
	for (int i =0; i < 10; i++){
		z[i] = x[i] - y[i];
		printf("A diferenca entre X e Y e: %d\n", z[i]);
	}
	
	//Soma de X e Y
	for (int i =0; i < 10; i++){
		z[i] = x[i] + y[i];
		printf("A soma de X e Y e: %d\n", z[i]);
	}
	
	for (int i =0; i < 10; i++){
		z[i] = x[i] * y[i];
		printf("O produto de X e Y e: %d\n", z[i]);
	}
	*/
	
	/* 21- Elabore um algoritmo que leia um vetor de 6 posi��es e ap�s sua leitura leia outra vari�vel identificadora que
	calcule a opera��o conforme a informa��o contida nesta vari�vel:
	1- soma dos elementos
	2- produto dos elementos
	3- m�dia dos elementos
	4- ordene os elementos em ordem crescente
	5- mostre o vetor */
	
	/*
	int vet[6], num;
	
	for (int i = 0; i < 6; i++){
		cout << "Digite um valor pro vetor " << endl;
		cin >> vet[i];
	}
	
	cout << "Digite um outro valor: " << endl;
	cin >> num;
	
	for (int i = 0; i < 6; i++){
		printf("A soma do valor %d, no indice %d + %d e igual: %d\n",vet[i], i, num, vet[i] + num);
	}
	
	for (int i = 0; i < 6; i++){
		printf("O produto do valor %d, no indice %d * %d e igual: %d\n",vet[i], i,num,  vet[i] * num);
	}
	
	int somaVet = 0;
	for (int i = 0; i < 6; i++){
		somaVet += vet[i];
	}
	printf("A media dos valores e igual: %.2f\n", (float)(somaVet + num) / 7);
	
	
	int temp;
	for (int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if (vet[j] > vet[j + 1]) {
				temp = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = temp;
			}			
		}
	}
	
	for (int i = 0; i < 6; i++){
		printf("Vetor posicao %d, valor %d\n", i, vet[i]);
	}
	*/
	
	/* 22- Fa�a um algoritmo que leia dois vetores (A e B) de 50 posi��es e crie um terceiro (C) com a interse��o dos
	dois primeiros, isto �, coloque em C apenas os elementos que existem em A e que tamb�m existem em B.
	Mostre C. */
	/*
	int a[50], b[50] = {}, c[50] = {}, count = 0;
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor pro vetor A" << endl;
		cin >> a[i];
	}
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor pro vetor B" << endl;
		cin >> b[i];
	}
	
	for (int i = 0; i < 50; i++){
		for(int j = 0; j < 50; j++){
			if (a[i] == b[j]){
				c[count] = a[i];
				count++;
			}
		}
	}
	
	for (int i = 0; i < 50; i++){
		printf("Vetor C posicao %d, valor %d\n", i, c[i]);
	}
	*/
	
	/* 23- Fa�a um algoritmo que leia um c�digo num�rico inteiro e um vetor de 50 posi��es de n�meros reais. Se o
	c�digo for zero, termine o algoritmo. Se o c�digo for 1, mostre o vetor na ordem direta. Se o c�digo for 2,
	mostre o vetor na ordem inversa. */ 
	/*
	int vet[50] = {}, op, temp;;
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor para o vetor: " << endl;
		cin >> vet[i];
	}
	
	cout << "(1) Ordem crescente (2) Ordem decrescente (0) sair" << endl;
	cin >> op;
	
	while (op!= 0) {
		switch (op){
			case 1: 
				for (int i = 0; i < 50; i++){
					for(int j = 0; j < 50; j++){
						if (vet[j] > vet[j + 1]) {
						temp = vet[j];
						vet[j] = vet[j + 1];
						vet[j + 1] = temp;
						}			
					}
				}
				for(int i = 0; i < 50; i++){
					printf("Indice %d valor: %d\n", i, vet[i]);
				}
			break;
			case 2:
				for (int i = 0; i < 50; i++){
					for(int j = 0; j < 50; j++){
						if (vet[j] < vet[j + 1]) {
						temp = vet[j];
						vet[j] = vet[j + 1];
						vet[j + 1] = temp;
						}			
					}
				}
				for(int i = 0; i < 50; i++){
					printf("Indice %d valor: %d\n", i, vet[i]);
				}
			break;
			case 0:
				break;
			default:
				cout << "Opcao invalida! " << endl;
			break;
		}
		cout << "(1) Ordem crescente (2) Ordem decrescente (0) sair" << endl;
		cin >> op;
	}
	*/
	
	/* 24- Fa�a um algoritmo que leia um conjunto de 30 valores num�ricos inteiros e distribua-os entre dois vetores,
	separando os n�meros positivos dos negativos. Os vetores devem ter 30 posi��es cada. Mostre os vetores ao
	final do processamento. */
	/*
	int num, positivos[10] = {}, negativos[10] = {}, countP = 0, countN = 0;
	
	for(int i = 0; i < 10; i++){
		cout << "Digite um valor: " << endl;
		cin >> num;
		
		if(num >= 0) {
			positivos[countP] = num;
			countP++;
		} else {
			negativos[countN] = num;
			countN++;
		}
	}
	
	cout << "Positivos:" << endl;
	for (int i = 0; i < 10; i++){
		printf("Indice %d valor %d\n", i, positivos[i]);	
	}
	
	cout << "Negativos:" << endl;
	for (int i = 0; i < 10; i++){
		printf("Indice %d valor %d\n", i, negativos[i]);	
	}
	*/
	
	/*25- Fa�a um algoritmo que leia um vetor (A) de 100 posi��es. Em seguida, compacte o vetor, retirando os valores
	nulos e negativos. Coloque o resultado no vetor B. */
	/*
	int vetA[100], vetB[100] = {}, countB = 0;
	
	for(int i = 0; i < 100; i++){
		cout << "Digite um valor para o vetor A" << endl;
		cin >> vetA[i];
	}
	
	for(int i = 0; i < 100; i++){
		if (vetA[i] > 0){
			vetB[countB] = vetA[i];
			countB++;
		}
	}
	
	for(int i = 0; i < 100; i++){
		if (vetB[i] > 0){
			printf("Vetor B posicao %d valor %d\n", i, vetB[i]);
		}
	}
	*/
	
	/* 26- Fa�a um algoritmo que leia um vetor (X) de 500 elementos inteiros. A seguir, divida os seus elementos em
	outros dois vetores: o primeiro contendo os elementos de X m�ltiplos de 7 e o segundo contendo os
	elementos de X m�ltiplos de 3. O algoritmo n�o deve permitir que nos dois vetores apare�am espa�os vazios.
	Ao final, mostre os dois vetores resultantes. */
	/*
	int vetX[500] = {}, vetSete[500] = {}, countSete = 0, vetTres[500] = {}, countTres = 0;
	
	for(int i = 0; i < 500; i++){
		cout << "Digite um valor para o vetor X" << endl;
		cin >> vetX[i];
	}
	
	for (int i = 0; i < 500; i++){
		if (vetX[i] % 7 == 0){
			vetSete[countSete] = vetX[i];
			countSete++;
		}
		if (vetX[i] % 3 == 0){
			vetTres[countTres] = vetX[i];
			countTres++;
		}
	}
	
	//Multiplos de Sete
	for (int i = 0; i < 500; i++){
		if (vetSete[i] > 0){
			printf("Vetor de multiplos de 7, posicao %d, valor %d\n", i, vetSete[i]);
		}
	}
	
	//Multiplos de Tres
	for (int i = 0; i < 500; i++){
		if (vetTres[i] > 0){
			printf("Vetor de multiplos de 3, posicao %d, valor %d\n", i, vetTres[i]);
		}
	}
	*/
	
	/* 27- Fa�a um algoritmo que leia um vetor (X) de 500 posi��es de n�meros inteiros e distribua os seus elementos
	em 2 outros vetores (A e B). No vetor A coloque os elementos pares de X e em B, os elementos �mpares de X. */
	/*
	int vetX[500] ={}, vetA[500] = {}, vetB[500] = {}, countA = 0, countB = 0;
	
	for (int i = 0; i < 500; i++){
		cout << "Digite um valor para o vetor X" << endl;
		cin >> vetX[i];
	}

	for (int i = 0; i < 500; i++){
		if (vetX[i] % 2 == 0) {
			vetA[countA] = vetX[i];
			countA++;
		} else {
			vetB[countB] = vetX[i];
			countB++;
		}
	}
	
	cout << "Pares: " << endl;
	for (int i = 0; i < 500; i++){
		cout << vetA[i] << endl;
	}
	
	cout << "Impares" << endl;
	for (int i = 0; i < 500; i++){
		cout << vetB[i] << endl;
	}	
	*/
	
	/* 28- Fa�a um algoritmo que leia um vetor de 50 posi��es e o escreva. A seguir, ache o maior valor e mostre-o. */
	/*
	int vet[50], maior = INT_MIN;
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor para o vetor" << endl;
		cin >> vet[i];
	}
	
	for (int i = 0; i < 50; i++){
		if (vet[i] > maior){
			maior = vet[i];
		}
	}
	
	cout << "O maior valor digitado e: " << maior << endl;
	*/
	
	/* 29- Fa�a um algoritmo que leia um vetor de 500 posi��es de n�meros inteiros e divida todos os seus elementos
	pelo maior valor do vetor. Mostre o vetor ap�s os c�lculos. */
	/*
	float vet[500], maior = INT_MIN;
	
	for (int i = 0; i < 500; i++){
		cout << "Digite um valor para o vetor" << endl;
		cin >> vet[i];
	}
	
	for (int i = 0; i < 500; i++){
		if (vet[i] > maior){
			maior = vet[i];
		}
	}
	
	for (int i = 0; i < 500; i++){
		vet[i] /= maior;
	}
	
	cout << "Resultado" << endl;
	for (int i = 0; i < 500; i++){
		cout << vet[i] << endl;
	}
	*/
	
	/* 30- Fa�a um algoritmo que leia um vetor de 100 posi��es e uma vari�vel identificadora do tipo num�rica inteira.
	Retorne como resposta a quantidade de vezes que este n�mero aparece no vetor, e o percentual de vezes
	que aparece em rela��o ao vetor. */
	/*
	int vet[10], id, countId = 0;
	
	for (int i = 0; i < 100; i++){
		cout << "Digite um valor para o vetor" << endl;
		cin >> vet[i];
	}
	
	cout << "Digite um valor para que seja contado dentro do vetor: " << endl;
	cin >> id;
	
	for (int i = 0; i < 100; i++){
		if (vet[i] == id){
			countId++;
		}
	}
	
	printf("O numero digitado aparece %d vezes no vetor, este valor corresponde a %.2f%% do total do vetor\n", countId, ((float)countId * 100) / 100.00);
	*/
	
	/* 31- Fa�a um algoritmo que leia dois vetores (A e B) de 50 posi��es de n�meros inteiros. O algoritmo deve, ent�o,
	somar o primeiro elemento de A do �ltimo de B, acumulando o valor, somar o segundo elemento de A do 
	pen�ltimo de B, acumulando o valor, e assim por diante. Mostre o resultado da soma final */
	/*
	int vetA[50], vetB[50];
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor para o vetor A" << endl;
		cin >> vetA[i];
	}
	
	for (int i = 0; i < 50; i++){
		cout << "Digite um valor para o vetor B" << endl;
		cin >> vetB[i];
	}
	
	int valA, valB, result = 0;
	
	for (int i = 0; i < 50; i++){
		valA = vetA[i];
		for (int j = 49; j >= 0; j--){
			valB = vetB[j];
		}
		result += valA + valB;
	}
	
	cout << "O valor total e " << result << endl;
	*/
	
	/* 32- Fa�a um algoritmo que leia um vetor de 5 elementos inteiros, correspondentes ao resultado oficial da Loto. A
	seguir, leia 50 conjuntos de vetores (com 5 elementos inteiros cada), representando as apostas feitas.
	Compare os n�meros das apostas com o resultado oficial e mostre uma mensagem ("Ganhador") se todos os
	n�meros corresponderem ao resultado oficial. (Observa��o: n�o � necess�rio procurar por ternos e quadras,
	apenas por quinas.) */
	/*
	int result[5], jogo[5], countAcertos = 0;
	
	for (int i = 0; i < 5; i++){
		cout << "Digite o numero #" << i << " do resultado " << endl;
		cin >> result[i];
	}
	for (int i = 0; i < 50; i++){
		for (int j = 0; j < 5; j++){
			cout << "Digite o numero #" << j << " do jogo " << endl;
			cin >> jogo[j];
		}
		for(int h = 0; h < 5; h++){
			for(int k = 0; k < 5; k++){
				if(jogo[h] == result[k]){
					countAcertos++;
				}
			}
		}
		if (countAcertos == 5){
			cout << "GANHADOR!" << endl;
		} else {
			cout << "Nao foi dessa vez" << endl;
		}
		countAcertos = 0;
	}
	*/
	
	/* 33- Ler um vetor W[1..15] e imprimi-lo na ordem inversa � da leitura. Achar seu menor elemento e dizer quantas
	vezes ele ocorre no vetor, e em que posi��es. */
	
	int vetW[15], menor = INT_MAX, countMen = 0;
	
	for (int i = 0; i < 15; i++){
		cout << "Digite um valor para o vetor" << endl;
		cin >> vetW[i];
	}
	
	for (int i = 14; i == 0; i--){
		cout << vetW[i] << endl;	
	}
	
	for (int i = 0; i < 15; i++){
		if(vetW[i] < menor){
			menor = vetW[i];
		}
	}
	
	for (int i = 0; i < 15; i++){
		if(vetW[i] == menor){
			countMen++;
		}
	}
	
	printf("O menor valor e %d e ele aparece %d vezes\n", menor, countMen);
	
	
	
	return 0;
}
