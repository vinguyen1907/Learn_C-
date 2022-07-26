#include <iostream>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 1;
    int digit = n % 10;
    if (digit % 2 == 0)
        return solve(n / 10);
    return 0;
}

int main()
{
    int n = 220;
    cout << solve(n);
    return 0;
}