#include <iostream>
#include <vector>

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* abs */

class MapGeneric
{
	protected:
		virtual int f( int n );

	public:
		std::vector<int> map( std::vector<int> vec );

		MapGeneric();
		~MapGeneric();
};

class MapTriple : public MapGeneric
{
	private:
		int f( int n );

	public:
		MapTriple();
		~MapTriple();
};

class MapSquare : public MapGeneric
{
	private:
		int f( int n );

	public:
		MapSquare();
		~MapSquare();
};

class MapAbsoluteValue : public MapGeneric
{
	private:
		int f ( int n );

	public:
		MapAbsoluteValue();
		~MapAbsoluteValue();

};
