#include <iostream>

using namespace std ;

class Copy
{
	float var ;
	public:
		void set( float a = 23){
			var = a ;
		}
		Copy(){
			
		}
		Copy( Copy& a){
			var = a.var ;
			cout << "\n Copied." ;
		}
		void show(){
			cout << "var = " << var ;
		}
};

main(){
	Copy first ;
	first.set(25) ;
	cout << "in first: " ;
	first.show() ;
	Copy second(first) ;
	cout << "in second: " ;
	second.show() ;
}
