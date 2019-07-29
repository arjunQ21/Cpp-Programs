#include <iostream>

using namespace std ;

int power( int base, int index = 2){
	int i , power = 1;
	for( i = 1;i <= index ; i++ ){
		power *= base ;
	}
	return power ;
}

main(){
	cout << "Enter a number: " ;
	int a ;
	cin >> a ;
	cout <<"\nIts square is: " << power( a ) ;
}
