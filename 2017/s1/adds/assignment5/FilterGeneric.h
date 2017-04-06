#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

// Base class filter.
class FilterGeneric
{

	protected:
		virtual bool g( int n );

	public:
		std::vector<int> filter( std::vector<int> vec );

		FilterGeneric();
		~FilterGeneric();

};

// Derived class filters.
class FilterOdd : public FilterGeneric
{

	private:
		bool g( int n );

	public:
		FilterOdd();
		~FilterOdd();

};

class FilterNonPositive : public FilterGeneric
{

	private:
		bool g( int n );

	public:
		FilterNonPositive();
		~FilterNonPositive();

};