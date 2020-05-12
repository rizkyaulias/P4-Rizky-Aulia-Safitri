#include <stdio.h>
#include <string.h>

float hadir,tugas,kuis,uts,uas,data,kehadiran ; 
char nama[20][100],nim[20][100] ;
float NA[100],nilhadir[100],niluts[100],niluas[100],nilkuis[100],niltgs[15] ;
int i ;
	void aran(){
	    printf("MASUKKAN JUMLAH DATA YANG AKAN DIINPUT = " );
	    scanf("%f",&data) ;
		for (i=1; i<=data;i++) {
		printf("Masukkan nama         : ");
		scanf("%s",&nama[i]) ;
		printf("Masukkan NIM          : ");
		scanf("%s",&nim[i]) ;
		printf("Masukkan kehadiran    : " ) ;
	    scanf("%f",&nilhadir[i]) ;
		printf("Masukkan nilai tugas  : ");
		scanf("%f",&niltgs[i] );
		printf("Masukkan nilai kuis   : ") ;
		scanf("%f",&nilkuis[i]) ;
		printf("Masukkan nilai uts    : ");
		scanf ("%f",&niluts[i]) ;
		printf ("Masukkan nilai uas   : " );
		scanf("%f",&niluas[i] );
		printf ("\n") ;}
	printf("\n");
}
void susunan() {
	for (i=1 ; i<=data ;i++){
	printf("|%-3d|",i);
	printf("%-14s|",nama[i]);
	printf("%-9s|",nim[i]);
	printf("%-11.0f|",nilhadir[i]);
	printf("%-7.0f|",niltgs[i]);
	printf("%-6.0f|",nilkuis[i]);
	printf("%-5.0f|",niluts[i]);
	printf("%-5.0f|",niluas[i]);
 	    NA[i] = ((hadir/100)*nilhadir[i]) + ((tugas/100)*niltgs[i]) + ((kuis/100)*nilkuis[i]) + ((uts/100)*niluts[i]) + ((uas/100)*niluas[i]);
	       if (NA[i]>=80){
		   	printf("A   |");}
            else if (NA[i]>=70){
            printf("B   |");}
            else if (NA[i]>=59){
            printf("C   |");}
            else if (NA[i]>=50){
            printf("D   |");}
            else {
            printf("E   |");}
        printf("\n");}}

void background(){
printf("|************************************************************************|\n");
printf("|   |              |         |              DAFTAR NILAI                 |\n");
printf("|No |      Nama    |   NIM   |*******************************************|\n");
printf("|   |              |         | Kehadiran | Tugas | Kuis | UTS | UAS | NA |\n") ;
printf("|************************************************************************|\n");}
void tampilan (){
	  printf("|============================================|\n");
      printf("|  PROGRAM MENGHITUNG NILAI AKHR MAHASISWA   |\n");
      printf("|      MATA KULIAH DASAR TELEKOMUNIKASI      |\n");
      printf("|============================================|\n");
	printf("|JUMLAH SKS : 3                              |\n");
	printf("|============================================|\n");
	printf("|JUMLAH KEHADIRAN  = 14                      |\n");
	printf("|============================================|\n");
	printf("NILAI PERSENTASE KEHADIRAN(%%) = ") ;
	scanf("%f",&hadir) ;
	printf("NILAI PERSENTASE TUGAS (%%)    = ") ;
	scanf("%f",&tugas); 
	printf("NILAI PERSENTASE KUIS(%%)      = ");
	scanf("%f",&kuis) ;
	printf("NILAI PERSENTASE UTS(%5)       = ");
	scanf("%f",&uts);
	printf("NILAI PERSENTASE UAS(%%)       = ") ;
	scanf ("%f",&uas) ;
	printf ("\n");
}
int main () {
	aran() ;
	tampilan() ;
	background() ;
	susunan() ; 
 printf("|************************************************************************|\n");
	}
