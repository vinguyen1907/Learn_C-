#include <iostream>
using namespace std;
int main()
{
    float a[3];
    for ( int i=0; i<=2; ++i )
    {
        cout<<"Nhap a[" <<i <<"]= ";
        cin>>a[i];
    }
    int count=0;
    for ( int i=0; i<=2; ++i)
        if ( a[i] > 0 )
        {
            count ++;
            cout<<a[i];
            break;
        }
    cout<<count <<endl;
    if ( count == 0 )
        cout<<"-1";
	return 0;
}
