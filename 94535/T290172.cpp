#include <bits/stdc++.h>

using namespace std;

int x, y;

int main() {
    scanf("%d %d", &x, &y);
    if (x > y) printf("NO\n");
    else if (x < y) printf("Yes\n");
    else if (x == y) printf("equal probability\n");
    return 0;
}
