#include <stdio.h>
#include <stdlib.h>


int main(){
	int angka[10]={3,6,2,5,8,1,7,3,4,1};
	int i,j,temp,angka_terkecil;
	for(i=0; i<10; i++){
		angka_terkecil=i;
		for(j=i; j<10; j++){
			if(angka[j] < angka[angka_terkecil]){
				angka_terkecil=j;
			}
		}
		temp=angka[i];
		angka[i]=angka[angka_terkecil];
		angka[angka_terkecil]=temp;
	}
	for(i=0; i<10; i++){
		printf("%d ", angka[i]);
	}
	return 0;
}
