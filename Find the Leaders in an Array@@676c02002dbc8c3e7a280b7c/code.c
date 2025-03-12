#include <stdio.h>

int main() {
    int n, arr[100], i, max;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[n - 1]; 
    printf("%d ", max);

    for (i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            printf("%d ", max);
        }
    }

    return 0;
}

