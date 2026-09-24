#include <stdio.h>

int main()
{
    int cp, sp, profit, loss, percentage;

    printf("Enter cost price: ");
    scanf("%d", &cp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percentage = (profit * 100) / cp;

        printf("Profit = %d\n", profit);
        printf("Profit percentage = %d%%", percentage);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percentage = (loss * 100) / cp;

        printf("Loss = %d\n", loss);
        printf("Loss percentage = %d%%", percentage);
    }
    else
    {
        printf("No profit, no loss");
    }

    return 0;
}