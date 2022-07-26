#include <iostream>
#include <math.h>
using namespace std;

bool Check_Prime_Number( int x )
{
    if ( x < 2 )
        return 0;
    else    
        for ( int i=2; i <= sqrt(x); i++ )
            if ( x % i == 0 )
                return 0;
    return 1;
}

int main()
{
    int count = 0, max;
    int a[5] = { 3, 4, 6, 7, 14 };
    //Find max prime number in array
    for ( int i = 0; i < 5; i++ )
        if ( Check_Prime_Number(a[i]) == 1 && a[i] > max )
            max = a[i];
    
    cout<<max;
     
	cout<<endl <<"Complete!!";
	return 0;
}
