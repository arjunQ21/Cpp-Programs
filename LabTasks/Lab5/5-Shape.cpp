#include <iostream>

using namespace std ;

class Shape{
	protected:
		float height ;
	public:
		Shape(float a){
			height = a ;
		}
};
class Rectangle : public Shape{
	float breadth ;
	public:
		Rectangle(float a, float b) : Shape(b){
			breadth = a ;
		}
		void showArea(){
			cout << "\nArea of Rectangle: " << height * breadth ;
		}
};
class Triangle : public Shape{
	float base ;
	public:
		Triangle(float a, float b) : Shape(b){
			base = a ;
		}
		void showArea(){
			cout << "\nArea of Triangle: " << height * base / 2 ;
		}
};

main(){
	//Triangle T(5, 4);
	Rectangle R(5, 4);
	//T.showArea();
	R.showArea();
}








