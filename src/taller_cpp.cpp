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


	cout << "Ingrese su edad: ";
	int age;
	cin >> age;

	const int usersAge (age); // usersAge can not be changed

	//userAge++;

	cout<<"Tienes: ";
	printInteger(usersAge);
	cout<<endl;
	return 0;
}
