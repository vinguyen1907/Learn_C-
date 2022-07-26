//Cách cũ
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i=1;i<=100;++i)
//         if ((i%2==1) && (i!=5) && (i!=7) && (i!=93))
//             cout<<i <<" ";
// 	return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    for (int i=1;i<=100;i+=2)
        {if ( (i==5) || (i==7) || (i==93) )
            continue;
        else 
            cout<<i <<" ";}
	return 0;
}