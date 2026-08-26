#include <cstdio>
#include <cstring>

int string_diff(const char *a, const char *b) {
        int sum = 0;
        for (; *a && *b; a++, b++) if (*a != *b) sum++;
        return sum;
}

int main() {
        int t; scanf("%d", &t);
        while (t--) {
                char s[10]; scanf("%s", s);
                if (strlen(s) == 5) printf("3\n");
                else if (string_diff(s, "one") == 1) printf("1\n");
                else printf("2\n");
        }
        return 0;
}
