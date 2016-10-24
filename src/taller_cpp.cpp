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

int main() {


	cout << "Ingrese su edad: ";
	int age;
	cin >> age;

	const int usersAge (age); // usersAge can not be changed

	//userAge++;

	cout<<"Tienes: "<<usersAge<<endl;

	return 0;
}
