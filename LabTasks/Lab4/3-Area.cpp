#include <iostream>

using namespace std ;

class Area{
	float l,  b ;
	public:
		Area(){
			l = 0 ;
			b = 0 ;
			cout << "\n Initialised to 0." ;
		}
		Area( float len, float bre){
			l = len ;
			b = bre ;
			cout << "\n Used parameterized constructor." ;
		}
		void showArea(){
			cout << "\n Area is: " << l * b ;
		}
};

main(){
	Area A ;
	float len, breadth ;
	cout << "\nenter length: "  ;
	cin >> len ;
	cout << "\nenter breadth: " ;
	cin >> breadth ;
	Area A2(len, breadth) ;
	A2.showArea() ;
}
