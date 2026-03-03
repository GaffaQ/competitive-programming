#include <bits/stdc++.h>
#define ll long long
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n";

using namespace std;

int main () {
    bismillah;
    int n;cin >> n;
    map<char, int> mp, md;
    string s, s2;
    cin >> s >> s2;
    
    int ans=0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') mp['K']++;
        if (s[i] == 'K') mp['B']++;
        if (s[i] == 'B') mp['G']++;

        md[s2[i]]++;
    }
    
    for (auto x : mp){
        // if (md[x.first] >= mp[x.first]) ans += mp[x.first]; 
        // else ans += md[x.first];

        ans += min(md[x.first], mp[x.first]);
    }

    cout << ans << endl;
}