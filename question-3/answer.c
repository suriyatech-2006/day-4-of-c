// Intersection of two arrays without a frequency array or hash table.
// The arrays are sorted first, then two pointers find common elements.
#include <stdio.h>

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int i = 0, j = 0;

    sort(a, n);
    sort(b, m);

    printf("Intersection: ");
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            printf("%d ", a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }
    printf("\n");
    return 0;
}
