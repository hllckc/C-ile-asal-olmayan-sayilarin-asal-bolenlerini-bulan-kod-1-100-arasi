#include <stdio.h>

int main() {
    int i, j, isPrime;

    for(i = 2; i <= 100; i++) {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 0) {
            printf("Asal olmayan sayi: %d, Asal bolenleri: ", i);
            for(j = 2; j <= i/2; j++) {
                if(i % j == 0) {
                    isPrime = 1;
                    for(int k = 2; k <= j/2; k++) {
                        if(j % k == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if(isPrime == 1) {
                        printf("%d ", j);
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}


