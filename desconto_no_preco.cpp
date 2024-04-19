#include <iostream>
#include <locale>

using namespace std;
int main(){
	setlocale(LC_ALL, "portuguese");
	int metodo;
	float totalprice, parcela;
	cout << ">>>MODA TOP<<<"<< endl;
	cout << "Escolha o metodo de pagamento!:" << endl;
	cout << "1 - À VISTA (10% DESCONTO)" << endl;
	cout << "2 - CARTÃO (5% DESCONTO)" << endl;
	cout << "3 - PARCELADO" << endl;
	cin >> metodo;
	
	cout << "Valor total da compra:" << endl;
	cin >> totalprice;
	
	switch(metodo)
	{
	case 1:
		cout << "Preço com desconto:" << totalprice - totalprice*0.1 << "R$" << endl;
		break;
	case 2:
		cout << "Preço com desconto:" << totalprice - totalprice*0.05 << "R$" << endl;
		break;
	case 3:
		cout << "Qual a quantidade de parcelas?" << endl;
		cin >> parcela;
		cout << "Valor de cada parcela:" << totalprice/parcela << "R$" << endl;
		cout <<"Valor total final:" << totalprice << "R$" << endl;
		break;
	default:
		cout << "Metodo invalido, reinicie o programa!" << endl;
		break;
	}
	
	
}