/* $Id: comprog1c.c,v 1.1 2014/10/12 19:32:09 fjpfajardo Exp $
 * COMPROG 1C - Maam Liza Maderazo
 * 1. Write a program that accepts dates written un numerical form 
 * and then output them as a complete form. For example, the input: 
 * 2 26 1986 should produce the output: February 26, 1986 */

#include<stdio.h>
#include<string.h>

int main() {
 
  /* initiate variables */ 
  char ST[10],MM[2],DD[2],YY[4];
  printf("Enter date. [E.g. 04 29 1980] : ");
  gets(ST);
  
  /* read 3 strings from array */
  sscanf(ST,"%s %s %s",MM,DD,YY);

  /* start the comparison logic. for jan to sept, 
   * allow declare using 1 or 2 character values 
   * such as "1" or "01" */ 
if((strcmp(MM, "1") == 0) || (strcmp(MM, "01") == 0)) {
	printf(" January %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "2") == 0) || (strcmp(MM, "02") == 0)) {
	printf(" February %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "3") == 0) || (strcmp(MM, "03") == 0)) {
        printf(" March %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "4") == 0) || (strcmp(MM, "04") == 0)) {
        printf(" April %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "5") == 0) || (strcmp(MM, "05") == 0)) {
        printf(" May %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "6") == 0) || (strcmp(MM, "06") == 0)) {
        printf(" June %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "7") == 0) || (strcmp(MM, "07") == 0)) {
        printf(" July %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "8") == 0) || (strcmp(MM, "08") == 0)) {
        printf(" August %s, %s\n",DD,YY);
   }
   else if((strcmp(MM, "9") == 0) || (strcmp(MM, "09") == 0)) {
        printf(" September %s, %s\n",DD,YY);
   }
   else if(strcmp(MM, "10") == 0) {
        printf(" October %s, %s\n",DD,YY);
   }
   else if(strcmp(MM, "11") == 0) {
        printf(" November %s, %s\n",DD,YY);
   }
   else if(strcmp(MM, "12") == 0) {
        printf(" December %s, %s\n",DD,YY);
   }
   else
   {
        printf("No matching value.\n" );
	printf("MONTH:\t%s\n",MM);
	printf("DATE:\t%s\n",DD);
	printf("YEAR:\t%s\n",YY);
   }
	return 0;
}
