#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m;
    cin>>n>>m;
    int a[n+1], b[m+1];
    bool f[1000001];
    memset(f, false, sizeof(f));
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < m; i++){
        cin>>b[i];
    }
    
    sort(a, a+n);
    sort(b, b+m);
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if((b[j] - a[i] == 0 || b[j] - a[i] == 1) && !f[j]){
                f[j] = true;
                ans++;
                break;
            }
        }
    }
    
    cout<<ans;
}