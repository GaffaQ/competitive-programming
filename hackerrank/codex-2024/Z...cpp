#include <bits/stdc++.h>

using namespace std;

bool prime[1300000];
vector<int> v;

void loadPrime(){
    for(int i = 2; i*i < 1300000; i++) {
        if (prime[i]) {
            for (int j = i*i; j <= 1300000; j+=i) {
                prime[j] = false;
            }
            v.push_back(i);
        }
    }
}

int main () {

    memset(prime, true, sizeof(prime));
    loadPrime();
    int t; cin >> t;
    while(t--){
        int l,r; cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; i++) {
            sum += v[i-1];
            // cout << v[i-1] << " ";
        }
        cout << sum << endl;
    }

}