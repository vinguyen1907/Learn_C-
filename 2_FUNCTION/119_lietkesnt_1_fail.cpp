#include <iostream>
#include <math.h>
using namespace std;
bool ktra_snt(int x)
{
    bool result=false;
    int dem;
    if (x<2) 
        return false;
   
    else 
        {
        for (int i=2; i<=sqrt(x); ++i)
            if (x%i==0)    
                ++dem;
        if (dem==0)   
            return true;
        else return false;
        }
}


int main()
{   
    int n=50;
    for ( int i=1; i<=n; ++i )
        if ( ktra_snt(i) == true )
            cout<<i <<" ";
    // int n=4;
    // if ( ktra_snt(n) == true )
    //     cout<<n <<" la so nguyen to" <<endl;
    // else cout<<n <<" khong la so nguyen to" <<endl;
    //     cout<<"Complete!";
	return 0;
}
