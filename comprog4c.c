/* $Id: comprog4c.c,v 1.1 2014/10/21 00:47:08 fjpfajardo Exp $
 * COMPROG 4C - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14
 * 4. Write a program that computes and assesses the tuition fee of the students in one trimester, based on the given mode of payment below:
 * Cash (1) = 10% discount
 * Two-Installment (2) = 5 % interest
 * Three – Installment(3) = 15 interest 
*/
#include <stdio.h>
int main()
{
    char x;
    float t, res;
    printf("Enter tuition fee : ");
    scanf("%f",&t);
    printf("Press (1) for Cash, (2) for Two-Installment, (3) for Three-Installment\n\n");
    printf("Cash (1) = 10 percent discount\n");
    printf("Two-Installment (2) = 5 percent interest\n");
    printf("Three – Installment(3) = 15 percent interest\n\n");
    printf("Enter mode of payment : ");
    scanf("%s",&x);
    switch(x) {
        case '1':
	res = (t-(t * 0.10));
            printf("Your total tuition fee is : %.1f\n",res);
            break;
        case '2':
	res = (t+(t * 0.05));
            printf("Your total tuition fee is : %.1f\n",res);
            break;
        case '3':
	res = (t+(t * 0.15));
            printf("Your total tuition fee is : %.1f\n",res);
            break;
        default:
            /* Option must only be 1,2 or 3 */
            printf("Invalid option. Choose 1,2 or 3 only.");
            break;
    }
    return 0;
}

