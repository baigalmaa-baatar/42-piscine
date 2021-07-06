#include <stdio.h>

char **ft_split(char *str, char *charset);

int main() {
    char **strs = ft_split("In non-functional linguistics, a sentence is a textual unit consisting of one or more words that are grammatically linked. In functional linguistics, a sentence is a unit of written texts delimited by graphological features such as upper case letters and markers such as periods, question marks, and exclamation marks.", " .,;!?");

    while (*strs != 0) {
        printf("%s\n", *strs);
        strs++;
    }
}
