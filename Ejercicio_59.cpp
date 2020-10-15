//ESQUIVEL SOTO JESUS FRANCISCO

#include <iostream>
using namespace std;

int main()
{
	double Numero = 0;  //Declaracion de la variable de tipo double para la catura del dato numerico

	//Captura del dato numerico en la variable "Numero"
	cout << "Ingrese el numero:  ";
	cin >> Numero;
	
	//Calculando el valor absoluto del dato ingresado
	if (Numero == 0) {
		cout << "CERO" << endl; //Despliegue del resultado
	}
	else if (Numero < 0) {
		Numero *= -1;
		cout << "El valor absoluto es: " << Numero << endl;  //Despliegue del resultado
	}
	else {
		cout << "El valor absoluto es: " << Numero << endl; //Despliegue del resultado
	}

	return 0;
}
