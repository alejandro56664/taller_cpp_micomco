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


	int x { 4 }; // initialize x with the value of 4
	x = 5; // change value of x to 5

	const double gravity { 9.8 }; // preferred use of const before type
	int const sidesInSquare { 4 }; // okay, but not preferred

	//gravity = 9.9; // not allowed, this will cause a compile error

	return 0;
}
