#include <iostream>
#include <math.h>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");

	float litros, largura, altura, area;
	int latas;
	
	cout << "Altura:"; cin >> altura;
	cout << "Largura:"; cin >> largura;
	area = largura*altura;
	litros = area/4;
	latas = ceil(litros/18);
	
	cout << "Serão necessarias" << latas << "latas";
	cout << "Será gasto:" << latas*235 <<"R$";
	
}