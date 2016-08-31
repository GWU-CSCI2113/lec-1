#include <stdio.h>

void isSeven (int number)
{
    if (number == 7)
    {
        printf("Yes, %d is seven!\n", number);
        return;
    }
    else
        printf("Nope, not seven.\n");
}
int main(void)
{
    int i;
    for(i=0; i < 12; i++)
    {
        isSeven(i);
    }
    isSeven(2*(3+1)-1);
    return 0;
}
