#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//Exercicio 1:
	//Declara variaveis
	int a = 5, b = -2;
	float x = 2.0, y = 3.5;
	//Exibe na tela valores apos realizar a operacao matematica
	cout << "1)Qual o resultado de cada expressão aritmética abaixo, para a = 5, b = -2, x = 2.0 e y = 3.5? Escreva as operações em linguagem C e exiba os resultados na tela." << endl;
	cout << "a) a + b * 2 = " << (a + b) * 2 << endl;
	cout << "b) a + x = " << a + x << endl;
	cout << "c) a + b = " << a + b << endl;
	cout << "d) a * 2 / 3 = " << (a * 2) / 3 << endl;
	cout << "e) a * 2 / 2 = " << (a * 2) / 2 << endl;
	cout << "f) a * 2 % 3 = " << (a * 2) % 3 << endl;
	cout << "g) x * 5 / a = " << (x * 5) / a << endl;
	cout << "h) x * 5 % x = " << ((int)x * 5) % (int)x << endl;
	cout << "i) 2 * y / b = " << (2 * y) / b << endl;
	cout << "j) a + b / 2 = " << (a + b) / 2 << endl;
	cout << "k) (a + b) / 2 = " << (a + b) / 2 << endl;
	cout << "l) 2 * a % 3 / 1 = " << ((2 * a) % 3) / 1 << endl;
	cout << "m) 2 * (a % 3)/ 1 = " << (2 *(a % 3)) / 1 << endl;
	cout << "n) 2 * (a % (3 / 2)) = " << 2 * (a % (3 / 2)) << endl;
	
	cout << "Escreva em linguagem de programação as seguintes expressões aritméticas:" << endl;
	cout << "a) x + y / 2 = " << x + (y / 2) << endl;
	cout << "b) x + y / x - y = " << (x + y) / (x - y) << endl;
	cout << "c) x + y / 2 = " << (x + y) / 2 << endl;
	
	cout << "Qual o valor de cada variável ao final do seguinte programa? Escreva as operações em linguagem C e exiba os resultados na tela" << endl;
	a = 1;
	b = a + 2;
	x = a / b;
	b = b + 1;
	a = a - 1;
	y = b / 2;
	a = a + 2;
	y = b % (a + 1);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	//No mesmo programa acima, as seguintes atribuições seriam válidas ou inválidas? Por que? Teste em linguagem C
	//a) b = a / 2 - valido divide a por 2
	//b) x + y = 6 - invalido pois nao pode armezenar uma informacao em 2 variaveis
	//c) b = x % y - invalido pois x e y é uma variavel do tipo float
	//d) a = a + 1;
	// y = “Blu”; y - invalido pois y é uma variavel do tipo float e não armazena texto
	
	//Exercicio 2:
	cout << "2) Qual o valor final de cada variável no algoritmo a seguir? (faça o teste em linguagem C e exiba os valores na tela)" << endl;
	int Val1, Val2, Val3;
 	Val1 = 10;
 	Val2 = 20;
 	cout << "Val3 = Val2 - Val1 = " << Val2 - Val1 << endl;
 	cout << "Val3 = Val1 - Val2 = " << Val1 - Val2 << endl;
 	
 	//Exercicio 3:
 	cout << "3) Qual o valor final de cada variável no algoritmo a seguir? (faça o teste em linguagem C e exiba os valores na tela)" << endl;
	int Prim, Seg, Ter;
 	Prim = 5;
 	Seg = Prim;
	Ter = Seg;
 	Prim = 8;
 	
	cout << "Prim = " << Prim << endl;
	cout << "Seg = " << Seg << endl;
	cout << "Ter = " << Ter << endl;
	
	//Exercicio 4:
	cout << "4) Qual o valor final de cada variável no algoritmo a seguir? (faça o teste em linguagem C e exiba os valores na tela)" << endl;
	int c,d;
	a = 10;
	b = 20;
	d = a + a;
	c = a + b;
	a = b + c;
	d = d + 1;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	
	//Exercicio 5: 
	cout << "5) Entrada em Fahrenheit e saida em Celsius" << endl;
	cout << "Digite a temperatura em graus Fahrenheit: " << endl;
	float celsius,fahr, conversao;
	cin >> fahr;
	conversao = (fahr - 32) / 1.8;
	cout << "A temperatura " << fahr << " em graus Celsius e: " << conversao << endl;
	
	//Exercicio 6:
	cout << "6) Entrada em Celsius e saida em Fahrenheit" << endl;
	cout << "Digite a temperatura em graus Celsius: " << endl;
	cin >> celsius;
	conversao = ((celsius/5) * 9) + 32;
	cout << "A temperatura " << celsius << " em graus Fahrenheit e: " << conversao << endl;
	
	
	//Exercicio 7:
	cout << "7) Escreva um algoritmo para ler o número de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores" << endl;
	float eleitores, brancos, nulos, validos;
	cout << "Digite a quantidade total de eleitores: " << endl;
	cin >> eleitores;
	cout << "Digite a quantidade total de votos brancos: " << endl;
	cin >> brancos;
	cout << "Digite a quantidade total de votos nulos: " << endl;
	cin >> nulos;
	cout << "Digite a quantidade total de votos validos: " << endl;
	cin >> validos;
	
	cout << "Porcentagem de votos brancos: " << (brancos * 100) / eleitores << "%" << endl;
	cout << "Porcentagem de votos nulos: " << (nulos * 100) / eleitores << "%" << endl;
	cout << "Porcentagem de votos brancos: " << (validos * 100) / eleitores << "%" << endl;
	
	
	//Exercicio 8:
	cout << "8) A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um algoritmo que leia o percentual de alunos reprovados na turma C, o percentual de aprovados na turma D, calcule e escreva:" << endl;
	float tc = 60, td = 20, ptc, ptd, repTc, repTd;
	cout << "Digite o percentual de alunos reprovados na turma C: " << endl;
	cin >> ptc;
	cout << "Digite o percentual de alunos reprovados na turma D: " << endl;
	cin >> ptd;
	repTc = (ptc * tc) / 100;
	repTd =  (ptd * td) / 100;
	cout << "O total de alunos reprovados na turma C e: " << repTc << " de " << tc << endl;
	cout << "O total de alunos reprovados na turma D e: " << repTd << " de " << td << endl;
	cout << "O percentual de alunos reprovados em relacao ao total das turmas e: " << ((repTc + repTd) * 100) / (tc + td) << "%" << endl;
	
	return 0;
}
