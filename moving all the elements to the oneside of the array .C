#include <stdio.h>
void moveElementsToOneSide(int *arr, int size)
{
int j = 0;
for (int i = 0; i < size; i++) {
if (arr[i] != 0)
{
int temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
j++; 
}
}
}
int main() 
{
int arr[] = {0,0,0,13,1,2,0,6,0,7,0};
int n = sizeof(arr)/sizeof(arr[0]);
moveElementsToOneSide(arr, n);
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
