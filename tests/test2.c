#include <stdio.h>

int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;

int main(void)
{
	int i;
	ptr = &my_array[0];

	printf("-_-\n");
	for (i = 0; i < sizeof(my_array)/sizeof(int); i++)
	{
		printf("my_array[%d] = %d\n", i, my_array[i]);
		printf("ptr + %d = %d\n", i, *(++ptr));
		printf("value of pointer is %p\n", &ptr);
	}
	return 0;
}
