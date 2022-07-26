#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a[5] = { 152, 555, 111, 222 ,353 };
    int digit, save;
    for ( int i=0; i < 5; i++ )
    {
        
        {   save = a[i];
            save /= 10;
            digit = save % 10;
        }
        if ( digit == 5 )
            cout<<a[i] <<endl;
    }
	cout<<endl <<"Complete!!";
	return 0;
}
