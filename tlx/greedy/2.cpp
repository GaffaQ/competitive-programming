#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    int n;cin >> n;
    vector<ll> a(n),b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i]*b[n-i-1];
    }

    cout << ans << "\n";
}