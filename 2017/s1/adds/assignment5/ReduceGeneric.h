#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

class ReduceGeneric
{

	protected:
		virtual int binaryOperator( int first, int last );

	public:
		virtual std::vector<int> reduce( std::vector<int> vec, std::vector<int> newVec );

		ReduceGeneric();
		~ReduceGeneric();

};

class ReduceMinimum : public ReduceGeneric
{

	private:
		int binaryOperator( int first, int last );
	public:
		std::vector<int> reduce( std::vector<int> vec, std::vector<int> newVec );
		ReduceMinimum();
		~ReduceMinimum();

};
class ReduceGCD : public ReduceGeneric
{

	private:
		int binaryOperator( int first, int last );
		int lcm ( int first, int last );
	public:
		std::vector<int> reduce( std::vector<int> vec, std::vector<int> newVec );
		ReduceGCD();
		~ReduceGCD();

};