#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int a[5] = { 11, 21, 33, 44, 25 };
    int b[10] = {0};
    int j, digit, save;
    for ( int i = 0; i < 5; i++ )
        while ( a[i] != 0 )
        {
            digit = a[i] % 10;
            a[i] /= 10;
                b[digit] ++;
        }
    //Show number of times digit appears
    for ( int i = 0; i < 10; i++ )
        cout<<i <<" ";
    cout<<endl;
    for ( int i = 0; i < 10; i++ )
        cout<<b[i] << " ";

    //Find the digit appearing at least
    long min = 100;
    for ( int i=0; i < 10; i++ )
        if ( b[i] < min  &&  b[i] != 0 )
        {
            min = b[i];
            save = i;
        }
    cout<<endl <<save <<" appears at least" <<endl;
    cout<<save  <<" appears " <<min <<" times";

	cout<<endl <<"Complete!!";
	return 0;
}
