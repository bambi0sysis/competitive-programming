#include <bits/stdc++.h>
using namespace std;

void Print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Print(n);
    }
}

// learned c++ stl
// still confused but will push through it and learn. hopefully
// slsdj