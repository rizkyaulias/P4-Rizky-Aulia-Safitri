 #include <stdio.h>

int main (){
	int i,j ;
	int matriks1[2][2],matriks2[2][2],hasil[2][2] ;
	printf ("MATRIKS 1\n") ;
	for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			printf("masukkan elemen [%d][%d] = ",i,j );
			scanf ("%d",&matriks1[i][j]);
		}
		}
		printf("\n") ;
			printf ("MATRIKS 2\n") ;
	for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
			printf("masukkan elemen [%d][%d] = ",i,j);
			scanf ("%d",&matriks2[i][j]);
		}
		}
		printf("\n") ;
	
		for (i=0 ; i<2 ;i++){
		for(j=0 ; j<2 ;j++){
            printf("[%d] ",matriks1[i][j]* matriks2[i][j]); ;
	}
	printf("\n") ;
}
}
