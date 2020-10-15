

#include <iostream>
using namespace std;

int main()
{
	int Calificaciones[20]; //Iiniciza un arreglo para 20 datos de tipo integer
	int contador = 0; //Inicializa una variable de tipo integer
	for (int x = 0; x < 20; x++) {  //Ciclo for para capturar los 20 datos
		cout << "Ingrese la calificacion del examnen " << x + 1 << " \n";
		cin >> Calificaciones[x];
		if (Calificaciones[x] < 65) //separa las calificaciones que se contaran para su despliegue
			contador++;
	}
	cout << "El numero de examenes menor a 65 son: " << contador << endl ;  //Despliega el numero de examenes menores a 65

	return 0;
}


