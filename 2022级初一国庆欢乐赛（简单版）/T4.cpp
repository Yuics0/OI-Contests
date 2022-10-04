#include <iostream>

using namespace std;
int n, g, p, a, b, sum = 0, temp = 0, flag = 0;

void getInput() {
    cin >> n >> g >> p;
}

void programOut() {
    cout << sum + n;
}

void solve() {
    a = n;
    b = n;
    while (a >= g || b >= p) {
        if (a % g == 0) {
            sum += a / g;
            a = 0;
        } else {
            sum += a / g;
            a = a % g;
        }

        if (b % p == 0) {
            sum += b / p;
            b = 0;
        } else {
            sum += b / p;
            b = b % p;
        }

        if (flag == 0) {
            temp = sum;
        }
        
        if (flag == 1) {
            temp = sum - temp;
        }

        a += temp;
        b += temp;
        temp = sum;
        flag = 1;
    }
}

int main() {
    getInput();
    solve();
    programOut();
    return 0;
}
