#include <stdio.h>

char **ft_split(char *str, char *charset);

int main() {
    // char **strs = ft_split("Rogue One: A Star Wars Story or simply Rogue One is a 2016 American epic space opera film directed by Gareth Edwards. The screenplay by Chris Weitz and Tony Gilroy is from a story by John Knoll and Gary Whitta. It was produced by Lucasfilm and distributed by Walt Disney Studios Motion Pictures. It is the first installment of the Star Wars anthology series and an immediate prequel to Star Wars: Episode IV A New Hope (1977).", " .,;!?");
    char **strs = ft_split("nana coucou stars", " .,;!?");

    while (*strs != 0) {
        printf("%s\n", *strs);
        strs++;
    }
}
