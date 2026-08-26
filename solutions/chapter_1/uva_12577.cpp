#include <cstdio>
#include <cstring>

int main() {
        int c = 1;
        for (char s[10]; scanf("%s", s) && s[0] != '*'; ) {
                printf("Case %d: ", c++);
                if (strcmp(s, "Hajj") == 0) printf("Hajj-e-Akbar\n");
                else printf("Hajj-e-Asghar\n");
        }
        return 0;
}
