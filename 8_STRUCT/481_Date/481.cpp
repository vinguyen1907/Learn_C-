#include <iostream>
using namespace std;

struct Date
{
    int Day;
    int Month;
    int Year;
} p;

void Input( Date &f )
{
    cout<<"Day = ";
    cin>>f.Day;
    cout<<"Month = ";
    cin>>f.Month;
    cout<<"Year = ";
    cin>>f.Year;
}

void Output( Date f )
{
    cout<<f.Day <<"/" <<f.Month <<"/" <<f.Year;
}

int main()
{
    Input(p);
    Output(p);
	cout<<endl <<"Complete!!";
	return 0;
}
