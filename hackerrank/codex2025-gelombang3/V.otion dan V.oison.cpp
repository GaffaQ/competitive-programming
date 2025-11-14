#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main () {

    int t; cin >> t;
    while(t--){

        int a,b,k, ans=0;
        cin >> a >> b >> k;

        while (a > k && b > k) {
            if (a / k > 0) {
                if (a/k >= b){
                    
                } 
                ans += a/k;
                b -= ans;
                a /= k;
            }

            if (b/k > 0) {

            }
        }
    }

}