#include <iostream>
using namespace std;
int main()
{
    int date,month,year;
    cout<<"Date, month, year: ";
    cin>>date>>month>>year;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (date==31)
            cout<<"The next day is 1/" <<month+1 <<"/" <<year;
        else 
            cout<<"The next day is " <<date+1 <<"/" <<month <<"/" <<year;
    break;

    case 12:
        if (date==31)
            cout<<"The next day is 1/" <<1 <<"/" <<year+1;
        else 
            cout<<"The next day is " <<date+1 <<"/" <<month <<"/" <<year;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
        if (date==30)
          cout<<"The next day is 1/" <<month+1 <<"/" <<year;
        else
          cout<<"The next day is " <<date+1 <<"/" <<month <<"/" <<year;
    break;
    
    case 2:
        if ( (year%4==0) && (date==29) )
            cout<<"The next day is 1/3/" <<year;
        else 
        if ( (year%4!=0) && (date==28) )
            cout<<"The next day is 1/3/" <<year;   
        else    
            cout<<"The next day is " <<date+1 <<"/" <<month <<"/" <<year;

    }
	return 0;
}
