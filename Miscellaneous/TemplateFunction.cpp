#include <iostream>

using namespace std ;

template <class T, class D>

T greatest( T first, T second){
	return (first > second) ? first : second ;
}

main(){
	int a = 67 , b = 56 ;
	float c = 45.3, d = 45.6 ;
	cout << "a, b => " << greatest(a, b) << endl << "c, d => " << greatest(c, d) << endl ;
//	cout << "a, c => " << greatest(a, c) ;
}
