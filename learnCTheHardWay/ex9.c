#include <stdio.h>

int main(int argc, char *argv[])
{
	int numbers[4] = {'a', 'b', 'c'};
	char name[4] = {1,2,3,4};

	//fiorst, print them out raaaw
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]
	      );
	printf("name each: %c %c %c %c \n",
			name[0], name[1],
			name[2], name[3]
	      );
	printf("name: %s\n", name);

	//setup the numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//setup the name
	name[0] = 'M';
	name[1] = 'C';
	name[2] = 'D';
	name[3] = 'A';

	//then print them out initialized
	
	printf("numbers: %d %d %d %d\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]
	      );

	printf("name each: %c %c %c %c \n",
			name[0], name[1],
			name[2], name[3]
	      );
	//print the name as a stroing
	printf("name: %s\n", name);

	//another wai to use name
	char *another = "Mario";

	printf("another wai: %s\n", another);

	printf("another each:  %c %c %c %c\n", 
			another[0], another[1],
			another[2], another[3]
	      );
	return 0;
}
