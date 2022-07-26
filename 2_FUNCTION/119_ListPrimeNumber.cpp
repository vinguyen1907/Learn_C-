#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrimeNumber( int x )
{
    bool result = false;
    int y = (int) sqrt(x);
    if ( x < 2 ) 
        return false;
    else 
    {
        for ( int i = 2; i <= y; i++ )
            if ( x % i == 0 )    
               return false;
    }
}


int main()
{   
    int n = 50;
    for ( int i = 1; i <= n; i++ )
        if ( CheckPrimeNumber(i) == 1 )
            cout<<i <<" ";
	return 0;
}