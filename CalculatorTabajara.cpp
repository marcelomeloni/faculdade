#include <iostream>
#include <locale>
using namespace std;
int main(){
	int opcao;
	float A, B, resultado;
	setlocale(LC_ALL, "portuguese");
	cout << ">>>Calculadora Tabajara<<<"<< endl;
	cout << "Escolha a Opera��o:" << endl;
	cout << "1 - SOMA" << endl;
	cout << "2 - SUBTRA��O" << endl;
	cout << "3 - MULTIPLICA��O" << endl;
	cout << "4 - DIVIS�O" << endl;
	cout << "Digite sua op��o: ";
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
		cout <<"Opc�o invalida!"<< endl;
		break;
	}
	cout << "Resultado:" << resultado << endl;
		
		
	
	
}