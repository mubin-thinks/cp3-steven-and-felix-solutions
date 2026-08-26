#include <cstdio>

int main() {
        int t, c = 1; scanf("%d", &t);
        while (t--) {
                int x, y, z; scanf("%d%d%d", &x, &y, &z);
                if (x <= 20 && y <= 20 && z <= 20) printf("Case %d: good\n", c++);
                else printf("Case %d: bad\n", c++);
        }
        return 0;
}
