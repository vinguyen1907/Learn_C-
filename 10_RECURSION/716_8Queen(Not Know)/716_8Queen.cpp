#include <iostream>
#include <math.h>
using namespace std;

int a[20];
bool Check(int x, int y )
{

}
void Try(int i, int n )
{
	for ( int j = 0; j < n; j++ )
		if ( Check(i,j) )
		{
			a[i] = j;
			if ( i == n ) 
				output(n);
			Try(i+1, n);
		}
		
}

int main()
{

	cout<<endl <<"Complete!!";
	return 0;
}
