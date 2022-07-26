#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int a[7] = { 12, 43, 12, 34, 43, 12 ,5 };
    int count = 0;
    for ( int i = 0; i < 7; i++ )
    {
        count = 0;
        for ( int j = 0; j < 7; j++ )
            if ( a[j] == a[i] )
                count ++;
       
        if ( count == 1 )
            cout<<a[i] <<" ";
    }
        
 
	cout<<endl <<"Complete!!";
	return 0;
}