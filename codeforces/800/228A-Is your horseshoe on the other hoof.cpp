#include <bits/stdc++.h>

using namespace std;

int main () {

    int n,temp,cnt=0;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        if (n != temp) {
            cnt++;
            temp = n;
        }
    }

    cout << 4-cnt << endl;

}