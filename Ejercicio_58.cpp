//INSTITUTO TECNOLOGICO DE TIJUANA
//INENIERIA EN SISTEMAS COMPUTACIONALES
//ESQUIVEL SOTO JESUS FRANCISCO
//#18212180
//Creado el 16 octubre 2020

#include <iostream>
using namespace std;

int main()
{
	int Numero = 0, Res = 0, NumeroInvertido = 0,numanterior = 0;  //Declaracion de las cuatro variables de tio INTEGER Del numero a capturar el residuo y en donde se pondra el valor invertido
	
	//se captura el valor a invertir
	cout << "Ingrese el numero: "; 
	cin >> Numero;
	numanterior = Numero; //Guardamos la variable para compararla con el resultado

	//Ciclo para sacar el residuo de cifra para asi invertirlo y agruegarlo en la otra variable
	while (Numero > 0) {
		Res = Numero % 10;
		Numero /= 10;
		NumeroInvertido = NumeroInvertido * 10 + Res;
	}
	cout << "EL INVERSO DE  " << numanterior << " es " << NumeroInvertido << endl; //Despliegue del valor ingresado y el valor invertido


	return 0;
}
