#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    int n,b; cin >> n >> b;

    vector<int> v(n), pref(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    sort(v.begin(), v.end(), greater<int>());
    
    pref[0] = v[0];

    for (int i = 1; i < n; i++) pref[i] = pref[i-1]+v[i];

    for (int i = 0; i < n; i++){
        if (pref[i] >= b) {
            cout << i+1 << "\n";
            break;
        }
    }

}