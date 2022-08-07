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
		printf (" mang a : \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	} 
	int temp;
	int k = n-1;
	for (int i = 0; i < n/2; i++) {  
	    	temp = a[i];
			a[i] = a[k]; 
			a[k] = temp;
			k--;
	}

	printf ("\n");
	printf (" mang a dao nguoc \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	} 
return 0;	
}
	
