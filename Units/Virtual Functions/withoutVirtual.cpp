#include <iostream>

using namespace std ;

class Base{
	public:
		void show(){ 
			cout << "\nBase" ;
		}
};
class Derv1: public Base{
	public:
		void show(){ 
			cout << "\nDerv1" ;
		}
};
class Derv2: public Base{
	public:
		void show(){ 
			cout << "\nDerv2" ;
		}
};

main(){
	Base* ptr ;
	Derv1 dr1 ;
	Derv2 dr2 ;
	ptr = &dr1 ;
	ptr->show() ;
	ptr = &dr2 ;
	ptr->show() ;
}
