#include <iostream>

using namespace std;

int main (){

	int num, numOriginal, cont = 0;
	long int bin[500];

	cout << "Digite um n�mero a ser convertido de Decimal para Bin�rio:"<< endl;
	cin >> num;

	numOriginal = num;

	if (num < 0 || num == 0){
		cout << "Erro. O n�mero inserido � inv�lido" << endl;
		return 0;
	}
	if (num == 2){
		cout << endl << "O n�mero " << numOriginal << " em Decimal � equivalente a 10 em Bin�rio";
		return 0;
	}
	if (num == 1){
		cout << endl << "O n�mero " << numOriginal << " em Decimal � equivalente a 01 em Bin�rio";
		return 0;
	}

	do {
		if (num == 1){
			bin[cont] = 1;
			num = 0;
			break;
		}

		if (num % 2 == 1){
			bin[cont] = 1;
			cont++;
			num = (num - 1) / 2;
			continue;
		}else
			if (num % 2 == 0){
			bin[cont] = 0;
			cont++;
			num /= 2;
			continue;
		}

	}while (num > 0);

	cout << endl << "O n�mero " << numOriginal << " em Decimal � equivalente a ";
	for (int i = cont; i >= 0; i--){
		cout << bin[i];
	}
	cout << " em Bin�rio." << endl;

	return 0;
}
