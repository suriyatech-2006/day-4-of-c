// Maximum sum of a contiguous subarray using Kadane's algorithm.
#include <stdio.h>

int main(void) {
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int current = a[0], maximum = a[0];

    for (int i = 1; i < n; i++) {
        current = (current + a[i] > a[i]) ? current + a[i] : a[i];
        if (current > maximum)
            maximum = current;
    }

    printf("Maximum subarray sum: %d\n", maximum);
    return 0;
}
