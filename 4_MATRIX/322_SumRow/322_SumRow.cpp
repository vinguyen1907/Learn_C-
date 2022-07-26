#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m = 2, n = 3, sum;
    int a[m][n]=
	{
		{ 2, 1, 3 },
		{ 5, 6 ,6 },
	};
    for ( int i = 0; i < m; i ++ )
    {
        sum = 0;
        for ( int j = 0; j < n; j++ )
        {
            sum += a[i][j];
            cout<<a[i][j] <<" ";
        }
        cout<<"Sum = " <<sum <<endl;
    }

	cout<<endl <<"Complete!!";
	return 0;
}
