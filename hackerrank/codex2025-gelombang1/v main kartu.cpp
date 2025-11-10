#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

ll fak(int n){
    ll sum = 1;
    for (ll i = 2; i <= n; i++) {
        sum *= i ;
    }
    return sum;
}

int main () {
    ll a,b;
    cin >> a >> b;
    cout << (fak(a)/(fak(a-b)*fak(b)) % 1000000007);
}