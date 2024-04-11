#include <iostream>

using namespace std;
int main()
{
	float nota1, nota2, nota3;
	float media;
	int codigo;
	cout << "Informe nota 1:";
	cin >> nota1;
	cout << "Informe nota 2:";
	cin >> nota2;
	cout << "Informe nota 3:";
	cin >> nota3;
	
	cout <<"Informe codigo do aluno:";
	cin >> codigo;
	
	if(nota1>nota2>nota3)
		media = (4*nota1 + 3*nota2 + 3*nota3)/10;
	else
		if(nota2>nota1 && nota2>nota3)
			media = (4*nota2 + 3*nota1 + 3*nota3)/10;
		else 
			media = (4*nota3 + 3*nota1 + 3*nota2)/10;
     cout <<"=========================================" << endl;
     cout <<"Codigo do aluno:" << codigo << endl;
     cout << "Nota 1: " << nota1 << endl;
	 cout << "Nota 2: " << nota2 << endl;
	 cout << "Nota 3: " << nota3 << endl;
     cout << "Media:" << media << endl;
     cout <<"Situacao:";
     if (media >= 6) 
     	cout << "Aprovado! :)";
     else
     	cout << "Reprovado :/";
     
	return 0;
}