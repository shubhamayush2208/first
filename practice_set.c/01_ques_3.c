#include<stdio.h>
#include<math.h>
int main()
{
    int celcius;
    
    // take the degree celcius value from user

    printf("enter the value of degree celcius = ",celcius);
    scanf("%d",&celcius);

    // convert the degree celcius into farenhite

    printf("result in farenhite = %f",celcius*1.8+32);
    return 0;

}