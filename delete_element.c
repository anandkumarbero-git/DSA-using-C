#include <stdio.h>

int main() {
    int a[100], n, i, item, pos = -1;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &item);

    for(i = 0; i < n; i++)
        if(a[i] == item) {
            pos = i;
            break;
        }

    if(pos != -1) {
        for(i = pos; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}