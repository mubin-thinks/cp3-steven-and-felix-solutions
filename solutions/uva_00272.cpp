#include <cstdio>

int main() {
        bool in_pair = false;
        for (int c; (c = getchar()) != EOF; ) {
                if (c != '"') {
                        putchar(c);
                        continue;
                }
                if (!in_pair) printf("``");
                else printf("''");
                in_pair = !in_pair;
        }
        return 0;
}
