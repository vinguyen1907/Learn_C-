#include <iostream>
#include <math.h>
using namespace std;

bool CheckDigit ( int x )
{
    int digit;
    while ( x != 0 )
    {
        digit = x % 10;
        x /= 10;
        if ( digit % 2 == 0 )
            return false;
    }
    return true;
}

int main()
{
    int a[5] = { 11, 12, 13 , 14, 15 };
    for ( int i = 0; i < 5; i++ )
        if ( CheckDigit( a[i] ) )
            cout<<a[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
