#include <stdio.h>
#include <string.h>

struct tag{
	char lname[20];
	char fname[20];
	int age;
	float rate;
};

struct tag my_struct;
void show_name(struct tag *p){
	printf("%s\n", p->fname);
	printf("%s\n", p->lname);
	printf("%d\n", p->age);
}

int main(void)
{
	struct tag *st_ptr;
	st_ptr = &my_struct;
	strcpy(my_struct.lname, "Picapiedra");
	strcpy(my_struct.fname, "Pedro");
	my_struct.age = 39;
	show_name(st_ptr);
	return 0;
}
