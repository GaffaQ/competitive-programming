#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int bef; cin >> bef;
        bool flag = true;
        for(int i = 1; i < n; i++){
            int temp; cin >> temp;
            if(abs(bef-temp) > 1){
                flag = false;
                bef = temp;
            }
            bef = temp;
        }

        flag ? cout << "YES"<<endl : cout << "NO" <<endl;

    }
}