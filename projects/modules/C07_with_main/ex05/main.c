#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(int argc, char **argv) {
    if (2 < argc) {
        char **strs = ft_split(argv[1], argv[2]);
        char **current = strs;

        while (*current != 0) {
            printf("%s\n", *current);
            free(*current);
            current++;
        }

        free(strs);
    }
}
