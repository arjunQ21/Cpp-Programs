#include <iostream>

using namespace std ;

//if you want the function to not change the value of b, but only read its value, use const before its type

void swap( int& a, const int& b ){
	int temp = a ;
	a = b ;
	b = temp ;
}

main(){
	int first = 3, sec = 7 ;
	swap(first, sec) ;
	cout << "first = " << first << ", second = " << sec ;
}
