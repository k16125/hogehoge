#include<stdio.h>
#include<stdlib.h>

char *makememo(){
  char *p;
  if((p = (char *)malloc(10000*sizeof(char)))== NULL){
    printf("out of memory\n");
    exit(EXIT_FAILURE);
  }
  return p;
}

int main (void){
  //  int *i;aaa
  char *c;
  printf("%d\n",*c);
  c = makememo();  
  //scanf("%s",c+10000);
  while(scanf("%s",c)!=EOF){}
  printf("%s   \n",c+10000);
  return 0;
}
