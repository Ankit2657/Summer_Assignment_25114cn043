#include <stdio.h>
int main() {
    int arr[] = {4, 2, 7, 4, 9, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Duplicate elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; 
            }
        }
    }
    return 0;
}
