#include <stdio.h>
int main(void) //loops need initial, end condition, & an increment, in the for loop init k=0, end cond k<5, & increment is k++
{
    int sum=0;
    int k;

    k=0;
    while (k<5)
    //for (k=0;k<5;k++)
    {

        sum+=k; //use something different in "while" version, in while loops the sum has to be before the incrementer
        k++; //increment has to be last in a while loop
        printf("sum-%d\n",sum);
    }





    k=10;
    for(k=10;k>=0;k--)
    //while (k>0) {
        //k=k-1; //use something different in "for" version
        {
        printf ("%d\n", k);
    }

    printf("blastoff!");
}


