#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#include "ReduceGeneric.h"

// ReduceGeneric class constructor.
ReduceGeneric::ReduceGeneric()
{

}

// Specifies the operator to be used on vector elements. This function is altered in derived classes so the base class version
// of this function only ever returns int x.
int ReduceGeneric::binaryOperator( int x, int y )
{
	return x;
}

// This function takes in 2 integers and compares and reduces them based on the binaryOperator applied,
// and adds them to a new vector. Then returning that new vector.
std::vector<int>ReduceGeneric::reduce( std::vector<int> vec, std::vector<int> newVec )
{
    return vec;
}

// ReduceGeneric class destructor.
ReduceGeneric::~ReduceGeneric()
{

}

// ReduceMinimum class constructor.
ReduceMinimum::ReduceMinimum()
{

}

// This function takes in 2 integers and compares and reduces them based on the binaryOperator applied,
// and adds them to a new vector. Then returning that new vector.
std::vector<int>ReduceMinimum::reduce( std::vector<int> vec, std::vector<int> newVec )
{

	//std::vector<int> newVec( vec.size() );
	int returned = binaryOperator( vec.at(0), vec.at( vec.size()-1 ) );

	if ( vec.size() == 1 )
	{
		return newVec;
	}

	else if ( newVec[0] > returned || newVec[0] == returned )
	{
		newVec[0] = returned;

		vec.erase(vec.begin()+0);
		return reduce( vec, newVec );		
	}

	else if ( newVec[0] < returned && newVec[0] != 0 )
	{
		newVec[0] = newVec[0];

		vec.erase(vec.begin()+0);
		return reduce( vec, newVec );
	}

	else if ( newVec[0] == 0 )
	{
		newVec[0] = returned;

		vec.erase(vec.begin()+0);
		return reduce( vec, newVec );
	}
	else
	{
    	std::cout << "newVec wasn't caught" << std::endl;
    	return vec;
	}

}

// This function takes in two integers and returns whichever one is the smallest.
int ReduceMinimum::binaryOperator( int first, int last )
{

	if ( first == last )
	{
		return first;
	}
	else if ( first < last )
	{
		return first;
	}
	else if ( first > last )
	{
		return last;
	}
	else
	{
		return 0;
	}

}

// ReduceMinimum class destructor.
ReduceMinimum::~ReduceMinimum()
{

}

// ReduceGCD class constructor.
ReduceGCD::ReduceGCD()
{

}

std::vector<int>ReduceGCD::reduce( std::vector<int> vec, std::vector<int> newVec )
{

	if ( vec.size() == 2 )
	{
		int b = lcm( vec.at(0), vec.at(1) );
		newVec[0] = b;
		return newVec;
	}
	else if ( vec.size() > 2 ) 
	{
		int a = vec.at(0);
		vec.erase( vec.begin() );

		int c = lcm( a, lcm( vec.at(0), vec.at(1) ) );
		newVec[0] = c;
		return newVec;
	}
	else
	{
		return newVec;
	}

}

// This function takes in two integers and returns their greatest common denominator.
int ReduceGCD::binaryOperator( int first, int last )
{
	if ( last == 0 )
	{
		return first;
	}
	else
	{
		return binaryOperator( last, first % last );
	}
}

// This function calculates the lowest common denominator between two numbers.
int ReduceGCD::lcm( int first, int last )
{
	if ( last == 0 )
	{
		return abs( first );
	}
	else
	{
		return abs( binaryOperator( last, first % last ) );
	}
}

// ReduceGCD class destructor.
ReduceGCD::~ReduceGCD()
{

}

