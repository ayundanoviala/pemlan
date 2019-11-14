#include <stdio.h>
#include <stdlib.h>
//ubah jadi bentuk rekursif while  if
int main() {
	int angka[8]={8, 10, 6, -2, 11, 7, 1, 100};
	int pilih,i;
	int flag=0;
	printf("--------mencari data -----\n");
	printf("masukan data yang akan dicari = ");
	scanf("%d", &pilih);
	for (i = 0; i<8; i++){
		if (angka[i]==pilih){
		printf("\n ada");
		flag=1;
		break;
		}
	}		
	if (flag==0){
			printf("tidak ada");}
	
	return 0;
}
