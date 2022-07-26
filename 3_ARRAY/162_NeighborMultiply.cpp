#include <iostream>
#include <math.h>
using namespace std;


int main()
{	
	float a[5] = { 1, 2, 4, 2, 0.5 };
	for ( int i=1; i<5-1; i++)
		if ( a[i] == a[i-1] * a[i+1] )
			cout<<a[i-1] <<" x " <<a[i+1] <<" = " <<a[i] <<endl;
	

	cout<<endl <<"Complete!!";
	return 0;
}
