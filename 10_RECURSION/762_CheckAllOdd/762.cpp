#include <iostream>
#include <math.h>
using namespace std;

bool Check_All_Odd_Digit( int n )
{
    if ( n == 0 ) 
        return true;
    bool temp = Check_All_Odd_Digit(n/10);
    if ( n % 2 == 0 )   
        temp = false;
    return temp;
}

int main()
{
    int n = 113115;
	cout<<Check_All_Odd_Digit(n);

	cout<<endl <<"Complete!!";
	return 0;
}
