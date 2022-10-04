#include <iostream>
#include <cmath>

int sum, x;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    while (std::cin >> x) {
        if (x != 6) break;
        sum++;
        if (sum == 3) break;
    }

    if (sum == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    std::cout << pow(10, sum) << std::endl;     // 规律6 3
    return 0;
}
