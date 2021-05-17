#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int base;
    int height;

    // take the user input of the required data

    printf("enter the first angle of triangle = ",a);
    scanf("%d",&a);

    printf("enter the second angle of triangle = ",b);
    scanf("%d",&b);

   // find the third angle of a triangle

    printf("third angle of triangle = %d ",180-a-b );

    //take the base and height of triangle from user

    printf("\nenter the base of triangle = ",base);
    scanf("%d",&base);

    printf("enter the height of triangle = ",height);
    scanf("%d",&height);

    //calculate the area of a triangle


     printf("area of a triangle = %d ",base*height/2);


    return 0;

}