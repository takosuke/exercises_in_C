#include <stdio.h>

//function prototype
void sayHello();

//function implementation
void sayHello() {
	printf("Hello world\n");
}

//calling from main
int main() {
	void (*sayHelloPtr)() = sayHello;
	(*sayHelloPtr)();
	int number = 10;
	int *numptr = &number;
	printf("%d\n", *numptr);
	return 0;
}

