#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main() {
    int test[] = {1, 2, 3, 4, 5};
    int s = 5;

    ft_rev_int_tab(test, s);

    for (int i = 0; i < s; i++) {
        printf("%d ", test[i]);
    }

    return 0;
}
