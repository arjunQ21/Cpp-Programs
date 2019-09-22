#include <iostream>

using namespace std ;

class DefaultCopy{
	int a;
	int b ;
	public:
		DefaultCopy( int f = 4, int s = 5){
			a = f ;
			b = s ;
		}
		// this declaratoin and definition is optional, since there is a default copy ctor by default for all classes
		DefaultCopy( DefaultCopy & c ){
			a = c.a ;
			b = 45 ;
		}
		void show(){
			cout << "a = " << a << ", b = " << b << endl  ;
		}
};

main(){
	DefaultCopy first(3, 4) ;
	DefaultCopy sec(first) ;
	DefaultCopy third = first ;
	first.show() ;
	sec.show() ;
	third.show() ;
}
