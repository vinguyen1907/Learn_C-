#include <iostream>
using namespace std;

struct Line
{
    int a;
    int b;
    int c;
};

void Input( Line &Line_Ex )
{
    cout<<"a = ";
    cin>>Line_Ex.a;
    cout<<"b = ";
    cin>>Line_Ex.b;
    cout<<"c = ";
    cin>>Line_Ex.c;
}

void Output( Line Line_Ex )
{
     cout<<"Equation of Line is " <<Line_Ex.a <<"x + " <<Line_Ex.b <<"y + " <<Line_Ex.c <<" = 0";
}

int main()
{
    Line Line_Real;
    cout<<"Equation of Line has the form ax + by + c = 0" <<endl;
    Input(Line_Real);
    Output(Line_Real);

	cout<<endl <<"Complete!!";
	return 0;
}
