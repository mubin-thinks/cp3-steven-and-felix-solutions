#include <cstdio>
#include <cstring>

int main() {
        int c = 1;
        for (char s[16]; scanf("%s", s) && s[0] != '#'; ) {
                if (strcmp(s, "HELLO") == 0) printf("Case %d: ENGLISH\n", c++);
                else if (strcmp(s, "HOLA") == 0) printf("Case %d: SPANISH\n", c++);
                else if (strcmp(s, "HALLO") == 0) printf("Case %d: GERMAN\n", c++);
                else if (strcmp(s, "BONJOUR") == 0) printf("Case %d: FRENCH\n", c++);
                else if (strcmp(s, "CIAO") == 0) printf("Case %d: ITALIAN\n", c++);
                else if (strcmp(s, "ZDRAVSTVUJTE") == 0)
                        printf("Case %d: RUSSIAN\n", c++);
                else printf("Case %d: UNKNOWN\n", c++);
        }
        return 0;
}
