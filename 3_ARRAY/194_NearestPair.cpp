#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[5] = { 1, 2, 4, 6, 3};
    int min = 100000;
    //Find min distance
    for ( int i = 0; i < 4; i++ )
        for ( int j = i+1; j < 5; j++ )
            if ( abs(a[i] - a[j]) < min )
                min = abs(a[i] - a[j]);
    //Find pair of number
    for ( int i = 0; i < 4; i++ )
        for ( int j = i+1; j < 5; j++ )
            if ( abs(a[i] - a[j]) == min )
                cout<<"[" <<a[i] <<", " <<a[j] <<"]";
	cout<<endl <<"Complete!!";
	return 0;
}
