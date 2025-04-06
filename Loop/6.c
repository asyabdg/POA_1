#include <stdio.h>
#include <ctype.h>

int main() {
    char n;
    scanf("%c", &n);

    if (islower(n)) {
        n = toupper(n);
    } else  {
        n = tolower(n);
    }

    printf("%c", n);
    return 0;
}
