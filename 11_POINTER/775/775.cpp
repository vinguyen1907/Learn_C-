#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int a;
    int *p; //COn trỏ chỉ mới được cấp phát địa chỉ chỉ chưa có vùng nhớ => không thể gán giá trị 
    a = 5;
    p = &a;
    a++;
    *p ++;  //toán tử ++ có độ ưu tiên cao hơn, vì thế nó tăng địa chỉ ở con trỏ b lên 1 ô nhớ rồi mới lấy giá trị *
    //(*p) ++;    //() có độ ưu tiên cao nhất => Lấy giá trị của con trỏ p rồi mới tăng ++
    //*p += 1;
    cout<<a << endl;
    cout<<*p;
	
	cout<<endl <<"Complete!!";
	return 0;
}