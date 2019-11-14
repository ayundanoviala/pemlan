#include <stdio.h>
#include <stdlib.h>



int main() {
	int input,input2,i;
	int npm[3];
	
	npm[0]=18081010025;
	npm[1]=18081010006;
	npm[2]=18081010088;
	
	float ipk[3];
	ipk[0]=4.00;
	ipk[1]=3.98;
	ipk[2]=3.99;
	printf("-----PROGRAM LIHAT DATAKU-----\n\n");
	printf("-----pilih menu------\n");
	printf("1. semua data \n");
	printf("2. data tertentu \n");
	printf("3. data dari belakang\n");
	printf("masukan menu pilihan = \n");
	scanf("%d",&input);
	if (input==1)
	{ for(i=0;i<3;i++)
		printf("npm =%d \n ",npm[i]);
		printf("ipk =%lf \n",ipk[i]);
	}
	else if(input==2)
	{
		printf("masukan npm anda untuk melihat data = ");
		scanf("%d",&input2);
			if (input2==18081010025)
			{
			printf("npm = %d \n ",npm[0]);
			printf("ipk = %lf\n",ipk[0]);
			}
			else if (input2==18081010006)
			{
			printf("npm = %d \n ",npm[1]);
			printf("ipk = %lf \n",ipk[1]);
			}
			else if(input2==18081010088)
			{
			printf("npm = %d \n",npm[2]);
			printf("ipk = %lf\n",ipk[2]);
			}
	}
	else (input==3);
	{
	 for(i=3;i<0;i--)
	 	
		printf("npm =%d \n ",npm[i]);
		printf("ipk =%lf \n",ipk[i]);
		
	}
	
	return 0;
}
