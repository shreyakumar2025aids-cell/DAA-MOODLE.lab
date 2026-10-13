#include <stdio.h>

int findDuplicate(int a[], int n) {
    int slow = a[0];
    int fast = a[0];

    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);

    slow = a[0];

    while (slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }

    return slow;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", findDuplicate(a, n));

    return 0;
}
