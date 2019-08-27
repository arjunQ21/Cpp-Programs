#include <iostream>

using namespace std ;

void area( float radius );
void area( float length, float breadth );
void area( float base, int height ) ;

main(){
	int  height;
	float l, b, base, rad ;
	cout << "Enter radius of circle: " ;
	cin >> rad ;
	area(rad) ;
	cout << "\nEnter length and breadth of rectangle: " ;
	cin >> l >> b ;
	area(l, b) ;
	cout << "\nEnter base and height of triangle: " ;
	cin >> base >> height ;
	area(base, height ) ;
}

void area( float rad){
	cout << "\nThe area of circle with radius " << rad << " is " << 3.14 * rad * rad ;
}
void area( float l, float b){
	cout << "\n The area of rectangle is: "<< l * b ;
}
void area( float b, int h){
	cout << "\n The area of triangle is: "<< 0.5 * b * h ;
}
