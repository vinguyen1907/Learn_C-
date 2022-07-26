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
    float max=0;
    for ( int i=0; i<=2; ++i)
        if ( a[i] > max )
            max=a[i];
    cout<<"Max la " <<max;
	return 0;
}
