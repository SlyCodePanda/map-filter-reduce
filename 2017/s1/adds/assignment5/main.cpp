#include <iostream>
#include <vector>

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

#include "MapGeneric.h"

int main()
{

	// A vector with 20 ints assigned the value of 5.
	std::vector<int> vec( 20, 5 );

	// Creates a pointer of the type MapGeneric.
	MapGeneric mapG;
	MapGeneric *ptrMapG = &mapG;

	// Creates a pointer of the type MapTriple.
	MapTriple mapT;
	MapTriple *ptrMapT = &mapT;

	// Creates a pointer of the type MapSquare.
	MapSquare mapS;
	MapSquare *ptrMapS = &mapS;

	// Creates a pointer of the type MapAbsoluteValue.
	MapAbsoluteValue mapA;
	MapAbsoluteValue *ptrMapA = &mapA;


	// Printing out the Generic Map vector.
	std::cout << "Generic Map: " << std::endl;
	std::vector<int> genericVector = ptrMapG->map( vec );

	for (std::vector<int>::const_iterator i = genericVector.begin(); i != genericVector.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;

	// Printing out the vec when mapped with mapTriple.
	std::cout << "Triple Map: " << std::endl;
	std::vector<int> tripleVector = ptrMapT->map( vec );

	for (std::vector<int>::const_iterator i = tripleVector.begin(); i != tripleVector.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;

	// Printing out the vec when mapped with mapSquare.
	std::cout << "Map Squared: " << std::endl;
	std::vector<int> squaredVector = ptrMapS->map( vec );

	for (std::vector<int>::const_iterator i = squaredVector.begin(); i != squaredVector.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;

	// Printing out the vec when mapped with mapAbsoluteValue.
	std::cout << "Map Absolute: " << std::endl;
	std::vector<int> absoluteVector = ptrMapA->map( vec );

	for (std::vector<int>::const_iterator i = absoluteVector.begin(); i != absoluteVector.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;


	return 0;

};

// To compile in g++ using c++11:
// 		g++ -std=c++11 -o main.out main.cpp ....etc.