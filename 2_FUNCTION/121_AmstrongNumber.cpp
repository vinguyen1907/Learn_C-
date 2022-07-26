#include <iostream>
#include <math.h>
using namespace std;
int CountDigit( int x )
{
    int count=0;
    while (x > 0)
    {
        x /= 10;
        ++count;
    }
    return count;
}

bool Amstrong( int x )
{
    int layso, sum = 0, save;
    int digit = CountDigit(x);
    save=x;
    while ( save>0 )
    {
        //layso = save % 10;
        sum += pow( save % 10, digit );
         save /= 10;
    }
    if ( sum == x )
        return true;
    else return false;
}

int main()
{
    // for ( int i=1; i<=1000000; ++i )
    //     if ( Amstrong(i)==true )
    //         cout<<i;
    // cout<<"sfjjf";
    int n=153 ;
    if ( Amstrong(n) == true )
        cout<<n <<" la so Amstrong." <<endl;
    else    cout<<n <<" khong la so Amstrong." <<endl;
    cout<<"Complete!";
	return 0;
}
