#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    for (int r = 0; r < t; r++) {
        int n, k;
        cin >> n >> k; 
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == str2 && (str1 == "01" || str1 == "10") && (k % 2 == 1)) {
            cout << "NO" << endl;
            continue;
        }
        
        int c = 0, res = 0, f = 0;
        for (auto i = 0; i < n; i++) {
            if (str1[i] != str2[i]) {
                c =c+ 1;
                res =res+ str1[i] - '0'; 
            } else {
                f++; 
            }
        }
        if (c == 2 && str1.size() == 2 && k % 2 == 0) {
            cout << "NO" << endl;
            continue;
        }
        if (c == res * 2 && res <= k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
