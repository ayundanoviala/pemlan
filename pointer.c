#include <stdio.h>
#include <stdlib.h>



void main() {
	int x;
	int *px;
	
	x=10;
	px = &x;
	printf("x berada dialamat %d \n",px);
	printf("x berada dialamat %d \n",&x);
	printf("isi var x =  %d \n",x);
	printf("isi var x =  %d \n",*px);
	
	return 0;
}
