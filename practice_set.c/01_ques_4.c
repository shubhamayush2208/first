#include<stdio.h>
#include<math.h>
int main()
{
    int principal_value;
    int rate_of_intrest;
    int time_duration;

    // take the user input of the required data

    printf("enter the principal_value = ",principal_value);
    scanf("%d",&principal_value);

    printf("enter the rate_of_intrest = ",rate_of_intrest);
    scanf("%d",&rate_of_intrest);

    printf("enter the time_duration = ",time_duration);
    scanf("%d",&time_duration);

    // calculate the simple intrest for the following data

    printf("simple intrest = %d ",principal_value*rate_of_intrest*time_duration/100 );

    return 0;

}