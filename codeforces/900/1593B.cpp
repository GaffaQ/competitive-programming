#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

string seq[] = {"00", "25", "75", "50"};

// 100
// 2050047

ll solve (string s, string seq) {

    ll ans = 0, ptr=s.length()-1;

    while (ptr > 0 && s[ptr] != seq[1]){
        ans++;
        ptr--;
    }

    ptr--;

    while (ptr >= 0 && s[ptr] != seq[0]) {
        ans++;
        ptr--;
    }

    return ans;

}

int main () {
    bismillah

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        ll ans = LLONG_MAX, len = s.length();
        for (auto x : seq) {
            ans = min(ans, solve(s, x));
        }

        cout << ans << endl;
    }
    
}

