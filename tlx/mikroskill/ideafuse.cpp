#include <bits/stdc++.h>
#define bismillah ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define endl '\n'

using namespace std;

int main () {
    bismillah
    
    string s, target="ideafuse"; getline(cin, s);
    int posisi = s.find(target);
    if (posisi >= 0) cout << posisi + 1 << endl;
    else cout << "-1" <<endl;

}