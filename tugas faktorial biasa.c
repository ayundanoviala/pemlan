#include <stdio.h>
#include <stdlib.h>



int main()
{
 	int hasil=1,bil;
 	printf("masukkan bilangan faktorial = ");
 	scanf("%d",&bil);
 	int i;
 	for(i=1;i<=bil;i++)
 	{
 		hasil=i*hasil;
	}
	printf("faktorial dari %d! adalah = %d",bil,hasil);
}
