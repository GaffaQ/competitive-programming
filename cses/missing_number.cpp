#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    int n; cin >> n;
    vector<bool> v(n+1, true);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        v[x] = false;
    }

    for (int i = 1; i <= n; i++){
        if (v[i]) cout << i << endl;
    }
    
}