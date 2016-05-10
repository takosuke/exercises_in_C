#include <stdio.h>

int main(int argc, char *argv[])
{
	char full_name[] = {
		'M','a','r','i','t','o'
	};
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Marito";

	//WARNING: On some systemos you mayo have to change the 
	//%ld in this code to %u since it will use unsigned ints
	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("The first area is %d, the second is %d.\n", areas[10], areas[1]);
	printf("The size of a char is %ld.\n", sizeof(char));
	printf("The number of chars is %ld\n", sizeof(name) / sizeof(char));
	printf("The size of full name: %ld\n", sizeof(full_name));
	printf("The number of chars in full name: %ld\n", sizeof(full_name)&sizeof(char));
	printf("name=\" %s\" and full_name=\"%s\"\n",name, full_name);

	return 0;

}
