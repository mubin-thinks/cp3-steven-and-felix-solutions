#include <cstdio>
#include <vector>
#include <algorithm>

struct date_t { int d, m, y; };

int compare(const date_t &x, const date_t &y) {
        if (x.d != y.d) return x.d < y.d;
        else if (x.m != y.m) return x.m < y.m;
        return x.y > y.y;
}

int main() {
        int n, d, m, y;
        std::vector<date_t> dates;
        scanf("%d", &n);
        while (n--) {
                scanf("%d %d %d\n", &d, &m, &y);
                dates.push_back({.d = d, .m = m, .y = y});
        }
        sort(dates.begin(), dates.end(), compare);
        for (const date_t &x : dates) printf("%2d/%2d/%4d\n", x.d, x.m, x.y);
        return 0;
}
