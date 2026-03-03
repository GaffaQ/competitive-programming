#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,x;cin>>n>>x;

    pair<double,pair<int,int>> v[n];

    for (int i = 0; i < n; i++) cin >> v[i].second.first;
    for (int i = 0; i < n; i++) {
        cin >> v[i].second.second;
        v[i].first = (double)v[i].second.second / v[i].second.first;
    }

    sort(v, v+n);

    // for (int i = 0 ; i < n; i++) {
    //     cout << v[i].second.first << " " << v[i].second.second << "\n";
    // }

    double ans = 0;
    for (int i = n-1; i >= 0; i--) {
        if(x <= 0) break;

        int val = v[i].second.second, wg = v[i].second.first;
        if (x < wg) {
            ans += (double)x*val/wg;
        }else{
            ans += val;
        }
        // cout << x << " " << wg << " " <<ans << "\n";
        x -= wg;
    }

    cout << fixed << setprecision(5) << ans << "\n";

}