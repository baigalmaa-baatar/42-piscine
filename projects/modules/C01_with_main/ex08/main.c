#include <stdio.h>
#include <stdlib.h>

void ft_sort_int_tab(int *tab, int size);

int main() {
    int test[] = {5, 3, 1, 8, 2};
    int s = 5;

    ft_sort_int_tab(test, s);

    for (int i = 0; i < s; i++) {
        printf("%d\n", test[i]);
    }
    return 0;
}
