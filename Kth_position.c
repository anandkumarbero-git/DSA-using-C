#include <stdio.h>

int main() {
    int a[100], n, i, k, item;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d%d", &k, &item);

    for(i = n; i >= k; i--)
        a[i] = a[i - 1];

    a[k - 1] = item;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}