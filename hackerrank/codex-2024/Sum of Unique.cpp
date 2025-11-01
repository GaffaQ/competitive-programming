#include <bits/stdc++.h>
using namespace std;

const int limit = 1300000;
bool primes[limit];
vector<int> daftar;

void loadPrime(){
    memset(primes, true, sizeof(primes));
    primes[0] = primes[1] = false;
    for (int i = 2; i*i <= limit; i++) {
        if (primes[i]){
            for (int j = i*i; j <= limit; j+=i) {
                primes[j] = false;
            }
        } 
    }

    for (int i = 0; i <= limit; i++) {
        if (primes[i]){
            daftar.push_back(i);
        }
    }
}


int main() {
    
    int t; cin >> t;
    loadPrime();

    //prefsum
    vector<int> prefsum;
    prefsum.push_back(0);
    for (int i = 1; i < (int)daftar.size()+1; i++) {
        prefsum.push_back(prefsum[i-1] + daftar[i-1]);
    }

    while (t--) {
        int l,r; cin >> l >> r;
        cout << prefsum[r] - prefsum[l-1] << endl;
    }


}
