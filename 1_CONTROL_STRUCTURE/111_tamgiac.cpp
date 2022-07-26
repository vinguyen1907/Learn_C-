#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for (int dong=1;dong<=4;dong++)
    {
        for (int cach=3;cach>=0;cach--)
            cout<<" ";
        for (int sao=1;sao<=7;sao++)
            cout<<"*";
        cout<<endl;
    }
	return 0;
}
