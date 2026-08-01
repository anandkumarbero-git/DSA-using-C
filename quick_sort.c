#include <stdio.h>

void quick(int a[], int l, int h) {
    if (l >= h) return;
    int i = l, j = h, p = a[(l + h) / 2], t;
    while (i <= j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            t = a[i]; a[i] = a[j]; a[j] = t;
            i++; j--;
        }
    }
    quick(a, l, j);
    quick(a, i, h);
}

int main() {
    int a[20], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    quick(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}