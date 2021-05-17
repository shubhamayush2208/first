#include<stdio.h>
#include<math.h>
int main()
{
    int maths;
    int science;
    int social_science;
    int hindi;
    int english;
    int Total_marks;
    int percentage;
    int total;

    // take the user input of the required data

    printf("enter the marks of maths = ",maths);
    scanf("%d",&maths);

    printf("enter the marks of science = ",science);
    scanf("%d",&science);
    
    printf("enter the marks of social_science = ",social_science);
    scanf("%d",&social_science);

    printf("enter the marks of hindi = ",hindi);
    scanf("%d",&hindi);

    printf("enter the marks of english = ",english);
    scanf("%d",&english);

   // calculate the total marks
    Total_marks = maths+science+social_science+hindi+english;

    printf("Total marks = %d ", Total_marks);

    //calculate the average 

    printf("\nAverage marks = %d ",Total_marks/5);


    //calculate the percentage

    printf("\nenter the totaal marks = ",total);
    scanf("%d",&total);

   percentage = (Total_marks/total)*100;

    printf("\npercentage = %d ",percentage);

    return 0;

}