#include <stdio.h>

int main(int argc, char *argv[])
{
	//create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"AlanBique", "Franky",
		"Mariongo", "Joaquin", "Leo"
	};

	//safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	//first wai using indexing
	for(i = count - 1; i >= 0; i--) {
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	//setup the pointers to the start of the arrays
	int *cur_age = ages;
	char **cur_name = names;
	cur_age = (int*)names;

	//second wai, using the pointors
	for(i = count - 1; i >= 0; i--){
		printf("%s is %d years old because he loves pointors.\n", 
				*(cur_name+i), *(cur_age+i));
	}
	printf("--\n");

	//third wai using pointors, pointors are just arrais
	for(i = count -1; i >= 0; i--) {
		printf("%s is %d years old, and has pointors.\n", 
				cur_name[i], cur_age[i]);
	}

	printf("---\n");
	
	//fourth wai using pointors in a ery sily wai
	for(cur_name = names + (count -1), cur_age = ages + (count - 1);(cur_age - ages) > count;
			cur_name++, cur_age++)
	{
		printf("%s lived %d years and died of pointor overdoese\n",
				*cur_name, *cur_age);
	}

	return 0;


}	
