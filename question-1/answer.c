// Move all zeros to the end while preserving non-zero order.
#include <stdio.h>

int main(void) {
    int a[] = {0, 1, 0, 3, 12};
    int n = sizeof(a) / sizeof(a[0]);
    int pos = 0;

    for (int i = 0; i < n; i++)
        if (a[i] != 0)
            a[pos++] = a[i];

    while (pos < n)
        a[pos++] = 0;

    printf("Output: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
