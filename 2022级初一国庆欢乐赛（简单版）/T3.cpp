#include <cstdio>

int total, sum, day, money = 1;
bool flag = false;

int main() {
    scanf("%d", &total);
    while (sum < total) {
        flag = false;
        for (int i = 1; i <= money; i++) {
            sum += money;
            day++;
            if (sum >= total) {
                flag = true;
                break;
            }
        }
        money++;
        if (flag) break;
    }
    printf("%d\n", day);
    return 0;
}
