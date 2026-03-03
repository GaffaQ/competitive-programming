#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {

    ll d;
    int n; cin >> n >> d;
    pair<ll,ll> v[n];

    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    
    sort(v, v+n);
    ll ans=0;
    for (int i = 0; i < n; i++) {
        ll low = min(d/v[i].first, v[i].second);
        d -= low*v[i].first;
        ans +=  low;
    }

    cout << ans << "\n";
}