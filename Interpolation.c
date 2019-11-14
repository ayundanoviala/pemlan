#include <stdio.h>
#include <stdlib.h>

int main()
{
	int data[5]={10,12,14,17,20};
	int bawah, atas, cari, flag=0,pos;
	float posisi;
	bawah=0;
	atas=4;
	printf("Angka yang dicari : ");
	scanf("%d", &cari);
	
	do{
		posisi=(float)((cari-data[bawah])/(data[atas]-data[bawah]))*(atas-bawah)+bawah;
		pos=floor(posisi);
		if(data[pos]==cari)
		{
			flag=1;
			break;
		}
		if(data[pos]>cari) atas=pos-1;
		else if(data[pos]<cari)
		bawah=pos+1;
	}
	while(cari>=data[bawah]&& cari<=data[atas]);
	if(flag==1)
	printf("Data ada");
	else printf("Data tidak ada");
	return 0;
}
