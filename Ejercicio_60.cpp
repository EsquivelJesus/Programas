// Ejercicio_60.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
	int Num[5];
	Num[0] = -6;
	Num[1] = 0;
	Num[2] = 25;
	Num[3] = -143;
	Num[4] = -42;

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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
