/* $Id: comprog1.c,v 1.3 2014/10/12 19:22:56 fjpfajardo Exp $
 * COMPROG 1 - Maam Liza Maderazo
 * 1. Write a program that takes as input the purchase price of an item (P), 
 * its expected number of years of service (Y) and its expected salvage value (S). 
 * Then outputs the yearly depreciation for the item (D). 
 * Use the formula: D=(P-S)/Y.
 * */
# include <stdio.h>
int main()
{
    int year;
    float num1,num2,vardep;
    printf("Enter expected number of years. Ex. If 2 years, enter: 2 : ");
    scanf("%d",&year);
    printf("Enter the price value. Ex. 250.00 : ");
    scanf("%f",&num1);
    printf("Enter the salvage value. Ex. 50.00 : ");
    scanf("%f",&num2);
    /* printf("%.1f - %.1f / %.1d",num1-num2/year); */
    vardep=num1-num2;
    printf("DEPRECIATION IS: %.1f / %d = %.1f",vardep,year, vardep/year);
    printf("\n");
}
