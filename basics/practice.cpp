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

int main()
{
    int t;
    cin >> t;
    if (isPalindrome(t) == 1)
        cout << "true";
    else
        cout << "false";
}
