#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        int now=0;
        for (auto x : {'k','m','h','m','h'}) {
            
            cout << x;
            for (int i = 0; i < n; i++){
                if (now%2==0){
                    cout << 'a';
                }else{
                    cout << 'e';
                }
            }
            now++;

        }
        cout << endl;
    }
}

