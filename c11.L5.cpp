#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Nhap vao so nguyen: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("\nKhong ton tai.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("\nGiai thua cua %d = %llu", n, fact);
    }

    return 0;
}

