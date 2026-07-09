#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxx = INT_MIN;
        int minn = INT_MAX;
        vector<int> ar(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> ar[i];
        }
        for (int i = 1; i < n; ++i)
        {
            minn = min(ar[i], ar[i - 1]);
            maxx = max(maxx, minn);
        }
        cout << maxx << endl;
    }
}
