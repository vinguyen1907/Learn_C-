#include <iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Moth: ";
    cin>>month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout<<"Month " <<month <<" have 31 days";
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    cout<<"Month " <<month <<" have 30 days";
    break;
    case 2:
    cout<<"Month " <<month <<" have 29 or 28 days";
    }
	return 0;
}
