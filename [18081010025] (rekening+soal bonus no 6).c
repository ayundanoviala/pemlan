#include <stdio.h>
#include <stdlib.h>
#include <string.h>




struct rekening
{
	
	float saldo;
	char nama[20];
	char bank[5];
	char kota[10];
	char jalan[20];
	char provinsi[20];
	char norek[20];
	struct{
		int tgl;
		int bln;
		int thn;
	}HBD;	
};
typedef struct rekening rek;

int main() 
{

	rek data[10];
	strcpy (data[0].nama,"ayunda");
	strcpy (data[0].bank,"bri");
	data[0].HBD.bln = 11;
	data[0].HBD.thn = 2000;
	data[0].HBD.tgl = 23;
	strcpy (data[0].kota,"tuban");
	strcpy (data[0].provinsi,"jawa timur");
	strcpy (data[0].jalan,"manunggal");
	strcpy (data[0].norek,"200217");
	data[0].saldo = 2500000;
	
	
	
	strcpy (data[1].nama,"kelvin");
	strcpy (data[1].bank,"bni");
	data[1].HBD.bln = 5;
	data[1].HBD.thn = 1999;
	data[1].HBD.tgl = 21;
	strcpy (data[1].kota,"gresik");
	strcpy (data[1].provinsi,"jawa timur");
	strcpy (data[1].jalan,"manunggal");
	strcpy (data[1].norek,"200230");
	data[1].saldo = 3000000;
	
	strcpy (data[2].nama,"vinda");
	strcpy (data[2].bank,"bni");
	data[2].HBD.bln = 9;
	data[2].HBD.thn = 2001;
	data[2].HBD.tgl = 21;
	strcpy (data[2].kota,"malang");
	strcpy (data[2].provinsi,"jawa timur");
	strcpy (data[2].jalan,"ceria");
	strcpy (data[2].norek,"200231");
	data[2].saldo = 10000000;
	
	strcpy (data[3].nama,"avin");
	strcpy (data[3].bank,"bca");
	data[3].HBD.bln = 15;
	data[3].HBD.thn = 1998;
	data[3].HBD.tgl = 22;
	strcpy (data[3].kota,"surabaya");
	strcpy (data[3].provinsi,"jawa timur");
	strcpy (data[3].jalan,"soekarno");
	strcpy (data[3].norek,"200232");
	data[3].saldo = 30000000;

	
	
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5 || pilih !=6 || pilih!=7 ){
		
		
		printf("----------anda masuk di program MY BANK ---------\n\n\n");
		printf("Pilih menggunakan angka\n");
		printf("1. Tampilkan semua data  \n2. Tampilkan data saya \n3. total saldo nasabah \n4. cari nasabah berdasarkan kota \n5.tampilkan nasabah dengan umur tertentu \n6. cari saldo terbesar \n7. cari saldo terkecil\n\n");
		printf("Masukkan Pilihan Anda : \n");
		scanf("%d", &pilih);
		if(pilih == 1){
			printf("-------------Data seluruh nasabah :-------------------- \n\n");
			for(i = 0; i<4; i++){
				printf("Nama			: %s\n",data[i].nama);
				printf("bank			: %s\n",data[i].bank);
				printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
				printf("bulan lahir		: %d\n",data[i].HBD.bln);
				printf("tahun lahir		: %d\n",data[i].HBD.thn);
				printf("kota			: %s\n",data[i].kota);
				printf("provinsi		: %s\n",data[i].provinsi);	
				printf("jalan			: %s\n",data[i].jalan);
				printf("nomer rekening		: %s\n",data[i].norek);
				printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
			}
		}
		
		if(pilih == 2) {
			int salah = 0;
			char nomer[20];
			printf("-----------------CARI MELALUI NOMOR REKENING-------------------\n\n");
			printf("masukan nomor rekening =  ");
			scanf("%s",&nomer);
			for(i=0;i<4;i++){
				if(!strcmp(data[i].norek,nomer)){
					
					printf("\nNama			: %s\n",data[i].nama);
					printf("bank			: %s\n",data[i].bank);
					printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
					printf("bulan lahir		: %d\n",data[i].HBD.bln);
					printf("tahun lahir		: %d\n",data[i].HBD.thn);
					printf("kota			: %s\n",data[i].kota);
					printf("provinsi		: %s\n",data[i].provinsi);	
					printf("jalan			: %s\n",data[i].jalan);
					printf("nomer rekening		: %s\n",data[i].norek);
					printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
					salah=1;
					break;
					
					
				}
			}
			if(salah==0){
				printf("data tidak ditemukan\n\n");
			}
			
		}
		if(pilih == 3){
			printf("--------------------TOTAL SALDO NASABAH-----------------------\n\n");
			float hasil=0;
			
			for(i=0;i<4;i++){
				hasil+=data[i].saldo;
				printf("%.2f\n",data[i].saldo);			
			}
			printf("--------------------------+\n");
			printf("%.2f\n\n",hasil);
			
		}
		
		if(pilih == 4){
			int salah=0;
			char kot[10];
			printf ("--------------CARI NASABAH DARI KOTA---------------------\n\n");
			printf("masukan kota anda = ");
			scanf("%s",&kot);
			for(i=0;i<4;i++){
				if(!strcmp(data[i].kota,kot)){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah==0){
				printf("data tidak ditemukan\n\n");
			}
		}
		if(pilih == 5){
			int umur,tahun,salah=0;
			printf("-------CARI NASABAH DENGAN UMUR--------\n\n\n");
			printf("masukan umur nasabah = ");
			scanf("%d",&umur);
			for(i=0;i<4;i++){
			tahun=2019-umur;
				if(tahun==data[i].HBD.thn){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						salah=1;
						break;
				}
			}
			if(salah == 0){
				printf("umur nasabah tidak ditemukan\n\n\n");
				
			}
		}
		if(pilih == 6){
			printf("=========nasabah saldo terbesar=========\n\n\n");
			float max=0;
			for(i=0;i<4;i++){
				if (data[i].saldo>max||max==0){
					max = data[i].saldo;
				}
				
			}
			for(i=0;i<4;i++){
				if(max==data[i].saldo){
						
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						break;
				}
			}
			
		}
		
		if(pilih == 7){
			printf("=========nasabah saldo terkecil=========\n\n\n");
			float min=0;
			for(i=0;i<4;i++){
				if(data[i].saldo<min||min==0){
					min = data[i].saldo;
				}
				
			}
			for(i=0;i<4;i++){
				if(min==data[i].saldo){
						printf("Nama			: %s\n",data[i].nama);
						printf("bank			: %s\n",data[i].bank);
						printf("tanggal lahir		: %d\n",data[i].HBD.tgl);
						printf("bulan lahir		: %d\n",data[i].HBD.bln);
						printf("tahun lahir		: %d\n",data[i].HBD.thn);
						printf("kota			: %s\n",data[i].kota);
						printf("provinsi		: %s\n",data[i].provinsi);	
						printf("jalan			: %s\n",data[i].jalan);
						printf("nomer rekening		: %s\n",data[i].norek);
						printf("saldo nasabah		: %.2f\n\n\n\n\n",data[i].saldo);
						break;
				
				}
			}
		}
	}
	return 0;
}
