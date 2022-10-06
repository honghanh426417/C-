#include<stdio.h>

int main() {
  int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Nếu n chia hết cho i thì i chính là ước của n
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
