/*
 * sample.cpp
 *
 *  Created on: Oct 18, 2013
 *      Author: Dad
 */

#include <unistd.h>

void slowfun( void )
{
	sleep( 0.001 );
}

void reallyslowfun( void )
{
	sleep( 0.1 );
}

int main( int argc, char** argv )
{
	for ( unsigned lnIndex = 0; lnIndex < 1000; lnIndex++ )
	{
		slowfun();
	}

	reallyslowfun();

	return 0;
}
