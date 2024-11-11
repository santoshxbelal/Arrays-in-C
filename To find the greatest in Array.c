//TO FIND THE GREATEST NUMBER 


#include <stdio.h>
int main(int argc, char *argv[])
{
    int length,i,greatest_num ;
    int myNums [] = {10,20,16,17,22,19,25,28};
    length = sizeof(myNums) / sizeof(myNums[0]);
    greatest_num = myNums[0];
    for (i=0;i<length ;i++)
    {
        if (greatest_num  < myNums[i])
        {
            greatest_num = myNums[i];
        }
        
    }
    printf ("The greatest num is %d.\n ",greatest _num);
    
    return 0;
}
