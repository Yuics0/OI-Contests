#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n;
vector < ll > v;

void work() {
    ll last = v.back();
    v.insert(v.begin(), last);
    v.erase(v.end() - 1);
}

int main() {
    scanf("%lld", &n);
    for (ll i = 0, t; i < n; i++) {
        scanf("%lld", &t);
        v.push_back(t);
    }

    while (true) {
        work();

        printf("%llu ", v[0]);
        for (ll i = 1; i < n; i++) printf("%llu ", v[i]);
        printf("\n");

        if (v[n - 1] == n) break;
        else continue;
    }
    return 0;
}
