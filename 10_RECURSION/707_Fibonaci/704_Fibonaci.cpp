#include <iostream>
#include <math.h>
using namespace std;

int Fibo( int n )
{
    if ( n == 0 ) 
        return 0;
    if ( n == 1 ) 
        return 1;
    return Fibo(n-1) + Fibo(n-2);
}

int main()
{
    cout<<"The 3rd Fibonaci Number is: " << " " << Fibo(3);
    
	cout<<endl <<"Complete!!";
	return 0;
}
