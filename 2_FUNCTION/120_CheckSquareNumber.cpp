#include <iostream>
#include <math.h>
using namespace std;

bool Check(int x)
{
    if ( (int) sqrt(x) * (int) sqrt(x)==x )
        return true;
    else return false;
}

int main()
{
    int n=15;
    // cout<<sqrt(n) <<endl;
    // cout<<(int) sqrt(n) <<endl;
    if ( Check(n) ) 
        cout<<n <<" la so chinh phuong";
    else cout<<n <<" khong la so chinh phuong";


	return 0;
}
