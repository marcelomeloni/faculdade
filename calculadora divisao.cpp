 #include <iostream>
 using namespace std;
 int main()
 {
 	float v1, v2, result;
 	
 	cout << "Digite o valor do dividendo:";
 	cin >> v1;
 	cout << "Digite o valor do divisor:";
 	cin >> v2;
 	if (v2 == 0)
 		cout << "Nao dividiras por 0" << endl;
 	else 
 		result = (v1/v2);
        cout << "Resultado:" << result;
 	return 0;
 }