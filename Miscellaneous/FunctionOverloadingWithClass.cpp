#include <iostream>
#include <conio.h>
using namespace std ;

class Overload
{
	public:
//		void area( float radius );
//		void area( float length, float breadth );
//		void area( float base, int height ) ;

void area( float rad){
	cout << "\nThe area of circle with radius " << rad << " is " << 3.14 * rad * rad ;
}
void area( float l, float b){
	cout << "\n The area of rectangle is: "<< l * b ;
}
void area( float b, int h){
	cout << "\n The area of triangle is: "<< 0.5 * b * h ;
}

};

//void Overload :: area( float rad){
//	cout << "\nThe area of circle with radius " << rad << " is " << 3.14 * rad * rad ;
//}
//void Overload :: area( float l, float b){
//	cout << "\n The area of rectangle is: "<< l * b ;
//}
//void Overload :: area( float b, int h){
//	cout << "\n The area of triangle is: "<< 0.5 * b * h ;
//}

main(){
	Overload O ;
	int  height;
	float l, b, base, rad ;
	cout << "Enter radius of circle: " ;
	cin >> rad ;
	O.area(rad) ;
	cout << "\nEnter length and breadth of rectangle: " ;
	cin >> l >> b ;
	O.area(l, b) ;
	cout << "\nEnter base and height of triangle: " ;
	cin >> base >> height ;
	O.area(base, height ) ;
}
