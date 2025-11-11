#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; int K;
    if(!(cin >> N >> K)) return 0;

    if (N == 1) {
        cout << (K == 1 ? "YES" : "NO") << endl;
        return 0;
    }

    int n = N;
    int omega = 0;
    for (int p = 2; p*p <= n; ++p) {
        while (n % p == 0) {
            ++omega;
            n /= p;
        }
    }
    if (n > 1) ++omega;

    if (K <= omega + 1) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
