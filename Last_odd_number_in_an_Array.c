#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lastOddNumber = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            lastOddNumber = arr[i];
        }
    }
    if (lastOddNumber != 0) {
        printf("%d
", lastOddNumber);
    } else {
        printf("No odd numbers found in the array.
");
    }

    return 0;
}