#include <stdio.h>
#include <cs50.h>
int main(void)

{
    // define variable
    int height = get_int("get height:");
    int width = get_int("get width:");
    // output the variables
    if(height == 0 && width==0)
    { printf("Empty.\n");}
    //Begin Printing shape
    //print the #
       for(int a=0;a < height;a++ )
       {
           for(int b=0; b< width;b++)
           {
           printf("o");
           }
            printf("\n");
       }
}