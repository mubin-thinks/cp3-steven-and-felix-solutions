#include <cstdio>
#include <set>

int main() {
        int n;
        scanf("%d", &n);
        std::set<int> st;
        for (int i = 0, x; i < n; i++) {
                scanf("%d", &x);
                st.insert(x);
        }
        for (const int x : st) printf("%d ", x);
        printf("\n");
        return 0;
}
