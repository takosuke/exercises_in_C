#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	struct Person *joe = Person_create("Joe Pedro", 32, 64, 140);

	struct Person *frank = Person_create("Frank Zappi", 20, 72, 180);

	printf("Joe Pedro is at mem location %p\n", joe);
	Person_print(joe);

	printf("Frank Zappi is at mem location %p\n", frank);
	Person_print(frank);
	struct Person pepe = { "pepe", 21, 190, 55 };
	struct Person alfredo;
	alfredo.name = "alfredo";
	alfredo.age = 99;
	alfredo.height = 134;
	alfredo.weight = 90;
	joe->age += 20;
	printf("%s\n", pepe.name);
	return 0;
}

