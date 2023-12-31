#include <stdio.h>
int iterativeBinarySearch(int arr[], int left, int right, int target) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) 
        {
            return mid;
        } 
        else if (arr[mid] < target) 
        {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = iterativeBinarySearch(arr, 0, n - 1, target);
    if (index != -1) 
    {
        printf("Element %d found at index %d.\n", target, index);
    } 
    else 
    {
        printf("Element %d not found.\n", target);
    }
    return 0;
}