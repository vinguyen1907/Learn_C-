#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Purpil_Information
{
    string name;
    string mssv;
    string date_of_birth;
};

struct Subject
{
    string name;
    int mark;
};

struct Information
{
    Purpil_Information pi;
    int Number_Of_Subjects;
    Subject s[10];
};

void Input(ifstream &input, Purpil_Information &sv, int &number, Subject (&sub)[10])
{
    getline(input, sv.name, ',');
    getline(input, sv.mssv, ',');
    getline(input, sv.date_of_birth);

    input >>number;
    for ( int i = 0; i < number; i++ )
    {
        getline(input, sub[i].name, '-');
        input >>sub[i].mark;
    }
}

void Output( Purpil_Information sv, int number, Subject sub[10])
{
    cout <<sv.name <<endl <<sv.mssv <<endl <<sv.date_of_birth <<endl;
    for ( int i = 0; i < number; i++ )
        cout <<sub[i].name <<" - " <<sub[i].mark;
    cout <<endl;
}

int main()
{
    Information infor[10];
    Purpil_Information sv;
    Subject sub[10];

    ifstream input;
    input.open("D:\\CODE\\INPUT\\13_FILE\\Doc_File_Sinh_Vien\\input.txt");
    
    int number;
    int k = 0;
    while ( !input.eof() )
    {
        Input(input, infor[k].pi, infor[k].Number_Of_Subjects, infor[k].s );
        k ++;
    }

    for ( int i = 0; i < k; i++ )
        Output(infor[i].pi, infor[i].Number_Of_Subjects, infor[i].s);

    
	cout<<endl <<"Complete!!";
	return 0;
}