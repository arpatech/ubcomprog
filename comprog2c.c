/* $Id: comprog2c.c,v 1.3 2014/10/13 09:49:50 fjpfajardo Exp $
 * COMPROG 1 - Maam Liza Maderazo / Submitted: Federick Joe Fajardo / ETEEAP 2013-14
 * 2. Write a program that accepts a number and outputs its equivalent in words.
 * Sample input/output dialogue: Enter a number: 1380
 * One thousand three hundred eighty
 * Take note that the maximum input number is 3000 */

#include <math.h>
#include <stdio.h>
int showx(int);
int showy(int);
int showh(int);
int showt(int);
int showl(int);
int main() {

	int ax,bx,cx,dx,ix,px;
	printf("Enter a number. E.g. 1380 : ");
	scanf("%d",&ix);
	
	if(ix != 3001) {
	ax=ix%10;ix=ix/10;bx=ix%10;ix=ix/10;cx=ix%10;ix=ix/10;dx=ix%10;
	px=showt(dx);
	px=showh(cx);
	if(bx!=1) {
		px=showy(bx);
		px=showx(ax);
	}
	if(bx==1)
	px=showl(ax);
	}
	else
	printf("This is greater than the required maximum value of 3000.\n");
	return 0;
}
int showt(int t) {
	if(t!=0) {
		if(t==1)
		printf("One Thousand ");
		if(t==2)
		printf("Two Thousand ");
		if(t==3)
		printf("Three Thousand ");
	}
	return 0;
}
int showh(int t) {
	if(t!=0) {
		if(t==1)
		printf("One Hundred ");
		if(t==2)
		printf("Two Hundred ");
		if(t==3)
		printf("Three Hundred ");
		if(t==4)
		printf("Four Hundred ");
		if(t==5)
		printf("Five Hundred ");		
		if(t==6)
		printf("Six Hundred ");
		if(t==7)
		printf("Seven Hundred ");
		if(t==8)
		printf("Eight Hundred ");
		if(t==9)
		printf("Nine Hundred ");
	}
	return 0;
}
int showy(int t) {
	if(t!=0) {
		if(t==2)
		printf("Twenty ");
		if(t==3)
		printf("Thirty ");
		if(t==4)
		printf("Forty ");
		if(t==5)
		printf("Fifty ");		
		if(t==6)
		printf("Sixty ");
		if(t==7)
		printf("Seventy ");
		if(t==8)
		printf("Eighty ");
		if(t==9)
		printf("Ninety ");
	}
	return 0;
}
int showx(int t) {
	if(t!=0) {
		if(t==1)
		printf("One \n");
		if(t==2)
		printf("Two \n");
		if(t==3)
		printf("Three \n");
		if(t==4)
		printf("Four \n");
		if(t==5)
		printf("Five \n");		
		if(t==6)
		printf("Six \n");
		if(t==7)
		printf("Seven \n");
		if(t==8)
		printf("Eight \n");
		if(t==9)
		printf("Nine \n");
	}
	return 0;
}
int showl(int t) {
		if(t==0)
		printf("Ten \n");
		if(t==1)
		printf("Eleven \n");
		if(t==2)
		printf("Twelve \n");
		if(t==3)
		printf("Thirteen \n");
		if(t==4)
		printf("Forteen \n");
		if(t==5)
		printf("Fivteen \n");		
		if(t==6)
		printf("Sixteen \n");
		if(t==7)
		printf("Seventeen \n");
		if(t==8)
		printf("Eighteen \n");
		if(t==9)
		printf("Nineteen \n");
	return 0;
}
