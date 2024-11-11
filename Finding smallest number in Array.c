//TO FIND THE SMALLEST NUMBER 


#include <stdio.h>
int main(int argc, char *argv[])
{
    int length,i,smallest_num ;
    int myNums [] = {10,20,16,17,22,19,25,28};
    length = sizeof(myNums) / sizeof(myNums[0]);
    smallest_num = myNums[0];
    for (i=0;i<length ;i++)
    {
        if (smallest_num  > myNums[i])
        {
            smallest_num = myNums[i];
        }
        
    }
    printf ("The smallest num is %d.\n ",smallest_num);
    
    return 0;
}
