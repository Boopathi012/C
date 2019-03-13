#include<stdio.h>
#include<string.h>
int main()
{
  int i,flag=0;
  char a[20];
  printf("enter the string");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
 if((a[i]=='0')||(a[i]=='1'))
 {
   flag++;
 }
}
if(flag!=0)
 printf("yes");
 
  }
