#include <iostream>;
using namespace std;
int main()
{
	float vhora, horas, salario;
	
	cout << "Quanto voce ganha por hora trabalhada?";
	cin >> vhora;
	cout <<"Quantas horas voce trabalha por semana?";
	cin >> horas;
	
	salario = (vhora*4*horas);
	cout << "Seu salario mensal e: " << salario << endl;
	
	return 0;
}