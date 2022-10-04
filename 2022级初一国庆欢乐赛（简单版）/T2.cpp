#include <cstdio>

int n;

bool solve(int fn) {
    if ((fn % 4 == 0 && fn % 100 != 0) || fn % 400 == 0) return true;
    return false;
}

int main() {
    scanf("%d", &n);
    if (solve(n)) printf("Yes\n");
    else printf("No\n");
    return 0;
}
