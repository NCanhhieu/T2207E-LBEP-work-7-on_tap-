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

	bool t = false;
	int a = 2;

		while ( a < n) {
			int s;
			s = n%a;
			if ( s == 0) {
			    t = true;
			}
			a++;
		}
		if (t) {
		
		printf ( "  %d khong phai la so nguyen to " , n );
		
	} else  {
			printf ( "  %d la so nguyen to " , n );
	}
	
	return 0;
}
