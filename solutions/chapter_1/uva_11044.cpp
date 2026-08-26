#include <cstdio>
#include <cmath>

int main() {
        int t; scanf("%d", &t);
        while (t--) {
                int n, m; scanf("%d%d", &n, &m); n -= 2; m -= 2;
                printf("%d\n", (int)ceil((double)n / 3.0) * (int)ceil((double)m / 3.0));
        }
        return 0;
}
