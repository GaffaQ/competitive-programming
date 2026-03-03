#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n';

using namespace std;

int main () {
    bismillah;

    int n; cin >> n;
    string s; cin >> s;
    map<char,int> v;
    for (int i = 0; i < s.length(); i++) {
        v[s[i]]++;
    }
    if(v.size() < 3) {cout << -1 << endl; return 0;}
    vector<pair<char, int>> mp(v.begin(), v.end()); 
    sort(mp.begin(), mp.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });
    int ans = mp[2].second*3;
    if (mp[0].second > mp[2].second) ans++;
    if (mp[1].second > mp[2].second) ans++;

    cout << ans << endl;
}