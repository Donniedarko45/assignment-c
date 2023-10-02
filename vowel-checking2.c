//Check Character Is a Vowel or Not Using If-Else

#include<stdio.h>
int main()
{
  char a;
  printf("enter character ");
  scanf(" %c ", &a);
  if(a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
  {
    printf("entered character is vowel ");
  }
  else
  {
    printf("entered character is consonant");
  }
    printf(" %c ", a);
    return 0;
}