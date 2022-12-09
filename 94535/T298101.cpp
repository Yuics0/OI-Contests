#include <iostream>

using namespace std;

int n;
string s, t, k = "abcdefghijklmnopqrstuvwxyz";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> s >> t;
    n = t.length();

    for (int i = 0; i < n; i++) {
        if (t[i] < s[i]) {
            cout << k << endl;
            return 0;
        }
        else if (t[i] > s[i]) {
            int a = t[i] - 'a';
            int b = s[i] - 'a';

            char temp = k[a];
            k[a] = k[b];
            k[b] = temp;

            cout << k << endl;
            return 0;
        }
    }

    cout << k << endl;
    return 0;
}
