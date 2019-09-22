#include <iostream>

using namespace std ;

class sec ;

class first{
	int a, b ;
	public:
		first(int f = 8, int s = 9){
			a = f ;
			b = s ;
		}
		friend class sec ;
		friend void here(first a) ;
};

void here(first o){
	cout << o.a << ", " << o.b ;

}

class sec{
	first o ;
	public:
		sec( first g = first(4, 4)){
			o = g ;
		}
		show(){
			cout << o.a << ", " << o.b ;
		}
};

main(){
//	first f(4, 5);
	first f ;
//	sec g(f) ;
	sec g ;
	g.show() ;
	here(f) ;
	
}
