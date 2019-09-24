#include <iostream>

using namespace std;

int main() {
	float num1, num2, num3, result;
	
	//Digite os numeros
	cout << "Digite o primeiro numero: " << endl;
	cin >> num1;
	cout << "Digite o segundo numero: " << endl;
	cin >> num2;
	cout << "Digite o terceiro numero: " << endl;
	cin >> num3;
	
	//Soma os 3 numeros
	result = num1 + num2 + num3;
	
	//Exibe o resultado
	cout << "O resultado e: " << result << endl;
	
	return 0;
}
