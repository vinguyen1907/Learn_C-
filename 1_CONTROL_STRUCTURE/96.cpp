#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x=0;
    if (x>=5)
        cout<<"2." <<x <<"^2 + 5." <<x <<" + 9 = " <<(2*pow(x,2)+5*x+9);
    if (x<5) 
        cout<<"-2." <<x <<"^2 + 4." <<x <<" - 9 = " <<(-2*pow(x,2)+4*x-9);

	return 0;
}
