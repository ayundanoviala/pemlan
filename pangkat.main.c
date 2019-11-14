#include <stdio.h>
#include <stdlib.h>

int pangkat (int x,int y){
	if (y==0){
		return 1;
	}
	else {
		return x*pangkat(x,y-1);
	}
}
int ubahpositif(int y){
	if(y<0){
			return (y*-1);
	}else {
		return(y);
	}
}

int main() {
	system("color B0");
	double x,y,hasil,negatif;
	
	printf("\n___PERHITUNGAN BILANGAN PANGKAT___\n\n");
	printf("masukan bilangan yang akan dipangkatkan = ");
	scanf("%lf",&x);
	printf("masukan pangkat bilangan = ");
	scanf("%lf",&y);
	
	negatif = ubahpositif(y);
	hasil = pangkat(x,negatif);
	
	if(y>0){
		printf("hasil bilangan %.1lf pangkat %.1lf adalah %1.lf",x,y,hasil);
	}
	else if(y<0){
		printf("hasil bilangan %.1lf pangkat %.1lf adalah %.12lf",x,y,1/hasil);
	}
	return 0;
}
