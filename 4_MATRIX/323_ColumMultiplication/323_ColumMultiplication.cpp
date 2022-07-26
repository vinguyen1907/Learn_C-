#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m = 2, n = 3, multi;
    int a[m][n]=
	{
		{ -2, 1, -3 },
		{ 5, 6, -6 },
    };
    for ( int i = 0; i < m; i++ )
    {
        for ( int j = 0; j < n; j++ )
            cout<<a[i][j] <<" ";
        cout<<endl;
    }
    cout<<endl;

    for ( int j = 0; j < n; j++ )
    {
        multi = 1;
        for ( int i = 0; i < m; i++ )
            if ( a[i][j] > 0 )
            {
                multi *= a[i][j];
                //cout<<a[i][j] <<" ";
            }
        //cout<<endl;
        cout<<multi <<" ";
    }

	cout<<endl <<"Complete!!";
	return 0;
}
