#include <stdio.h>

void printSpace(int n, char c) {
    for (int i = 0; i < n; i++) {
        printf("%c", c);
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printSpace(i, 'A');
        for (int j= 0; j < 5 - i; j++) {
            printf(" ");
        }
        printSpace(4 - i, ' ');
        printSpace(i, 'B');
        printf("\n");
    }

    return 0;
}
