#include <iostream>
#include <vector>

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

#include "MapGeneric.h"
#include "FilterGeneric.h"
#include "ReduceGeneric.h"

int main()
{


	// A vector with 20 ints.
	std::vector<int> vec;
	int input;
	//vec = { 6, -11, 53, -16, 73, 128, 105, 104, -71, -179, 102, 12, 21, -145, -99, 199, -156, -186, 43, -189 };

	// Takes input from user of 20 integers that then inputs them into a vector of ints.
	std::cin >> input;

	while ( ( std::cin >> input ) && vec.size() < 18 )
	{
		vec.push_back( input );
	}

	// New vector that is passed for the ReduceGeneric class and derived clases.
	std::vector<int> newVec(1);


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

	// Creates a pointer of the type FilterNonPositive.
	FilterNonPositive filterNP;
	FilterNonPositive *ptrFilterNP = &filterNP;

	// Creates a pointer of the type FilterForTwoDigitPositive.
	FilterForTwoDigitPositive filter2D;
	FilterForTwoDigitPositive *ptrFilter2D = &filter2D;

	// Creates a pointer of the type ReduceGeneric.
	ReduceGeneric reduceG;
	ReduceGeneric *ptrReduceG = &reduceG;

	// Creates a pointer of the type ReduceMinimum.
	ReduceMinimum reduceM;
	ReduceMinimum *ptrReduceM = &reduceM;

	// Creates a pointer of the type ReduceGCD.
	ReduceGCD reduceGCD;
	ReduceGCD *ptrReduceGCD = &reduceGCD;

	// Converting the original list to L' = [3|x1|, 3|x2|, ..., 3|xn|] using map.
	//std::cout << "Triple Map: " << std::endl;
	std::vector<int> tripleVector = ptrMapT->map( vec );

	//std::cout << "Map Absolute: " << std::endl;
	std::vector<int> absoluteVector = ptrMapA->map( tripleVector );

	// From L', selects all the positive two digit integers that are also odd by using filter. Resulting in L".
	//std::cout << "Filter Odd: " << std::endl;
	std::vector<int> filterOdd = ptrFilterO->filter( absoluteVector );

	//std::cout << "Filter For Two Digit Positive: " << std::endl;
	std::vector<int> filterFor2D = ptrFilter2D->filter( filterOdd );

	// Computes the minimum value and the GCD of L" using reduce. Outputting the results, seperated by space.
	//std::cout << "Reduce Minimum: " << std::endl;
	std::vector<int> reduceMin = ptrReduceM->reduce( filterFor2D, newVec );

	// OUTPUT 1:
	std::cout << reduceMin[0] << " ";

	//std::cout << "Reduce GCD: " << std::endl;
	std::vector<int> reduceGC = ptrReduceGCD->reduce( filterFor2D, newVec );

	// OUTPUT 2:
	std::cout << reduceGC[0] << std::endl;

	return 0;

};

// To compile in g++ using c++11:
// 		g++ -std=c++11 -o main.out main.cpp ....etc.