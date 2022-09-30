#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


//! Challenge VLA 2


struct myArray
{
    int len;
    int array[];
};

int main()  {
	struct myArray *m = NULL;
	int arraySize = 0;

	printf("Enter the size of the flexible array\n");
	scanf("%d", &arraySize);

	size_t size = sizeof(struct myArray);
	m = malloc(size + (sizeof(int) * arraySize));

	/*
	m->len = arraySize;
	m->array[0] = 55;
	m->array[1] = 199;
	*/
	int array2[arraySize];

	for (int i = 0; i<arraySize; i++){
        printf("Enter element %d: ",i);
        scanf("%d", &array2[i]);
        m->array[i] = array2[i];
	}
    printf("array is: ");

	for (int i = 0; i<arraySize; i++){
        printf("%d ", m->array[i]);
	}
	//printf("array is: %d:%d\n", m->array[0], m->array[1]);
	return 0;
}
