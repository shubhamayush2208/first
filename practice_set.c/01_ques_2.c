#include<stdio.h>
#include<math.h>
int main()
{
    float pie = 3.14;
    int r;
    int h; 

    printf("enter the radius = ",r);
    scanf("%d",&r),

    // calculate area of circle

    printf("area of circle = %f", pie*r*r);

    // calculate volume of cylinder

    printf("\nenter the height = ",h);
    scanf("%d",&h),

    printf("volume of cylinder = %f",pie*r*r*h);


    return 0;

}