#include <stdio.h>
int main ( ) {
	//freopen("input.txt", "r", stdin);
		printf ( " nhap n nguyen duong :  \n") ;	
	int n;
	do {
		scanf("%d", &n);
		if ( n<= 0) { printf(" n phai nguyen duong, nhap lai \n");
		}
	} while ( n<= 0);
	
	int a[n], b[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
    int t = 0;
    int max = 1;
    int gtxh;
	for (int i = 0; i < n; i++) {
	  for (int j = 0; j < n; j++) {
		if ( a[i] == a[j]) {
			t++;}
		  	if ( max < t) {
			max = t;
			gtxh = a[i];}
		
	} t = 0;
	}
	if ( max == 1) { printf(" khong co gia tri xuat hien lap");
	} else
	printf (" gia tri xuat hien nhieu nhat la %d , lap lai %d",gtxh, max );
	return 0;
}
