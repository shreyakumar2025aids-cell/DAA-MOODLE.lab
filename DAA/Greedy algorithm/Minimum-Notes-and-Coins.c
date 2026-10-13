
#include <stdio.h>

int main() {
    int V;
    scanf("%d", &V);

    int coins[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int i = 0; i < 9; i++) {
        count += V / coins[i];
        V = V % coins[i];
    }

    printf("%d", count);
    return 0;
}
