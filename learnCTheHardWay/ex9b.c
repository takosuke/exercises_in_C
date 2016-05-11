#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {1,2,3,4};
    char name[4] =  {'a', 'b', 'c', 'd'};
    int *cur_num = numbers;
    char *cur_name = name;

    //fiorst, print them out raaaw
    printf("numbers: %d %d %d %d\n",
            *numbers, *(numbers + 1), 
            *(cur_num + 2), cur_num[3]
          );
    printf("name each: %c %c %c %c \n",
            *cur_name, cur_name[1], 
            *(name + 2), *(name + 3)
          );
    printf("name: %s\n", name);

    //setup the numbers
    *cur_num = 8;
    *(numbers + 1) = 9;
    cur_num[2] = 10;
    *(cur_num + 3) = 11;

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
