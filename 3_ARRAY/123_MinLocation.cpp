#include <iostream>
using namespace std;
int main()
{
    int min, save;
   int a[3]; //= { 1, 5 ,2};
    for ( int i=0; i<3; ++i )
    {
        cout<<"a[" <<i <<"]= ";
        cin>>a[i];
    }
    min = a[0];
    save = 0;
    for ( int i=0; i<3; ++i )
    {
        if ( a[i] < min )
        {
            min = a[i];
            save = i;
        }
    }
    cout<<"Min is " <<min <<endl;
    cout<<"Min Location is a[" <<save <<"]";
	return 0;
}
