#include <stdio.h>

void func(int n) {
    int c = 0;
    c++;

    if (n == 1) {
        c++;
    } else {
        for (int i = 1; i <= n; i++) {
            c++;
            c++;
            c++;
            c++;
            c++;

            for (int j = 1; j <= n; j++) {
                break;
            }
        }

        c++;
    }

    printf("%d", c);
}

int main() {
    int n;
    scanf("%d", &n);

    func(n);

    return 0;
}
