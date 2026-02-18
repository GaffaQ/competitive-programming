#include <bits/stdc++.h>

using namespace std;

unordered_set<long long> v; // Use long long to avoid overflow
string s;
int n;

void ekspresi(int pos, long long current_sum, long long last_term) {
    if(pos == n) {
        v.insert(current_sum);
        return;
    }

    int digit = s[pos] - '0';

    // Option 1: Concatenate (Extend last term)
    long long new_last_term;
    if (last_term >= 0) {
        new_last_term = last_term * 10 + digit;
    } else {
        new_last_term = last_term * 10 - digit;
    }
    ekspresi(pos + 1, current_sum - last_term + new_last_term, new_last_term);

    // Option 2: Add '+'
    ekspresi(pos + 1, current_sum + digit, digit);

    // Option 3: Subtract '-'
    ekspresi(pos + 1, current_sum - digit, -digit);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> s)) return 0;
    n = s.length();
    
    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    long long first_digit = s[0] - '0';
    ekspresi(1, first_digit, first_digit);
    cout << v.size() << "\n";
}