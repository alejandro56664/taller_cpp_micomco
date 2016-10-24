//============================================================================
// Name        : taller_cpp.cpp
// Author      : Jheison
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Incremento, Decremento y efectos laterales


int add(int x, int y)
{
    return x + y;
}

int main() {

	int x = 5;
	int value = add(x, ++x); // es 5 + 6, o 6 + 6?
	//Depende en que orden el compilador evalua los argumentos de la función

	cout << value;
	return 0;
}
