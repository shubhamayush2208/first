//header file//

#include<stdio.h>

int main()
{
   float bs,da,ta,tax = 0,ts;

    // user input for Basic salary//

    printf("Enter basic salary:- ");
    scanf("%f",&bs);

    // classification of total salary //
    // salary is grater than 10000 //
    if(bs > 10000)
    {
        da = 0.5*bs;
        ta = 0.02*bs;
        tax = 0.01*bs;
    }

    // salary is less than 10000 //

    else
    {
        da = 0.2*bs;
        ta = 0.01*bs;
        tax = 0;
    }

    // formula to calculate total salary //

     ts = da+ta+bs-tax;

    //  output of salary //

    printf("total salary = %2f",ts);

    return 0;
}    