#include <stdio.h>
#include <cs50.h>
int main(void)
{

int minutes= get_int("Minutes spent in shower: ");
printf("You spent %d minutes in the shower.\n", minutes);
int bottles=minutes * 12;
printf("Bottles used: %d\n", bottles);


}