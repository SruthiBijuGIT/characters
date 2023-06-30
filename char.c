#include<stdio.h>
int main()
{
 char ch;
 printf("\nEnter Any Character :");
 scanf("%c",&ch);
 if(ch>='0' && ch<='9')
 {
  printf("\n Entered character is  a Digit");
 }
 else if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
 {
  printf("\n Entered character is  an Alphabet");
 }
 else
 {
  printf("\n Entered character is a Special Character");
 }
 return 0;
}
