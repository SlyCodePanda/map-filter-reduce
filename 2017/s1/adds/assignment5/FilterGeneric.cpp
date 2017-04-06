#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

#include "FilterGeneric.h"

// FilterGeneric class constructor.
FilterGeneric::FilterGeneric()
{

}

// Specifies the operation to be filtered to list.
// Can be overridden by child classes to alter operation.
bool FilterGeneric::g( int n )
{
	return true;
}

// Takes a vector as input and returns the resulting vector after being filtered.
std::vector<int> FilterGeneric::filter( std::vector<int> vec )
{
	std::vector<int> newVec;
	int i;
/*
	// Recursive version of for-loop. perhaps try returning the v vector into the map function with a size of -1.
	// Shortening the size given much like in the last assignment for the "Reverse" recursion loop...
	if( vec.size() <= newVec.size() )
	{
		return newVec;
	}
	else
	{
		newVec.push_back( f(n.at(i)));
		i++;
		map( n );
	}
*/
	for( i = 0; i < vec.size()-1; i++ )
	{
		if( g( vec.at(i) ) == true )
		{
			newVec.push_back( vec.at(i) );
		}
	}
	return newVec;
}

// FilterGeneric class destructor.
FilterGeneric::~FilterGeneric()
{

}

// FilterOdd class constructor.
FilterOdd::FilterOdd()
{

}

// Filters the list to only return odd numbers found in said list.
bool FilterOdd::g( int n )
{
	if( n % 2 == 0 )
	{
		return false;
	}
	else
	{
		return true;
	}
}

// FilterOdd class destructor.
FilterOdd::~FilterOdd()
{

}