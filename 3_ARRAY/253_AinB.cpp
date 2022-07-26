#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int j, k, count = 0;
    bool result;
    int a[3] = { 1, 2, 3 };
    int b[5] = { 5, 1, 2, 3, 4 };
    for ( int i = 0; i < 5; i++ )
        if ( b[i] == a[0] )
        {
            result = true;
            for ( j = i, k = 0; k < 3; j++, k++ )
                if ( a[k] != b[j] )
                    result = false;
           
            if ( result == true )
                count ++;
        }
    if (count > 0)
        cout<<1;
    else cout<<"0";     

	cout<<endl <<"Complete!!";
	return 0;
}
