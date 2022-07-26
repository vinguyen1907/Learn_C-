#include <iostream>
#include <algorithm>
using namespace std;

void Exchange ( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    cout<<"Nhap a,b= ";
	cin>>a >>b;
    Exchange(&a, &b);
    cout<<"a= " <<a <<endl <<"b= " <<b;

	cout<<endl <<"Complete!!";
	return 0;
}
