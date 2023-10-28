#include <stdio.h>
void linearSearch(int arr[], int n, int key) {
    int found = 0;
    printf("Indices where %d is found: ", key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1; // Key found
            printf("%d ", i);
        }
    }
    if (!found) {
        printf("Key not found");
    }
    printf("\n");
}
int main() {
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    linearSearch(arr, n, key);
    return 0;
}