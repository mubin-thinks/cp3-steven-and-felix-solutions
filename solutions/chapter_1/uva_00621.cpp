// this solution is not verified by the UVA judge due to
// issues in submitting the solution.

#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

void solve() {
        string s;
        cin >> s;
        if (s == "1" || s == "4" || s == "78") printf("+\n");
        else if (s[s.size() - 2] == '3' && s[s.size() - 1] == '5') printf("-\n");
        else if (s[0] == '9' && s[s.size() - 1] == '4') printf("*\n");
        else printf("?\n");
}

int main() {
        int t;
        scanf("%d", &t);
        while (t--) solve();
        return 0;
}
