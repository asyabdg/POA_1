#include <stdio.h>
#include <math.h>

int main() {
    for (int i=1; i<100000; i++) {
        int size = 0;
        int n = i;

        while (n!=0) {
            size++;
            n/=10;
        }

        int sum = 0;
        n = i;

        while (n!=0) {
            sum += pow(n % 10, size);
            n/=10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
}
