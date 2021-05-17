#include<stdio.h>
main()
{
    int a,b,result;
    int ch;

    float i , j;
    char word [20];

    printf("1.Sum/n 2.remainder/n 3.product/n 4.printword");
    printf("enter option = ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("enter two integer = ");
            scanf("%d%d",&a,&b);
            result = a+b;
            printf("sum = %d",a+b,a,b,result);
            break; 

        case 2:
            printf("enter two integer = ");
            scanf("%d%d",&a,&b);
            result = a/b;
            printf("remainde = %d",a,b,result);
            break;


        case 3:
            printf("enter two float integer = ");
            scanf("%f%f",&i,&j);
            result = i*j;
            printf("product = %2f",i,j,result);
            break;
        

        case 4:
            printf("enter word = ");
            scanf("%s",&word);
            printf("word %s %s",word,word);
            break;



        default:

        printf("invalid option");           
    }
     
    return 0;

}