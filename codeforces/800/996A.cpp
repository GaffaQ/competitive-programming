#include <bits/stdc++.h>

using namespace std;

int main () {

    int uang[5] = {100,20,10,5,1};
    int cnt=0,n; cin >> n;

    for (int i = 0; i < 5; i++) {
        cnt += n / uang[i];
        n %= uang[i];
    }

    cout << cnt << endl;
}