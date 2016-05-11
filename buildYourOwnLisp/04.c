#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


int main(int argc, char** argv) {

    /* Print version and exit information */
    puts("Lipsy version 0.0.0.0.0.1");
    puts("Press Ctrl+C to exit");

    while (1) {

        char* input = readline("lips> ");
        add_history(input);
        printf("No fuck off you %s\n", input );
        free(input);

    }

    return 0;
}

