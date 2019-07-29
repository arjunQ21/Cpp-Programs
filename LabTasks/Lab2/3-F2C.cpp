#include <iostream>

using namespace std ;

inline double f2c( double f){
	return (5 * f - 160 ) / 9 ;
}

main(){
	cout << "Enter tempr in fahrenheit: " ;
	double f ;
	cin >> f ;
	cout << "Equivalent celcius is: " << f2c(f) ;
}
