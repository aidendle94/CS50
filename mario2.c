#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int height = get_int("get height:");
    if(height==0)
    {
        printf("No Height");
    }
    else
    {
        printf("%d\n",height);
    }
    for(int line = 0;line<height;line++)
    {
        for(int spaces=height-line;spaces>1;spaces--)
        {
            printf(" ");
        }
            for(int shape = 0; shape < line; shape++)
        {
            printf("#");
        }
        printf("\n");
        }

    }