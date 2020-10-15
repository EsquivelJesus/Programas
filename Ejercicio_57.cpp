//ESQUIVEL SOTO JESUS FRANCISCO ING. Sitemas Computacionales

#include <iostream>
using namespace std;

int main()
{
	int N = 0, acumulador = 0, Numero = 0;
	double Promedio = 0;

	cout << "¿Cuantos numeros desea ingresar? \n";
	cin >> N;

	for (int x = 0; x < N; x++) {
		cout << "Ingrese el numero " << x + 1 << "\n";
		cin >> Numero;
		acumulador += Numero;
	}
	Promedio = acumulador / N;
	cout << "El promedio es: " << Promedio << endl;

	return 0;
}


