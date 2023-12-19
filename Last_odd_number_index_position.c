#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lastOddIndex = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            lastOddIndex = i;
        }
    }

    if (lastOddIndex != -1) {
        printf("%d
",lastOddIndex);
    } else {
        printf("No odd numbers found in the array.
");
    }

    return 0;
}