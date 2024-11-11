//To find the average of the ages.



#include <stdio.h>
int main(int argc, char *argv[])
{
    int sum,avg,i;
    sum = 0; 
    int ages [] = {10,20,12,13,15,17,19,40,26,25,30};
    int lengthOfArray = sizeof(ages)/sizeof(ages[0]);
    for (i=0; i <lengthOfArray; i++)
    {
        sum =sum + ages[i];
    }
    avg = sum / lengthOfArray;
    printf("The average of the ages is %d. \n ",avg);
    
    
    return 0;
}
