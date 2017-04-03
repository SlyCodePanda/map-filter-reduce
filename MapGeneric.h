#include <iostream>
#include <vector>

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

using namespace std;

class MapGeneric
{
	private:
		virtual int f( int n );

	public:
		std::vector<int> map( std::vector<int> vec );

		MapGeneric();
		~MapGeneric();
};

class MapTriple : public MapGeneric
{
	private:
		int f( int n )
			{ return n*3; } 

	public:
		MapTriple();
		~MapTriple();
};

class MapSquare : public MapGeneric
{
	private:
		int f( int n )
			{ return n^2 }

	public:
		MapSquare();
		~MapSquare();
};

class MapAbsoluteValue : public MapGeneric
{
	private:
		int f ( int n ) = abs(n); // NEED TO PUT ALL THE INDIVIDUAL CASSES OF INT F INTO CPP FILE RATHER THAN IN HEADER.

};