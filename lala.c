#include<stdio.h>

int input(int *n)
{
  printf("enter the number of elements of the string:");
  scanf("%d", n); 
}
char inputstr(char s[])
{
  printf("enter the string:");
    {
  scanf("%s",s);
      }
}


void print(char s[])
{
  for(int i=0;s[i]!='\0';i++)
    {
      printf("%c\n",s[i]);
    }
}
void main()
{
  int n;
  input(&n);
  char s1[20],s2[20];
  inputstr(s1);
  inputstr(s2);
  print(s1);
}
