#include <stdio.h>

int main(int argc, char *argv[])
{
    // Create two arrays we care about
    int ages[] = { 22, 39, 41, 66, 2};
    char *names[] = { 
       "Pep", "Johannito", "AlmondMan",
       "Funnypants", "PoopManMcGee"
    };

    // Safely get the size of ages
    int count = sizeof(ages)/sizeof(int);
    int i = 0;

    printf("// First way using indexing\n");
    for(i = 0; i < count; i++){
        printf("%s has been %d years alive\n", 
                names[i], ages[i]);
    }

    printf("$____$____$____$____|____$____$____$____$\n");

    // Set up pointers to the start of arrays
    int *cur_age = ages;
    char **cur_name = names;

    printf("// Second way using pointers\n");
    for(i = 0; i < count; i++){
        printf("%s will die in %d years.\n",
                *(cur_name+i), *(cur_age+i));
    }

    printf("$____$____$____$____|____$____$____$____$\n");

    printf("// Third way, pointers are just arrays\n");
    for(i = 0; i < count; i ++){
    
        printf("I heard %s once ate %d bananas in one mouthful\n",
                cur_name[i], cur_age[i]);
    }

    printf("$____$____$____$____|____$____$____$____$\n");

    printf("// Fourth way, using pointers in a silly complicated way\n");
    for(cur_name = names, cur_age = ages;
            (cur_age - ages) < count;
            cur_name++, cur_age++){
        printf("%s has %d teeth\n",
                *cur_name, *cur_age);
    }

    return 0;

}
