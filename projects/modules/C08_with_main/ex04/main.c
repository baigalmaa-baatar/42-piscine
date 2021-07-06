#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
  struct s_stock_str *new_tab;
  //int ac;
  //char *av[3] = {"Lea", "Maya", "Nona"};

  //ac = 3;
  new_tab = ft_strs_to_tab(argc, argv);
  ft_show_tab(new_tab);
  return (0);
}
