#include <stdio.h>
int iterativeLinearSearch(int arr[], int n, int target) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            return i;
        }
    }
    return -1;
}
int main() 
{
    int arr[] = {3, 9, 4, 6, 7, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int index = iterativeLinearSearch(arr, n, target);
    if (index != -1) 
    {
        printf("Element %d found at index %d.\n", target, index);
    } else 
    {
        printf("Element %d not found.\n", target);
    }

    return 0;
}