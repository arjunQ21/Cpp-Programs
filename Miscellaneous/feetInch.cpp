#include <iostream>

using namespace std ;

class Feet{
	int feets, inches ;
	public:
		Feet(float a){
			feets = (int) a ;
			inches = (a - feets) * 12 ;
		}
		void show(){
			cout << feets << " ft, " << inches << " inches." ;
		}
};

main(){
//	Feet f = 2.67775 ;
	Feet f(27);
	f.show() ;
}
