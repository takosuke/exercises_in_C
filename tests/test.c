#include <stdio.h>
#define MAX_ROWS 512

void create(){
	int i = 0;
	for(i = 0; i < MAX_ROWS; i++){
		printf("lala: %d\n", i);
	}
}

int main() {
	create();
}

