//example of while loop:-
// #include<stdio.h>
// int main(){
//     int i;

//     printf("enter the value of i = ",i);
//     scanf("%d",&i);

//     while (i<30)
//     {
//       printf("%d\n",i);
//       i = i + 1;
//     }
//     return 0;
// }


//examole of do while loop:-
// #include<stdio.h>
// int main(){
//     int a,index = 0;

//     printf("enter the value of a = ",a);
//     scanf("%d",&a);


//     do
//     {
//     printf("%d\n",index+1);
//     index = index + 1;
   
//     } while (index<a);

//     return 0;
    
// }

//example for For loop:-

// #include<stdio.h>
// int main(){
//     int a;

//     printf("enter the value of a = ",a);
//     scanf("%d",&a);


//     for ( a = 2; a < 5; a++)
//     {
//        printf("%d\n",a); 
//     }
    
//     return 0;
    
// }

//example for break statement:-
// #include<stdio.h>
// int main(){
//     int a;

//     printf("enter the value of a = ",a);
//     scanf("%d",&a);


//     for ( a = 0; a <100; a++)
//     {
//        printf("%d\n",a); 

//        if (a==10){
//            break;
//        }
//     }
    
//     return 0;
    
// }


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}