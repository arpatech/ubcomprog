/* $Id: comprog6c.c,v 1.1 2014/10/26 00:28:34 fjpfajardo Exp fjpfajardo $
 * COMPROG 1 - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14

 * 6. Write a program to compute electricity bill to be paid by a consumer as per 
 * following tariff:
 * up to 100 units              2.30 /unit
 * up to 400 units              2.70 / unit
 * >400 and <1000               4.50 / unit
 * > 1000 units                 6.00 / unit */

# include <stdio.h>
int main()
{
    int base;
    float price;
    printf("How many units were consumed? [E.g 400] : ");
    scanf("%d",&base);

        if (base>=1 && base<=100) {
                price=base*2.30;
                printf("Total Amount Due: = %1.f\n",price);
        }
        else if (base>=101 && base<=400) {
                price=base*2.70;
                printf("Total Amount Due: = %1.f\n",price);
        }
        else if (base>=401 && base<=1000) {
                price=base*4.50;
                printf("Total Amount Due: = %1.f\n",price);
        }
        else if (base>1000) {
                price=base*6.00;
                printf("Total Amount Due: = %1.f\n",price);
        }
        else
                printf("Your input did not matched or = 0.\n");
                return 0;
}
