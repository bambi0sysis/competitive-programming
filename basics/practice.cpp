#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    int n = x;
    long revN = 0;
    while (n > 0)
    {
        int ld = n % 10;
        revN = (10 * revN) + ld;
        n /= 10;
    }
    if (x == revN)
        return true;
    return false;
}

int reverse(int x)
{
    int num = 0;
    while (x != 0)
    {
        int ld = x % 10;
        x /= 10;

        // Check for overflow BEFORE updating num
        if (num > INT_MAX / 10 || num < INT_MIN / 10)
        {
            return 0;
        }

        num = (num * 10) + ld;
    }
    return num;
}

int main()
{
    int x = 1534236469;
    cout << reverse(x);
}
