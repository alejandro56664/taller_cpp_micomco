//============================================================================
// Name        : taller_cpp.cpp
// Author      : Jheison
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Const, constexpr, and symbolic constants


//Const is most useful (and most often used) with function parameters:
void printInteger(const int myValue)
{
   cout << myValue;
}

// Pasar el parametro de una funcion como const permite asegurar a quien llama la funcion
// que esta no cambiará el valor del parametro.

int main() {

	constexpr double gravity (9.8); // ok, El valor puede ser resuelto en tiempo de comilación
	constexpr int sum = 4 + 5; // ok, El valor puede ser resuelto en tiempo de comilación

	cout << "Ingrese su edad: ";
	int age;
	cin >> age;

	const int usersAge = age; // ??? El valor de 'age' no puede ser resuelto en tiempo de comilación

	//userAge++;

	cout<<"Tienes: ";
	printInteger(usersAge);
	cout<<endl;
	return 0;
}
