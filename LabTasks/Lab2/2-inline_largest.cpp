#include <iostream>

using namespace std ;

inline int largest(int a, int b, int c){
	return ( a > b) ? ( ( a > c )? a : c ) : (( b > c ) ? b : c ) ; 
}

main(){
	int a, b , c ;
	cout << "Enter 3 numbers: " ;
	cin >> a >> b >> c ;
	cout << "\nLargest is: " << largest( a, b, c) ;
}
