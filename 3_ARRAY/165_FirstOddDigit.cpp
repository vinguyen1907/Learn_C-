#include <iostream>
#include <math.h>
using namespace std;

int LastDigit (int x)
{
    int save;
    while ( x > 0 )
    {
        save = x % 10;
        x /= 10;
    }
    return save;
}

int main()
{   
    int count=0;
    int a[5] = { 22, 43, 15, 19, 7};
    for ( int i=0; i < 5; i++ )
        if ( LastDigit( a[i] ) % 2 == 1 )
        {
            cout<<a[i];
            count++;
            break;
        }
    if ( count=0 )  
        cout<<0;
	cout<<endl <<"Complete!!";
	return 0;
}
