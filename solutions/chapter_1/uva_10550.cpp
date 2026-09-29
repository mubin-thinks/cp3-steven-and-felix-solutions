#include <cstdio>

void add_diff(int *ans, int x, int y) {
        *ans += ((x > y) ? x - y : (x + 40) - y) * 9;
}

int main() {
        for (
                int a, b, c, d, ans;
                scanf("%d%d%d%d", &a, &b, &c, &d) && (a || b || c || d);
        ) {
                ans = 360 * 3;
                add_diff(&ans, a, b);
                add_diff(&ans, c, b);
                add_diff(&ans, c, d);
                printf("%d\n", ans);
        }
        return 0;
}
