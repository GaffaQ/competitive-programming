#include <bits/stdc++.h>
using namespace std;

#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
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
    int n; cin >> n;
    vi shop(n);
    fr(i,n) cin >> shop[i];
    sort(all(shop));
    int q; cin >> q;
    while(q--){
        int m; cin >> m;
        int l=0, r=n-1, high=-1;
        while (l <= r){
            int mid = (l+r)/2;
            if (shop[mid]==m) {
                high = mid;
                break;
            }
            if (m > shop[mid]) {
                high = mid;
                l = mid+1;
            }else{
                high = mid-1;
                r = mid-1;
            }
            // cout << "mid: " << mid << " " << " l r: " << l << " " << r;
        }
        if (high != -1) cout << high+1 << endl;
        else cout << 0 << endl;
    }
}

int main(){
    bismillah;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}