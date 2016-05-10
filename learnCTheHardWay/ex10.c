#include <stdio.h>

int main(int argc, char *argv[])
{
	int i ;

	//go thru each string in argv
	//why am I skipping argv[0]??
	for (i = argc -1  ; i >= 0; i--) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	//lets make our own array of strings
	char *states[] = {
		 "Oregon",argv[2],  
		"Guasinton", "Texas", "Canada", "Wenceslao the great is the greatest mutant soldier in huimanity and he likes to tooch ur boobies every day and every night"
	};
	int num_states = 6;

	for(i = 0; i < num_states; i++ ){
		if(states[i] == "Texas")
		{
			printf("THE TEXAS BREAK!\n");
			break;
		}
		printf("state %d: %s\n", i, states[i]);
	}
	printf("size: %ld\n", sizeof(states));
	return 0;
}
