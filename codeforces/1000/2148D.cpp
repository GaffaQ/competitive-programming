#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,ans=0; cin >> n;
    vector<int> genap, ganjil;

    while (n--) {
        int a; cin >> a;
        for (int i = 0; i < a; i++) {
            int x; cin >> x;
            (x % 2 == 0) ? genap.push_back(x) : ganjil.push_back(x);
        }

        if (ganjil.size() == 0) {
            cout << ans << endl;
            continue;
        }

        sort(genap.begin(), genap.end());
        sort(ganjil.begin(), ganjil.end(), greater<int>());
        for (int b : genap) {
            ans += b;
        }

        for (int i = 0; i < ganjil.size(); i++) {
            if (i % 2 == 1) {
                ans += ganjil[i];
            }
        }

        cout << ans << endl;

    }

}