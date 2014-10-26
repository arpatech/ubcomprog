/* $Id: comprog7c.c,v 1.1 2014/10/26 02:32:58 fjpfajardo Exp $
 *  * COMPROG 1 - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14
 *
 *  7. Write a program to compute Income Tax to be paid by a citizen as per following 
 *  tax regime. Take the gross salary from the individual and compute the tax payable.
 *  > 100000 and < 1 60 000     10% of the amount exceeding 100000
 *  > 160000 and < 250 000      20% of the amount exceeding 160000
 *  > 250 000                   30% of the amount exceeding 250000
 *
 *  g = 0-100,000 consider it non-taxable
 *  g = 100,000-159,999 g*10%
 *  g = 160,000-249,999 g*20%
 *  g = 250,000> g*30%
 * */

# include <stdio.h>
int main()
{
    int g;
    float t;
    printf("Enter the GROSS salary [E.g 1658000] : ");
    scanf("%d",&g);

        if (g>=1 && g<=99999) {
                printf("Salary is non-taxable. Less than 100,000.\n");
        }
        else if (g>=100000 && g<=159999) {
                int x=g*0.10;
                printf("Gross Salary Entered : %d\n",g);
                printf("Total Tax Due : = %d\n",x);
        }
        else if (g>=160000 && g<=249999) {
                int x=g*0.20;
                printf("Gross Salary Entered : %d\n",g);
                printf("Total Tax Due : = %d\n",x);
        }
        else if (g>=250000) {
                int x=g*0.30;
                printf("Gross Salary Entered : %d\n",g);
                printf("Total Tax Due : = %d\n",x);
        }
        else
                printf("Your input did not matched or = 0.\n");
                return 0;
}
