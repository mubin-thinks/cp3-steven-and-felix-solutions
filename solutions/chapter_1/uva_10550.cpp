#include <cstdio>

int main() {
        for (int a, b, c, d; scanf("%d%d%d%d", &a, &b, &c, &d) && (a || b || c || d); ) {
                printf(
                        "%d\n",
                        720 + (40 + a - b) * 9 + 360 + ((c < b ? c + 40 : c) - b) * 9 +
                        (40 + c - d) * 9
                );
        }
        return 0;
}
