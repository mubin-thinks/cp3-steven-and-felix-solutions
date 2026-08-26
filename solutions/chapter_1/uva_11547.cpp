#include <cstdio>
#include <cmath>

int main() {
        int t; scanf("%d", &t);
        while (t--) {
                int n; scanf("%d", &n);
                printf("%d\n", (abs((((n * 567) / 9 + 7492) * 235) / 47 - 498) % 100)
                        / 10);
        }
        return 0;
}
