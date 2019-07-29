#include <iostream>

using namespace std ;

float area( float radius ){
	return 3.14 * radius * radius ;
}

main(){
	float r ;
	cout << "Enter radius: " ;
	cin >> r ;
	cout << "\nArea is: " << area( r ) ;
}

