#include <stdio.h>
#include <stdlib.h>

/*
Write a program to read elements in an array and find the sum of array elements
Example input: 10, 20, 30, 40, 50
Output: 150
You must use a VLA for the size of your array

*/
int main()
{
    int nums = 0, suma = 0;

    printf("Enter the number of element you want to add: ");
    scanf("%d", &nums);

    int arr[nums];

    for(int i = 0; i<nums; i++){
        printf("Enter the %d element: ", i);
        scanf("%d",&arr[i]);
        suma += arr[i];
    }

    printf("\nThe sum of the array elements is: %d\n", suma);
    return 0;
}

