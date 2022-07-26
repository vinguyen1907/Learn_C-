#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m = 4, n = 3, multi, sum = 0;
    int a[m][n]=
	{
		{ 2, 1, 3 },
		{ 5, 6, 6 },
        { 2, 3 ,1 },
        { 1, 2, 3 }
    };

    for ( int i = 0; i < m; i++ )
    {
        if ( (i == 0) || (i == m-1) )
            for ( int j = 0; j < n; j++ )
            {
                sum += a[i][j];
                cout<<a[i][j] <<" ";
            }
        else
            {
                cout<<a[i][0] <<" ";
                for ( int k = 1; k < n -1; k++ )
                    cout<<"  ";
                cout<<a[i][n-1];
                sum += a[i][0];
                sum += a[i][n-1];
            }
        cout<<endl;
    }
    cout<<sum;

	cout<<endl <<"Complete!!";
	return 0;
}
