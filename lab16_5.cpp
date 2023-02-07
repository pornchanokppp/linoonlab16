#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x, int *y, int *z) 
{
	int A[4] = {*w,*x,*y,*z} ;
	for(int j=0 ; j < 2 ; j++)
	{
		int k = rand()%4 ;
		int r = rand()%4 ;
		swap(A[k],A[r]) ;
	}
	*w = A[0] ;
	*x = A[1] ;
	*y = A[2] ;
	*z = A[3] ;
}
