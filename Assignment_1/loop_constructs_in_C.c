#include <stdio.h>
int main(void) {
    int i, count ;
    printf("\n\nIteration using for loop...");  //for loop
    for(i=1;i<=5;i++)
    {
        printf("\nItertaion using for with i = %d...",i);
    }
    printf("\nafter exiting loop i = %d...",i);
    printf("\n\nEnd of the for loop program");

    printf("\nIteration using do-while loop"); //do-while loop
    i=1;
    do
    {
       printf("\nIteration using do-while loop i = %d...",i); 
       i++; 
    } while(i<=5);
    printf("\nafter exiting loop i = %d...",i);
    printf("\n\nEnd of the do-while loop program");


}
