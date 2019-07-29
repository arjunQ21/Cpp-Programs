#include <iostream>

using namespace std ;

inline double lb2kg( double lb){
	return 0.453592 * lb ;
}

main(){
	cout << "Enter weight in pounds: " ;
	double f ;
	cin >> f ;
	cout << "Equivalent kg is: " << lb2kg(f) ;
}
