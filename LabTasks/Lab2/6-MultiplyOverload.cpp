#include <iostream>

using namespace std ;

void multiply(int, int) ;
void multiply() ;
void multiply(int, int, int);

main(){
	int a, b, c ;
	cout << "\nEnter 3 numbers: " ;
	cin >> a >> b >> c ;
	multiply() ;
	multiply(b, c) ;
	multiply(c, a, b) ;
}

void multiply(){
	cout << "\nNo numbers to multiply." ;
}

void multiply( int a, int u){
	cout << "\nProduct of " << a << " and " << u << " is: " << a * u ;
}

void multiply( int a, int u, int lastko){
	cout << "\nProduct of " << a << ", " << u << " and " << lastko << " is: " << a * u * lastko;
}
