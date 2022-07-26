#include <iostream>
using namespace std;

struct Point_Expression
{
	int x;
	int y;
};

int main()
{
	Point_Expression a, b, c, g;
	a.x = 1;		a.y = 2;
	b.x = 3; 		b.y = 4;
	c.x = 5; 		c.y = 6;
	g.x = (a.x + b.x + c.x) / 3;
	g.y = (a.y + b.y + c.y) / 3;
	cout<<" Expression of G is \n";
	cout<<"x = " <<g.x <<endl;
	cout<<"y = " <<g.y;

	cout<<endl <<"Complete!!";
	return 0;
}
