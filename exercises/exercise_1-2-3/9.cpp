#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

int main() {
        std::string s; std::cin >> s; int x, y; scanf("%d %d", &x, &y);
        long long int in_base_10 = 0; for (int i = 0; i < s.size(); i++)
                in_base_10 = (isdigit(s[i]) ? s[i] - '0' :
                        (s[i] >= 'a' ? s[i] - 'a' + 10 : s[i] - 'A' + 10)) +
                        in_base_10 * x;
        s = "";
        for (int r; in_base_10; ) {
                r = in_base_10 % y, in_base_10 /= y;
                s.push_back(r < 10 ? r + '0' : r - 10 + 'A');
        }
        std::reverse(s.begin(), s.end());
        printf("%s\n", s.c_str());
        return 0;
}
