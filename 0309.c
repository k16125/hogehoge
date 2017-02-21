#include <stdio.h>

int main(void)
{
  int no;

  printf("整数を入力してください。");
  scanf("%d", &no);\

  if (no == 0)
    puts("その数は０です。");
  else if (no > 0)
    puts ("その数は生です。");

  return 0;
}
