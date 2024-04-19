#include <iostream>
#include <locale>
using namespace std;
int main(){
	int opcao;
	float A, B, resultado;
	setlocale(LC_ALL, "portuguese");
	cout << ">>>Calculadora Tabajara<<<"<< endl;
	cout << "Escolha a Operação:" << endl;
	cout << "1 - SOMA" << endl;
	cout << "2 - SUBTRAÇÃO" << endl;
	cout << "3 - MULTIPLICAÇÃO" << endl;
	cout << "4 - DIVISÃO" << endl;
	cout << "Digite sua opção: ";
	cin >> opcao;
	cout << "Digte o primeiro valor:";
	cin >> A;
	cout << "Digite o segundo valor:";
	cin >> B;
	switch(opcao)
	{
	case 1:
		resultado = A+B;
		break;
	case 2:
		resultado = A-B;
		break;
	case 3:
		resultado = A*B;
		break;
	case 4:
		resultado = A/B;
		break;			
	default:
		cout <<"Opcão invalida!"<< endl;
		break;
	}
	cout << "Resultado:" << resultado << endl;
		
		
	
	
}