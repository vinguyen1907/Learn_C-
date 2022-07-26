#include <iostream>
using namespace std;

struct POINT 
{
    int x, y;
};

void Input(POINT Pt[], int &n)
{
    cout << "Nhap hoanh do: ";
    cin >> Pt[n].x;
    cout << "Nhap tung do: ";
    cin >> Pt[n].y;
}

void Output(POINT Pt)
{
    cout << "(" << Pt.x << "," <<Pt.y << ")" <<"   ";
}

int main()
{
    int n;
    cout <<"So phan tu cua mang: ";
    cin >>n;
    POINT a[n];
    for ( int i = 0; i < n; i++ )
        Input(a, i);

    int max = 0;
    POINT save;
    for ( int i = 0; i < n; i++ )
        if ( a[i].y > max ) 
        {
            max = a[i].y;
            save = a[i];
        }
    Output(save);

	cout<<endl <<"Complete!!";
	return 0;
}