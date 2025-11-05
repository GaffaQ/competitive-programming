#include <bits/stdc++.h>

using namespace std;


int main () {

    int n; cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    int startI = 0, startJ = 0, maks = 0, sum = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            // dikiri
            bool flag = true;
            if (j == 0 && (arr[i][j] + arr[i][j+1] % 2 == 0)) {
                sum += arr[i][j+1];
            }else {
                flag = false;
            }

            //dikanan
            bool flug = true;
            if (j == 1 && i+1 < n && (arr[i][j] + arr[i+1][0] % 2 == 0)) {
                sum += arr[i+1][0];
            }else{
                flug = false;
            }

            
                if (sum > maks) {
                    maks = sum;
                    sum = 0;
                }
                


            
        }
    }

    cout << "Bilangan maksimal adalah: " << maks << endl;
    cout << "Jika dimulai dari titik: " << startI << "," << startJ << endl;

}

