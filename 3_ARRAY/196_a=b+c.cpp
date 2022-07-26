#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a[5] = { 1, 2, 3 ,4, 5};
    for ( int i = 0; i < 5; i++)
        for ( int j = 0; j < 5; j++)
            for ( int k = 0; k < 5; k++)
                if ( a[i] == a[j] + a[k] )
                    cout<<"(" <<a[i] <<", " <<a[j] <<", " <<a[k] <<")" <<endl;
	cout<<endl <<"Complete!!";
	return 0;
}
