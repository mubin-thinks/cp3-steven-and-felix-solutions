#include <cstdio>

int main() {
        int k;
        while (scanf("%d", &k) && k) {
                int a, b; scanf("%d%d", &a, &b);
                while (k--) {
                        int x, y; scanf("%d%d", &x, &y);
                        if (x == a || y == b) printf("divisa\n");
                        else if (x < a && y > b) printf("NO\n");
                        else if (x > a && y > a) printf("NE\n");
                        else if (x > a && y < b) printf("SE\n");
                        else if (x < a && y < b) printf("SO\n");
                }
        }
        return 0;
}
