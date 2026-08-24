#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

int main() {
        std::string s; getline(std::cin, s);
        for (std::stringstream stream(s); getline(stream, s, ' '); ) {
                if (s.size() == 3 && isalpha(s[0]) && isdigit(s[1]) && isdigit(s[2]))
                        printf("*** ");
                else printf("%s ", s.c_str());
        }
        printf("\n");
        return 0;
}
