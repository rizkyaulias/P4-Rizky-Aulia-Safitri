 #include <stdio.h>
int main()
{
int i;
char nama[20]={'U','L','I','4','A','@'};
char nama2[20]="@AULI4";

printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string =%s\n\n",nama2);
return 0;
}
