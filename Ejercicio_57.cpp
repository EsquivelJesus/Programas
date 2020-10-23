//INSTITUTO TECNOLOGICO DE TIJUANA
//INENIERIA EN SISTEMAS COMPUTACIONALES
//ESQUIVEL SOTO JESUS FRANCISCO
//#18212180
//Creado el 16 octubre 2020

#include <iostream>
using namespace std;

int main()
{
	int N = 0, acumulador = 0, Numero = 0; //Declaracion de las variables de tipo INTEGER para acumular y recibir el numero
	double Promedio = 0; //Declaracion de la variable donde se almacenara el promedio

	cout << "¿Cuantos numeros desea ingresar? \n"; //Se pide el numero de datos que se capturaran
	cin >> N;

	for (int x = 0; x < N; x++) {  //Ciclo para capturar el dato numerico y acumularlo de igual manera 
		cout << "Ingrese el numero " << x + 1 << "\n";
		cin >> Numero;
		acumulador += Numero;
	}
	Promedio = acumulador / N;  //Se calcula el promedio despues de terminar el ciclo
	cout << "El promedio es: " << Promedio << endl;  //Despliegue del resultado

	return 0;
}


