/* $Id: comprog3c.c,v 1.1 2014/10/13 11:12:46 fjpfajardo Exp $
 *  * COMPROG 1 - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14
 *  3. Write a program that accepts an ordinary number and outputs its equivalent Roman numerals. 
 *  The ordinary numbers and their equivalent Roman numerals are given below:
 *  Sample input/output dialogue:
 *  Enter a number : 2968	(input number)
 *  Equivalent roman numeral: MMCMLXVIII	(output number)
 *  Note that the maximum input number is 3000 */

#include <stdio.h>

void before_value(char roman1, char roman2);
void after_value(char c, int n);
char romannum[1000];
int i = 0;
int main() {
int j;
long number;

	printf("Input number. E.g. 1980 : ");
        scanf("%d", &number);

        if (number <= 0 || number > 3001) {
            printf("Invalid number. Probably greater than 3000.\n");
            return 0;
        }

        while (number != 0) {
           if (number >= 1000) {
                after_value('M', number / 1000);
                number = number - (number / 1000) * 1000;
            }

            else if (number >= 500) {
                 if (number < (500 + 4 * 100)) {
                    after_value('D', number / 500);
                    number = number - (number / 500) * 500;
                }
                else {
			before_value('C','M');
			number = number - (1000-100);
                }
            }

            else if (number >= 100) {
                 if (number < (100 + 3 * 100)) {
                    after_value('C', number / 100);
                    number = number - (number / 100) * 100;
                }
                else {
                    	before_value('L', 'D');
                    	number = number - (500 - 100);
                }

            }

            else if (number >= 50 ) {
                 if (number < (50 + 4 * 10)) {
                    after_value('L', number / 50);
                    number = number - (number / 50) * 50;
                }
                else {
                    	before_value('X','C');
                    	number = number - (100-10);
                }
            }

            else if (number >= 10) {
                 if (number < (10 + 3 * 10)) {
                    after_value('X', number / 10);
                    number = number - (number / 10) * 10;
                }
                else {
                    	before_value('X','L');
                    	number = number - (50 - 10);
                }

            }

            else if (number >= 5) {
                 if (number < (5 + 4 * 1)) {
                    after_value('V', number / 5);
                    number = number - (number / 5) * 5;
                }
                else {
                    	before_value('I', 'X');
                    	number = number - (10 - 1);
                }

            }

            else if (number >= 1) {
                 if (number < 4) {
                    after_value('I', number / 1);
                    number = number - (number / 1) * 1;
                }
                else {
                    	before_value('I', 'V');
                    	number = number - (5 - 1);
                }

            }

        }

        printf("Value in Roman : ");
        for(j = 0; j < i; j++)
            printf("%c", romannum[j]);
	    printf("\n");
        return 0;

    }

void before_value(char roman1, char roman2) {
        romannum[i++] = roman1;
        romannum[i++] = roman2;
    }

void after_value(char c, int n) {
        int j;
        for (j = 0; j < n; j++)
	romannum[i++] = c;
}
