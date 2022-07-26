#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int max = 0;
	int a[3][3]=
	{
		{ 1, 2, 3 },
		{ 4, 5 ,6 }
	};
	for ( int i = 0; i < 3; i++ )
		for ( int j = 0; j < 3; j++ )
			if ( a[i][j] > max )
				max = a[i][j];
	cout<<max;

	cout<<endl <<"Complete!!";
	return 0;
}
