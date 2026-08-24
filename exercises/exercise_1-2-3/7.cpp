#include <cstdio>
#include <algorithm>
#include <numeric>
#include <vector>

int main() {
        std::vector<int> a(10); std::iota(a.begin(), a.end(), 0);
        do {
                for (int x : a) printf("%c ", x + 'A');
                putchar('\n');
        } while (std::next_permutation(a.begin(), a.end()));
        return 0;
}
