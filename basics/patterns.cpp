#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout << N - j + 1 << " ";
        }
        cout << endl;
    }
}
void pattern7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int N)
{
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i;
        if (i > N)
            stars = 2 * N - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int N)
{
    int start = 1;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int N)
{
    int spaces = 2 * (N - 1);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        spaces -= 2;
    }
}
void pattern13(int N)
{
    int num = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void pattern14(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int N)
{
    for (int i = 0; i < N; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (char ch = ('A' + N - 1) - i; ch <= ('A' + N - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern19(int N)
{
    int iniS = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= N - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }

    iniS = 2 * N - 2;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}
void pattern20(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2 * n - 2) - i;
            int right = (2 * n - 2) - j;
            int minDist = min(min(top, bottom), min(left, right));
            cout << (n - minDist) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    pattern22(n);
    return 0;
}