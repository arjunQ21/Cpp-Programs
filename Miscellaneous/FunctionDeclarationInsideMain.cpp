#include <iostream>

using namespace std ;

main(){
	void show() ;
	show( );
//	show() ;
	void showFromThis() ;
	showFromThis() ;
}

void show(){
	cout << "Hi";
//	void showFromThis() ;
}

void showFromThis(){
//	cout << "HI";
	show() ;
}
