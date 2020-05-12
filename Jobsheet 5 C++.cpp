 #include <iostream>
using namespace std ; 

int main (){
	int i,j ;
	int matriks1[2][2],matriks2[2][2],jumlah [2][2];
	cout << "MATRIKS 1"<<endl ;
	for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			cout << "masukkan elemen"<<"["<<i<<"]["<<j<<"]= " ;
			cin >> matriks1[i][j];
		}
		}
		cout <<endl ;
		cout << "MATRIKS 2"<<endl ;
	for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			cout << "masukkan elemen"<<"["<<i<<"]["<<j<<"]= " ;
			cin >> matriks2[i][j];
		}
		}
		cout << endl ;
		for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			jumlah [i][j]= matriks1[i][j]*matriks2[i][j] ;
			cout <<"["<<jumlah [i][j]<<"]" ;
		}
		cout <<endl ;
	}
}
