#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, m;

int main() {
    scanf("%lld %lld", &n, &m);

    vector<long long> a(n);
    unordered_set<ll> b;

    for (ll i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    for (ll i = 0, x; i < m; i++) {
        scanf("%lld", &x);
        b.insert(x);
    }

    for (ll i = 0; i < n; i++) {
        // 用桶删除数组 a 中的数
        if (b.count(a[i])) {
            a[i] = -1;
        }
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] != -1) {   // 找非连续 -1 区间
            cnt++;
            while (i < n && a[i] != -1) {
                i++;
            }
        }
    }

    printf("%lld\n", cnt);
    return 0;
}