#include <iostream>
using namespace std;
string chusothu1(int x)
{
    string result;
    switch (x/10)
    {
        case 1:      result="muoi ";  break;
        case 2:      result="hai muoi ";  break;
        case 3:      result="ba  muoi ";  break;
        case 4:      result="bon muoi ";  break;
        case 5:      result="nam muoi ";  break;
        case 6:      result="sau muoi ";  break;
        case 7:      result="bay muoi ";  break;
        case 8:      result="tam muoi ";  break;
        case 9:      result="chin muoi ";  break;
    }
    return result;
}

string chusothu2(int x)
{
    string result;
    switch (x%10)
    {
        case 1:      result="mot";  break;
        case 2:      result="hai";  break;
        case 3:      result="ba";  break;
        case 4:      result="bon";  break;
        case 5:      result="nam";  break;
        case 6:      result="sau";  break;
        case 7:      result="bay";  break;
        case 8:      result="tam";  break;
        case 9:      result="chin";  break;
    }
    return result;
}

int main()
{
    int n; 
    cout<<"Nhap so co 2 chu so ";
    cin>>n;
    cout<<chusothu1(n) <<chusothu2(n);

	return 0;
}
