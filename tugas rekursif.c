#include <stdio.h>
#include <stdlib.h>



int faktorial(int i);

main ()
{
	int bil;
	
	printf("masukan bilangan : ");
	scanf("%d",&bil);
	printf("faktorial %d = %d",bil,faktorial(bil));
	getch();
}
int faktorial (int i)
{
	if (i==0)
	{	
	return 1;
	}
	else
	{
	return i * faktorial(i-1);
	}
}
