#include <cstdio>
#include <algorithm>
#include <vector>

int main() {
        int n, v, x; scanf("%d %d", &n, &v);
        std::vector<int> a; while (n--) {
                scanf("%d", &x);
                a.push_back(x);
        }
        printf("%s\n", std::binary_search(a.begin(), a.end(), v) ? "true" : "false");
        return 0;
}
