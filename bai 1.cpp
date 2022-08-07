#include <stdio.h>
using namespace std;
int main () {
	printf ( " nhap n nguyen duong :  \n") ;	
	int n;
	do {
		scanf("%d", &n);
		if ( n<= 0) { printf(" n phai nguyen duong, nhap lai \n");
		}
	} while ( n<= 0);
	int d = n;
	float S = 0;

		while ( n>0) {
			S  += 1/(float)n;
			n--;
		}
		printf ( " tong chu so cua %d la : %f" , d , S);
	
	return 0;
}
