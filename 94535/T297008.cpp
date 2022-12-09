#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll num, sum, square, cube;
ll a, b, c;
char fa, fb, fc;

int main() {
    fa = getchar(), fb = getchar(), fc = getchar();
    a = fa - '0', b = fb - '0', c = fc - '0';

    sum = a + b + c;
    square = sum * sum;
    cube = sum * sum * sum;

    printf("%lld\n%lld\n%lld\n", sum, square, cube);
    return 0;
}
