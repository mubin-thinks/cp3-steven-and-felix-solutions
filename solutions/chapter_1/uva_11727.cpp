#include <cstdio>
#include <algorithm>

int main() {
        int t, c = 1; scanf("%d", &t);
        while (t--) {
                int a[3]; scanf("%d%d%d", &a[0], &a[1], &a[2]);
                std::sort(a, a + 3);
                printf("Case %d: %d\n", c++, a[1]);
        }
        return 0;
}
