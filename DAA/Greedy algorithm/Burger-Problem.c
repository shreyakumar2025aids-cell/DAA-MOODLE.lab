
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int calories[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &calories[i]);
    }

    qsort(calories, n, sizeof(int), compare);

    long long total = 0;
    long long power = 1;  // 3^0

    for (int i = 0; i < n; i++) {
        total += (long long)calories[i] * power;
        power *= 3;
    }

    printf("%lld", total);
    return 0;
}
