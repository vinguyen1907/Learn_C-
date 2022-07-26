#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a[5] = { 2 ,1 ,5 ,3, 4};
    for ( int i = 0; i < 4; i++ )
        for (int j = i+1; j < 5; j++)
            if ( a[i] <= a[j] )
                cout<<"[" <<a[i] <<", " <<a[j] <<"]" <<endl;
	cout<<endl <<"Complete!!";
	return 0;
}