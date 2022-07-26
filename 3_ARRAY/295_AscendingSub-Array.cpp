#include <iostream>
#include <math.h>
using namespace std;

bool CheckAscending ( int arr[], int nb)
{
    for ( int i = 0; i < nb; i++ )
        if ( arr[i] > arr[i+1] )
            return false;
    return true;
}
int main()
{
    int n = 5, nb;
    int b[nb];
    int a[n] = { 1, 2, 3 ,4 ,5 };
    for ( int i = 0; i < n; i++ )
    {
        for ( int length=i+2; length <= n; length++ )
        {
            nb=0;
            for ( int j = i; j < length; j++ )
                {
                    b[nb] = a[j];
                    nb++;
                }
            if ( CheckAscending(b, nb) )
                for ( int k = 0; k < nb; k++ )
                    cout<<b[k] <<" ";
            cout<<endl;
        } 
    }

	cout<<endl <<"Complete!!";
	return 0;
}
