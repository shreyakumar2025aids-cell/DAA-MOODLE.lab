
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n, m, i = 0, j = 0, count = 0;

    scanf("%d", &n);
    int g[n];

    for (i = 0; i < n; i++)
        scanf("%d", &g[i]);

    scanf("%d", &m);
    int s[m];

    for (i = 0; i < m; i++)
        scanf("%d", &s[i]);

    qsort(g, n, sizeof(int), cmp);
    qsort(s, m, sizeof(int), cmp);

    i = 0;
    j = 0;

    while (i < n && j < m) {
        if (s[j] >= g[i]) {
            count++;
            i++;
        }
        j++;
    }

    printf("%d", count);
    return 0;
}
