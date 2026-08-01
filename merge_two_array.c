#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i = 0, j = 0, k = 0;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for(j = 0; j < n2; j++) scanf("%d", &b[j]);

    i = j = 0;
    while(i < n1 && j < n2)
        c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];

    while(i < n1) c[k++] = a[i++];
    while(j < n2) c[k++] = b[j++];

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}