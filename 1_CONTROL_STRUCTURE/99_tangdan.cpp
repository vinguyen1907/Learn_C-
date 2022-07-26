#include <iostream>
using namespace std;
int main()
{
    int i,a=4,b=7,c=2;
    if (a>b)
       {
           i=a;
           a=b;
           b=i;
        }
    if (c>b)
        cout<<a <<b <<c;
    if (c<a)
        cout<<c <<a <<b;
    if ( (c>a) && (c<b) )
        cout<<a <<c <<b;
    
	return 0;
}
