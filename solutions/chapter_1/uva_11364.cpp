#include <cstdio>
#include <cmath>
#include <climits>
#include <algorithm>

int main() {
        int t; scanf("%d", &t);
        while (t--) {
                int n, mn = 1000, mx = -1000; scanf("%d", &n);
                for (int x; n--;) {
                        scanf("%d", &x);
                        mn = std::min(mn, x); mx = std::max(mx, x);
                }
                printf("%d\n", (mx - mn) * 2);
        }
        return 0;
}
