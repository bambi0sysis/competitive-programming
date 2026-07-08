#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int highest = arr[0];
    int lowest = arr[0];
    for(int i = 0; i < n; i++) {
        if(mp[arr[i]] > mp[highest])
            highest = arr[i];
            
        if (mp[arr[i]] < mp[lowest])
            lowest = arr[i];
    }
    
    cout << "highest frequency: " << highest << endl;
    cout << "lowest frequency: " << lowest;
    return 0;
}