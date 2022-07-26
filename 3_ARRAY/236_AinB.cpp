#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int na = 3, nb = 10, save, count, j, k;
    int a[na] = { 1, 2, 3 };
    int b[nb] = { 1, 2, 3, 55, 1, 3, 1, 2, 3, 3 };
    bool result;
    for ( int i = 0; i < nb; i++ )
        if ( b[i] == a[0] )
        {   
            j = i;
            for ( j, k = 0; k < na; j++, k++ )
            {
                result = true;
                if ( a[k] != b[j] )
                {
                    result = false;
                    break;
                }
            }
            if (result == true)
                count++;
        }
    cout<<count;
	cout<<endl <<"Complete!!";
	return 0;
}