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
	std::cout << "generic binaryOperator: " << x << std::endl;
	return x;
}

// This function takes in 2 integers and compares and reduces them based on the binaryOperator applied,
// and adds them to a new vector. Then returning that new vector.
std::vector<int>ReduceGeneric::reduce( std::vector<int> vec, std::vector<int> newVec )
{

	//std::vector<int> newVec( vec.size() );
	int returned = binaryOperator( vec.at(0), vec.at( vec.size()-1 ) );

	std::cout << "returned: " << returned << std::endl;

	std::cout << "vec(0): " << vec.at(0) << std::endl;
	std::cout << "newVec(0): " << newVec.at(0) << std::endl;


	if ( vec.size() == 1 )
	{
		return newVec;
	}

	else if ( newVec[0] > returned || newVec[0] == returned )
	{
		newVec[0] = returned;

		vec.erase(vec.begin()+0);
		reduce( vec, newVec );		
	}

	else if ( newVec[0] < returned && newVec[0] != 0 )
	{
		newVec[0] = newVec[0];

		vec.erase(vec.begin()+0);
		reduce( vec, newVec );
	}

	else if ( newVec[0] == 0 )
	{
		std::cout << "newVec equals 0" << std::endl;
		newVec[0] = returned;
		std::cout << "newVec now equals " << newVec[0] << std::endl;

		vec.erase(vec.begin()+0);
		reduce( vec, newVec );
	}
	else
	{
    	std::cout << "newVec wasn't caught" << std::endl;
    	return vec;
	}

}

// ReduceGeneric class destructor.
ReduceGeneric::~ReduceGeneric()
{

}

// ReduceMinimum class constructor.
ReduceMinimum::ReduceMinimum()
{

}

int ReduceMinimum::binaryOperator( int first, int last )
{
	std::cout << "first: " << first << std::endl;
	std::cout << "last: " << last << std::endl;

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

}

// ReduceMinimum class destructor.
ReduceMinimum::~ReduceMinimum()
{

}