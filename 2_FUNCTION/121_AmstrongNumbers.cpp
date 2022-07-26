#include <iostream>
#include <math.h>
using namespace std;
int CountDigit( int x )
{
    int count=0;
    while (x > 0)
    {
        x /= 10;
        ++count;
    }
    return count;
}

bool Amstrong( int x )
{
    int sum=0, save;
    int digit=CountDigit(x);
    save=x;
    while ( save>0 )
    {
        sum += pow( save % 10 , digit );
        save/=10;
    }
    if ( sum == x )
        return true;
    else return false;
}

int main()
{   
    system("cls");
    for (int n = 1 ; n<1000; n++)
    {
    if ( Amstrong(n) == true )
        cout<< n <<" la so Amstrong."<< endl;
    else cout<< n <<" khong la so Amstrong." << endl;
    }
    cout<<"Complete!";
	return 0;
}
