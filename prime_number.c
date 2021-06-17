#include<stdio.h>
  
int isPrimeNumber(int n) {
    // so nguyen n < 2 khong phai la so nguyen to
    if (n < 2) {
        return 0;
    }
    // check so nguyen to khi n >= 2
    int squareRoot = (int) sqrt(n);
    int i;
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 

int main() {
 int i;
    printf("Cac so nguyen to nho hon 100 la: \n");
    for (i = 0; i < 100; i++) {
        if (isPrimeNumber(i)) {
            printf("%d ", i);
        }
    }
}
