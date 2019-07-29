#include <iostream>

using namespace std ;

void def_fun( int a = 89){
	cout << "Called Default function" ;
}

void def_fun(){
	cout << "overloaded" ;
}

main(){
	def_fun() ;
}
