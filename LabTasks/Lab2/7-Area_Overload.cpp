#include <iostream>

using namespace std ;

void area( int length ){
	cout << "\nArea of square is: " << length * length ;
}

void area( float radius ){
	cout << "\nArea of cicle is: " << 3.14 * radius * radius ;
}

void area( float len, float bre){
	cout << "\nArea of rectangle is: " << len * bre ;
}

main(){
	int len ;
	float r, l, b ;
	cout << "\nEnter side of square, radius of circle and length and breadth of rectangle: " ;
	cin >> len >> r >> l >> b ;
	area(len) ;
	area(r) ;
	area(l, b) ;
}
