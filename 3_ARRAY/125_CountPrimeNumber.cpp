#include <iostream>
#include <math.h>
using namespace std;
bool CheckPrimeNumber( int x)
{
    int count;
    if ( x < 2 )
        return false;
    else 
        for ( int i=2; i <= sqrt(x); ++i)
            if ( x % i == 0 )
                return false;
    return true;
}

int main()
{
    int count;
    int a[10] = {1, 2, 3, 4, 5 , 6 , 7, 8, 9, 10};
    for ( int i = 0; i < 10; i++ )
        if ( CheckPrimeNumber(a[i]) == true)
            {
                cout<<a[i] <<endl;
                count++;
            }
    cout<<"Number of Prime Number is: " <<count <<endl;
    cout<<"Complete!";
	return 0;
}

