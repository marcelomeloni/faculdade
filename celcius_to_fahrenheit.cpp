#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "portuguese");
	float temp;
	
	cout << "Temperatura em graus celcius:" << endl; cin >> temp;
	temp = (9*temp/5) + 32;
	cout << temp << endl;
	
	
}