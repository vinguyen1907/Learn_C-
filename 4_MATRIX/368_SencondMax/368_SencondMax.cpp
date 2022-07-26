#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m = 3, n =3;
    int a[3][3] =
    {
        { 1 ,2 ,3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };
    int max = 0, sec;
    for ( int i = 0; i < m; i++ )
        for ( int j = 0; j < n; j++ )
            if ( a[i][j] > max )
            {
                sec = max;
                max = a[i][j];
            }
    cout<<sec;
	cout<<endl <<"Complete!!";
	return 0;
}
