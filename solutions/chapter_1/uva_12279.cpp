#include <cstdio>

int main() {
        for (int n, c = 1, tmp, count = 0; scanf("%d", &n) && n; count = 0) {
                while (n--) {
                        scanf("%d", &tmp);
                        if (tmp) count++;
                        else count--;
                }
                printf("Case %d: %d\n", c++, count);
        }
        return 0;
}
