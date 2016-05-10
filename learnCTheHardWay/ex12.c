#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 1){
		printf("You only have one argument thus you suck balls \n");
	} else if(argc > 1 || argc < 4) {
		printf("Here's the rgumnts:\n");
		for (i = 0; i < argc; i++){
			printf("Arg %d: %s\n", i, argv[i]);
		}
		printf("\n");
	} else { 
		printf("Thats too many arguies sucka\n");
	}
	
	return 0;

}
