//ESQUIVEL SOTO JESUS FRANCISCO

#include <iostream>
using namespace std;

int main()
{
	//Declaracion del arreglo e insertando los valores en cada espacio
	int Num[5];
	Num[0] = -6;
	Num[1] = 0;
	Num[2] = 25;
	Num[3] = -143;
	Num[4] = -42;

	//Calculando el valor absoluto de cada valor del arreglo y desplegando el resultado al instante
	for (int x = 0; x < 5; x++) {
		if (Num[x] == 0) {
			cout << "El valor absoluto es: CERO" << "\n";
		}
		else if (Num[x] < 0) {
			Num[x] *= -1;
			cout << "El valor absoluto es: " << Num[x] << "\n";
		}
		else {
			cout << "El valor absoluto es: " << Num[x] << "\n";
		}
	}

	return 0;
}
