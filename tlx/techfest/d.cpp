#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int n,m,k,window,ans=0,range,center; cin >> n >> m >> k;
    int arr[m+1];
    for (int i = 1;i <= n;i++) cin >> arr[i];
    
    window = m/k;
    range = window/2;
    
    for (int i = window; i <= n; i+=window) {
        center = i/2;
        ans = max(ans, abs(arr[center]-arr[i]));
        // window += i;
    }

    cout << ans << endl;
}

