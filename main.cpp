#include <iostream>
#include <vector>

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

#include "MapGeneric.h"
#include "FilterGeneric.h"

int main()
{

	// A vector with 20 ints assigned the value of 5.
	std::vector<int> vec;
	vec = { 1, 2, 3, 4, 5, -1, -2 };

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

	// Creates a pointer of the type FilterGeneric.
	FilterGeneric filterG;
	FilterGeneric *ptrFilterG = &filterG;

	// Creates a pointer of the type FilterOdd.
	FilterOdd filterO;
	FilterOdd *ptrFilterO = &filterO;

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

	// Printing out the vec when filtered with FilterGeneric.
	std::cout << "Filter Generic: " << std::endl;
	std::vector<int> filterGeneric = ptrFilterG->filter( vec );

	for (std::vector<int>::const_iterator i = filterGeneric.begin(); i != filterGeneric.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;

	// Printing out the vec when filtered with FilterOdd.
	std::cout << "Filter Odd: " << std::endl;
	std::vector<int> filterOdd = ptrFilterO->filter( vec );

	for (std::vector<int>::const_iterator i = filterOdd.begin(); i != filterOdd.end(); ++i)
    {
    	std::cout << *i << ' ';
	}
	std::cout << std::endl;

	return 0;

};

// To compile in g++ using c++11:
// 		g++ -std=c++11 -o main.out main.cpp ....etc.