#include <iostream>
#include <math.h>
using namespace std;
float canbac(int x,float n)
{   
    int result;
    result=pow(x,1/n);
    return result;
}

int main()
{
    int x,n;
    cout<<"Can bac n cua x" <<endl;
    cout<<"Nhap x,n: ";
    cin>>x>>n;
    cout<<canbac(x,n);

	return 0;
}
