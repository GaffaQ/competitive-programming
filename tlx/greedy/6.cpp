#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,d; cin >> n;

    pair<int, int> v[n];

    for(int i = 0; i < n; i++) {
        cin >> v[i].second;
        cin >> d;
        v[i].first = v[i].second + d;
    }

    sort(v, v+n);

    int ans=0, last=0;
    for (int i = 0; i < n; i++) {
        if (v[i].second >= last) {
            ans++;
            last = v[i].first;
        }
    }

    cout << ans << "\n";

}