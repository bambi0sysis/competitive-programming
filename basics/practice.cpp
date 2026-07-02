#include <bits/stdc++.h>
using namespace std;

void DoSomething(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
        cin >> arr[i];
}

void PrintOutput(int arr[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    DoSomething(arr, n);
    PrintOutput(arr, n);
    return 0;
}