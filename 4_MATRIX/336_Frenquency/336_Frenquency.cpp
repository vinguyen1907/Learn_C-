#include <iostream>
#include <math.h>
using namespace std;

int b[100];

int Count ( int x)
{
    int digit;
    x = abs(x);
    while ( x != 0 )
    {
        digit = x % 10;
        for ( int i = 0; i <= 9; i++ )
            if ( i == digit )
                b[i] ++;
        x /= 10;
    }
}

int main()
{
    int m = 2, n = 3, multi, x;
    int a[m][n]=
	{
		{ 12, 51, -53 },
		{ 5, 61, -62 },
    };
    
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            Count(  a[i][j] );
    cout<<"See Frequency of digit: ";
    cin>>x;
    cout<<"Digit " <<x <<" appears " <<b[x] <<" times";

	cout<<endl <<"Complete!!";
	return 0;
}



