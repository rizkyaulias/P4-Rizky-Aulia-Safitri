#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std ;
float hadir,tugas,kuis,uts,uas,data,kehadiran ; 
char nama[20][100],nim[20][100] ;
int NA[100],nilhadir[100],niluts[100],niluas[100],nilkuis[100],niltgs[15] ;
int i ;
	void aran(){
	    cout<<"MASUKKAN JUMLAH DATA YANG AKAN DIINPUT = "  ;
	    cin >> data ;
		for (i=1; i<=data;i++) {
		cout<<"Masukkan nama         : " ;
		cin >> nama[i] ;
		cout<<"Masukkan NIM          : " ;
		cin >>nim[i]  ;
		cout<<"Masukkan kehadiran    : " ;
		cin >>nilhadir[i] ;
		cout<<"Masukkan nilai tugas  : " ;
		cin>>niltgs[i] ;
		cout<<"Masukkan nilai kuis   : ";
		cin >>nilkuis[i] ;
		cout<<"Masukkan nilai uts    : " ;
		cin >>niluts[i] ;
		cout<<"Masukkan nilai uas    : " ;
		cin >>niluas[i] ;
		cout<<endl ;}
	cout<<endl ;
	system("cls") ;
	system("pause") ;
}
void susunan() {
	for (i=1 ; i<=data ;i++){
	  cout<<setiosflags (ios::left)<<"|"<<setw (3)<<i;
        cout<<setiosflags (ios::left)<<"|"<<setw (14)<<nama[i];
        cout<<setiosflags (ios::left)<<"|"<<setw (9)<<nim [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (11)<<nilhadir [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (7)<<niltgs [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (6)<<nilkuis[i];
        cout<<setiosflags (ios::left)<<"|"<<setw (5)<<niluts [i];
        cout<<setiosflags (ios::left)<<"|"<<setw (5)<<niluas [i];
 	    NA[i] = (hadir/100)*nilhadir[i] + (tugas/100)*niltgs[i] + (kuis/100)*nilkuis[i]+ (uts/100)*niluts[i]+(uas/100)*niluas[i];
	       if (NA[i]>=80){
		   	cout<<setprecision (5) <<"|"<<" A  |";}
             else if (NA[i]>=70){
                 cout<<setprecision (5) <<"|"<<" B  |";}
            else if (NA[i]>=59){
                 cout<<setprecision (5) <<"|"<<" C  |";}
            else if (NA[i]>=50){
                 cout<<setprecision (5) <<"|"<<" D  |";}
            else if (NA[i]<50){
                 cout<<setprecision (5) <<"|"<<" E  |";}
        cout<<endl ;}
}
void background(){
cout <<"|************************************************************************|\n" ;
cout<< "|   |              |         |              DAFTAR NILAI                 |\n" ;
cout<< "|No |      Nama    |   NIM   |*******************************************|\n" ;
cout<< "|   |              |         | Kehadiran | Tugas | Kuis | UTS | UAS | NA |\n" ;
cout<< "|************************************************************************|\n";}
void tampilan (){
	cout<<"|============================================|\n" ;
      cout<<"|  PROGRAM MENGHITUNG NILAI AKHR MAHASISWA   |\n" ;
      cout<<"|      MATA KULIAH DASAR TELEKOMUNIKASI      |\n" ;
      cout<<"|============================================|\n";
	cout<<"|JUMLAH SKS : 3                              |\n" ;
	cout<<"|============================================|\n";
	cout<<"|JUMLAH KEHADIRAN  = 14                      |\n";
	cout<<"|============================================|\n";
	cout<<"NILAI PERSENTASE KEHADIRAN(%) = ";
	cin>> hadir ;
	cout<<"NILAI PERSENTASE TUGAS (%)    = ";
	cin>> tugas; 
	cout<<"NILAI PERSENTASE KUIS(%)      = " ;
	cin>> kuis ;
	cout<<"NILAI PERSENTASE UTS(%)       = ";
	cin>> uts ;
	cout<<"NILAI PERSENTASE UAS(%)       = ";
	cin>> uas ;
	cout<<endl ;
}
int main () {
	aran() ;
	tampilan() ;
	background() ;
	susunan() ; 
   cout <<"|************************************************************************|\n" ;
	system("pause") ;
	}
