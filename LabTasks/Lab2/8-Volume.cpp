#include <iostream>

using namespace std ;

void volume( float side ){
	cout << "\nVolume of cube is: " << side * side * side ;
}

void volume( float radius, float height ){
	cout << "\nVolume of cylinder is: " << 3.14 * radius * radius * height ;
}

void volume( float l, float b , float h){
	cout << "\nVolume of cuboid is: " << l * b * h ;
}

main(){
	float side, r, hc, l, b, h ;
	cout << "\nEnter side of cube: " ;
	cin >> side ;
	volume(side ) ;
	cout << "\nEnter radius and height of cylinder: " ;
	cin >> r >> hc ;
	volume( r, hc ) ;
	cout << "\nEnter length, breadth and height of cuboid: " ;
	cin >> l >> b >> h ;
	volume(l , b, h) ;
}
