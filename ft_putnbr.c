#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb) {
  int n2;

  char tab[10];
  char *str;
  char *str2;

  str = tab;
  str2 = tab;

  if (nb < 0) {
    write(1, "-", 1);
    nb *= -1;
  }
  if (nb == 0) {
    write(1, "0", 1);
    return;
  }

  while (nb != 0) {
    n2 = nb % 10;
    nb = nb / 10;
    *str = n2 + 48;
    str++;
  }
  while (str >= str2) {
    write(1, &*str, 1);
    str--;
  }
}
