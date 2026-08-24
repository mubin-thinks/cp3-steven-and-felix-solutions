#include <cstdio>
#include <ctime>
#include <cstring>

int main() {
        const char *weekday_str[] = {
                "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday",
                "Saturday"
        };
        char date[100];
        fgets(date, sizeof(date), stdin);
        tm time_in;
        memset(&time_in, 0, sizeof(time_in));
        strptime(date, "%d %B %Y", &time_in);
        time_t t = mktime(&time_in);
        printf("%s\n", weekday_str[localtime(&t)->tm_wday]);
        return 0;
}
