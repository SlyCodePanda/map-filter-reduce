#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

class ReduceGeneric
{

	protected:
		virtual int binaryOperator( int first, int last );

	public:
		std::vector<int> reduce( std::vector<int> vec, std::vector<int> newVec );

		ReduceGeneric();
		~ReduceGeneric();

};

class ReduceMinimum : public ReduceGeneric
{

	private:
		int binaryOperator( int x, int y );
	public:
		ReduceMinimum();
		~ReduceMinimum();

};