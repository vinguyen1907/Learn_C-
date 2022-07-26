#include <iostream>
#include <math.h>
using namespace std;

bool CheckSquareNumber(int x)
{
    if ( x = (int)sqrt(x) * (int)sqrt(x) )
        return true;
    return false;
}

int main()
{   
    int a[5] = { 1, 2 ,3, 4, 5 };
    for ( int i=0; i <5; i++)
        if ( CheckSquareNumber( a[i] ) )
            {
                cout<<a[i];
                break;
            }

	cout<<endl <<"Complete!!";
	return 0;
}
