#include <iostream>

using namespace std ;

void swap( int& a, int& b ){
	int temp = a ;
	a = b ;
	b = temp ;
}

main(){
	int first = 3, sec = 7 ;
	swap(first, sec) ;
	cout << "first = " << first << ", second = " << sec ;
}
