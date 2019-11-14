#include <stdio.h>
#include <stdlib.h>


struct mahasiswa
	{
	int npm;
	float ipk;
	};
	
	typedef struct mahasiswa mhs;
	int main(){
		int i;
		mhs data[3];
		data[0].npm=18081010025;
		data[0].ipk=4.00;
		data[1].npm=18081010035;
		data[1].ipk=3.99;
		data[2].npm=18081010033;
		data[2].ipk=3.77;
	
for ( i=0;i<3;i++)
	{
		printf("%d = %f\n\n",data[i].npm,data[i].ipk);
	}
	return 0;
}
