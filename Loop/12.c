#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int counter = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        char c = 'A' + i - 1;

        for (int j = 0; j < 2 * i - 1; j++) {
            printf("%c", 'A' + counter++);
        }
        printf("\n");
    }
}
