#include <cstdio>
#include <cstdlib>
#include <cctype>

int main() {
        char num[100];
        int num_size = 0, c, ans = 0;
        while ((c = getchar()) != EOF) {
                if (isdigit(c)) num[num_size++] = c;
                else if (isspace(c)) {
                        num[num_size] = '\0';
                        num_size = 0;
                        ans += atoi(num);
                        if (c == '\n') {
                                printf("%d\n", ans);
                                ans = 0;
                        }
                }
        }
        return 0;
}
