#include <cstdio>
#include <cstring>

int main() {
        int t, amount = 0, d; scanf("%d", &t);
        while (t--) {
                char s[10]; scanf("%s", s);
                if (strcmp(s, "donate") == 0) {
                        scanf("%d", &d);
                        amount += d;
                } else printf("%d\n", amount);
        }
        return 0;
}
