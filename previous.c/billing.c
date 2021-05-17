#include<stdio.h>
#include<conio.h>
void main()
{
  int total=0,n;
  char ch;
  do
  {
    printf("\n Enter number : ");
    scanf("%d",&n);
    total=total+n;
    printf("\n Do you want to continue....[Press Y/N] : ");
    fflush(stdin);
    scanf("%c",&ch);
  }while(ch=='y' || ch=='Y');
  printf("\n Total : %d ",total);
}


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//    int i,l=0;
//    char str[15];
//    printf("\n Enter a string : ");
//    gets(str);
//    for(i=0;str[i]!='\0';i++)
//    l++;
//    printf("\n The Length of the string is : %d",l);
// }


// #include<stdio.h>
// main()
// int a;
// char c ();
// printf("enter value");
// scanf("%d",&a);

// priintf("ascci value=%d",c);
// return0;

