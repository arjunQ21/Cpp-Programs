#include <iostream>

using namespace std ;

main(){
	double a, b, power = 1 ;
	cout << "Enter base and power: " ;
	cin >> a >> b ;
	int i ;
	for( i = 0 ; i < b ; i++){
		power *= a ;
	}
	cout << endl << a << "^" << b << " is: " << power ;
}
