/* $Id: comprog5c.c,v 1.1 2014/10/13 12:12:16 fjpfajardo Exp $ 
 * COMPROG 1 - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14
 * 5. Write a program that will determine if the input number is composite or prime number. */

#include <stdio.h>

int main(int argc, const char* argv[]) {
    int num, i;

    printf("Enter a number to check : ");
    scanf("%d", &num);
    if (num == 1) {
        printf("%d is neither prime or composite.", num);
    }
    i = 2;

while (i <= num-1) {
   if (num%i==0) {
	printf("%d is composite.\n",num);
        return;
    }
    i++;
}
	printf("%d is prime.\n", num);
}
