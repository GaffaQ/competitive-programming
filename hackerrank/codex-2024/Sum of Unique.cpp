#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIMIT = 1300000; 
    vector<bool> isPrime(LIMIT + 1, true);
    vector<int> primes;
    vector<long long> pref;

    // sieve
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= LIMIT && (int)primes.size() < 100000; i++) {
        if (isPrime[i]) primes.push_back(i);
    }

    // prefix sum
    pref.resize(primes.size() + 1, 0);
    for (int i = 1; i <= (int)primes.size(); i++) {
        pref[i] = pref[i - 1] + primes[i - 1];
    }

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}