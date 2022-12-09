#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll x, y, z;
ll a, b, c;

int main() {
    scanf("%lld %lld %lld", &x, &y, &z);

    // A - B
    printf("%lld\n", min({x, y + z}));
    // B - C
    printf("%lld\n", min({y, x + z}));
    // A - C
    printf("%lld\n", min({z, x + y}));

    return 0;
}
