#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 020;
	float power = 2.345f;
	double super_power = 57673.2323;
	char initial = 'A';
	char first_name[] = "";
	char last_name[] = "Tonto";

	printf("You are %d miles from \n", distance);
	printf("You have %f levels of power. \n", power);
	printf("You have %f awesome super powers. \n", super_power);
	printf("My initial is not %c \n", initial);
	printf("My first name is %s. \n", first_name);
        printf("My last name is %s. \n", last_name);
	printf("My whole name is %s %c %s number %d", first_name, initial, last_name, distance);
	return 0;
}	
