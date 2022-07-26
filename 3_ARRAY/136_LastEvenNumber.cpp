#include <iostream>
using namespace std;

int main()
{
    int save, count;
    int a[3] = { 2, 3, 6 };
    for ( int i=0; i < 3; ++ i )
        if ( a[i] % 2 == 0 )
            {
            save = a[i];
            count ++;
            }
    cout<<save;
    if ( count == 0 )
        cout<<"-1";
	cout<<endl <<"Complete!!";
	return 0;
}
