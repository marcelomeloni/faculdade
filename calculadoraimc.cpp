#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	int genero;
	float altura, imc;
	cout << "Digite 1 se você for mulher e 2 se for homem" << endl;
	cin >> genero;
	cout << "Qual sua altura" << endl;
	cin >> altura;
	if(genero == 1){
		imc = (altura*62.1 - 44.7);
		cout << "Seu imc é:" << imc << endl;}
	else
		if (genero == 2){
		imc = (altura*72.7 - 58);
		cout << "Seu imc é:" << imc << endl;}

			else
				 cout << "numero invalido" << endl;
	
}