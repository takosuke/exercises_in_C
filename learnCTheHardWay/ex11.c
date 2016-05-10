#include <stdio.h>

int main(int argc, char *argv[])
{
	//go thru each string in argv
	int i = 0;
	while(i < argc){
		printf("arg %d: %s \n", i, argv[i]);
		i++;
	}

	//letsss amke our own array of strings
	char *states[argc];
 	int num_states = 40;
	i = 0; //watch this
	while (i < argc && i < num_states){
		states[i] = argv[i];
		printf("state %d: %s\n", i, states[i]);
		i++;
	}
	argv[1] = "mierda";
	printf("%s\n", states[1]);
	return 0;
}
