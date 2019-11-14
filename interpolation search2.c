#include <stdio.h>
#include <stdlib.h>

int interpolation(int data[], int dicari, int banyak) {
	int kiri=0, kanan=(banyak-1);
	while (kiri <= kanan){
		int pos = kiri + (((double) (kanan - kiri) / (data[kanan]-data[kiri])) * (dicari - data[kiri]));	
		if (data[pos] == dicari) {
			return pos;
		}
		if (data[pos] < dicari) {
			kiri = pos + 1;
		} else {
			kanan = pos - 1;
		}
	}
	return -1;
}

int main() {
	int data[] = {5,6,8,1,3,25,10};
	int banyak = sizeof(data) / sizeof(data[0]);
	int dicari = 6;
	int index = interpolation(data, dicari, banyak);
	printf("%d, ", index);
	if (index != -1) {
		printf("Data ditemukan pada index %d ", index);
	} else {
		printf("Data tidak ditemukan.");
	}
	return 0;
}
