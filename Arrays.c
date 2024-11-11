//Arrays


#include <stdio.h>
int main(int argc, char *argv[])
{
    int myNumbers [] = {1,2,50,26,12};
    printf("%d\n", myNumbers[3]);
    // Output will be 26.
    
    //CHAHNGE AN ARRAY ELEMENTS 
    
    myNumbers [0] = 100;
    printf ("%d\n",myNumbers[0]);
  //output will be 100 instead of 1
    
    
    // Looping through arrays !!
    int i;
    int myNumbersTwo [] = {20,30,50,200,100};
    for ( i = 0;i <5; i++)
    {
        printf("                %d\n",myNumbersTwo[i]);
    }
    
    int myNumbersThree[4] = {1000,20000,3000,4000};
    printf("            %d",myNumbersThree[3]);
    return 0;
}
