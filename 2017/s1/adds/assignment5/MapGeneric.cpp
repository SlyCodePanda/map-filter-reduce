#include <iostream>
#include "vector"

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */
#include <math.h>		/* pow */

#include "MapGeneric.h"


// MapGeneric class constructor.
MapGeneric::MapGeneric()
{

}

// Sets the default value of the function f.
int MapGeneric::f( int n )
{
	return n;
}

// Takes a vector as input and returns the resulting vector after mapping.
std::vector<int> MapGeneric::map( std::vector<int> vec )
{
	std::vector<int> newVec;
	int i;
	int vecSize = vec.size();

	for( i = 0; i < vecSize; i++ )
	{
		newVec.push_back( f(vec.at(i)) );
	}
	return newVec;
}

// MapGeneric class destructor.
MapGeneric::~MapGeneric()
{

}

// MapTriple class constructor.
MapTriple::MapTriple()
{

}

// Takes in an integer and multiplies said integer by 3.
int MapTriple::f( int n )
{
	return 3*n;
}

// MapTriple class destructor.
MapTriple::~MapTriple()
{

}

// MapSquare class constructor.
MapSquare::MapSquare()
{

}

// Takes in an integer and squares said integer.
int MapSquare::f( int n )
{
	return pow(n,2);
}

// MapSquare class destructor.
MapSquare::~MapSquare()
{

}

// MapAbsoluteValue class constructor.
MapAbsoluteValue::MapAbsoluteValue()
{

}

// Takes an integer and returns it's absolute value.
int MapAbsoluteValue::f( int n )
{
	 return abs(n);
}

// MapAbsoluteValue class destructor.
MapAbsoluteValue::~MapAbsoluteValue()
{
	
}
