//============================================================================
// Name        : taller_cpp.cpp
// Author      : Jheison
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Sizeof, coma, y operadores condicionales


int main() {

	double d = 5.0;
	cout << "El numero de bytes que ocupa es: "<<sizeof(d)<<endl;
	// deberia imprimir el numero de bytes que ocupa en memoria


	//operador coma

	int x = 0;
	int y = 2;
	int z = (++x, ++y); // incrementa x e y

	cout<<"El valor de z es "<<z<<endl;

	return 0;
}
