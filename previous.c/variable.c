#include<stdio.h>
int main()
{
    int Total_marks = 500;
    int obtained_marks;

    printf("enter obtained_marks:- ");
    scanf("%d",&obtained_marks);

    printf("percentage = %d",obtained_marks/Total_marks*100);
    return 0;
}