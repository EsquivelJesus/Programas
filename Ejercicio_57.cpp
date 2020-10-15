// Ejercicio_57.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
