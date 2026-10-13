
#include <stdio.h>

int main() {
    int num, c = 1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        c += 2;

        if (num % i == 0) {
            c++;
        }
    }

    printf("%d", c);

    return 0;
}
