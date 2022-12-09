#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, sum;

int main() {
    scanf("%lld", &n);

    for (int i = 1; ; i++) {
        sum += i;
        if (sum > n) break;
        printf("%lld\n", i);
    }

    return 0;
}
