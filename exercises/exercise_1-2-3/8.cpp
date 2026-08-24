#include <cstdio>

int main() {
        for (unsigned int i = 0; i < (1 << 20); i++) {
                printf("{ ");
                for (int j = 0; j < 20; j++) if (i & (1 << j)) printf("%d ", j);
                printf("}\n");
        }
        return 0;
}
