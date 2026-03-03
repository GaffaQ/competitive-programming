#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fr(i, n) for (int i = 0; i < (n); i++)
#define pb push_back
#define fi first
#define se second

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vl = vector<ll>;

const ll INF = 1e18;
const int MOD = 1e9+7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

//fpb
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

//kpk
ll lcm(ll a, ll b){
    return a / gcd(a,b) * b;
}

void solve(){
    int n,m; cin >> n >> m;
    vector<int> a(n),b(m);
    bool cek[1000001];
    memset(cek, false, sizeof(cek));

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort (all(a));
    sort (all(b));

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((a[i]-b[j]==0 || b[j]-a[i]==1) && !cek[j]) {
                cek[j] = true;
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}