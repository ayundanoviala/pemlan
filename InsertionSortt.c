#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int angka[10]={9,6,2,5,8,1,7,3,4,1};
	int i,j,temp;
	for(i=0; i<10; i++){
		for(j=i; j>00 && angka[j] < angka[j-1]; j--){
			temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}
	for(i=0; i<10; i++){
		printf(" %d ",angka[i]);
	}
	return 0;
}
