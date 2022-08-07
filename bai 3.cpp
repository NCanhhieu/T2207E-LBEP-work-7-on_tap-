#include <stdio.h>
#include <math.h>
using namespace std;
int main () {
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a,a1,a2, a_1, a_2;
	a = 0;
	a1 = 1;
	a2 = 1;
	a_2 = -1;
	if ( n  == 0) 
	{
	
	 printf ("so dung o vi tri %d la %d", n, a); 
	 } else if (  n == 1 || n == 2 || n == -1)
	{ printf ("so dung o vi tri %d la %d", n, a1);}
	else if ( n == -2) {
	  printf ("so dung o vi tri %d la %d", n, a_2);	
	} else	if ( n > 2 ) {
		for ( int i = 2; i<n; i++ ) {
			
			a = a1 + a2;
			a2 = a1;
			a1 = a;
			
		} 
	printf (" so dung o vi tri %d la %d", n, a);	
		}
	 else {
	 	
	for(int j = 2; j <abs(n); j++)
		{  	a = a1 + a2;
			a2 = a1;
			a1 = a;
			
		}
		a = 0- a;
		printf (" so dung o vi tri %d la %d", n, a);
	}

	return 0;
}
