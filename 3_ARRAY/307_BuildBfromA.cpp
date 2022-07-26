 #include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int nb;
    int b[nb];
    int a[5] = { 1, 2, 3 ,4 ,5 };
    for ( int i = 0; i < 5; i++ )
        if ( a[i] % 2 == 1 )
        {
            b[nb] = a[i];
            nb++;
        }
    for ( int j = 0; j < nb; j++ )
        cout<<b[j];

	cout<<endl <<"Complete!!";
	return 0;
}
