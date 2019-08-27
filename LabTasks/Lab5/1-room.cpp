#include <iostream>

using namespace std ;

class Room 
{
	protected :
	int length, breadth ;
	public: 
	int area(){
		return (length * breadth ) ;
	}	
};

class BedRoom : public Room
{
	int height ;
	public: 
	void setData(int a, int b, int c){
		length = a ;
		breadth = b ;
		height = c ;
	}	
	int volume(){
		return length * breadth * height ;
	}
};

main(){
	int l, b, h ;
	cout << "Enter length, breadth, height:  " ;
	cin >>  l >> b >> h ;
	BedRoom B ;
	B.setData(l, b , h) ;
	cout << "\nArea: " << B.area() << ", Volume: " << B.volume() ;
}
