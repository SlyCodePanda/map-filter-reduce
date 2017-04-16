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
	int vecSize = vec.size();

	for( i = 0; i < vecSize; i++ )
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

// Filters the list so only return odd numbers found in said list.
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

// FilterNonPositive class constructor.
FilterNonPositive::FilterNonPositive()
{

}

// Filters the list so only negative numbers from said list are returned.
bool FilterNonPositive::g( int n )
{
	if( n > 0 )
	{
		return false;
	}
	else
	{
		return true;
	}
}

// FilterNonPositive class destructor.
FilterNonPositive::~FilterNonPositive()
{

}

// FilterForTwoDigitPositive class constructor.
FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{

}

// Filters the list so only numbers with two digits and are positive are returned.
bool FilterForTwoDigitPositive::g( int n )
{
	if( n > 9 && n < 99 )
	{
		return true;
	}
	else
	{
		return false;
	}
}

// FilterForTwoDigitPositive class destructor.
FilterForTwoDigitPositive::~FilterForTwoDigitPositive()
{

}