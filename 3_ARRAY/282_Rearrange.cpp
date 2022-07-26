#include <iostream>
#include <math.h>
using namespace std;

bool Devide3( int x )
{
    if ( x % 3 == 0 )
        return true;
    return false;
}

int main()
{
    int a[5] = { 1, 3 ,5 ,2, 6 };
    int tg;
    for ( int i = 0; i < 5; i++ )
        for ( int j = i+1; j < 5; j++ )
            if ( Devide3(a[j]) )
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
    for ( int i = 0; i < 5; i++ )
        cout<<a[i] <<" ";
	cout<<endl <<"Complete!!";
	return 0;
}
