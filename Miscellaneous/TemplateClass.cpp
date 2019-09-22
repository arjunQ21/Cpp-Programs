#include <iostream>

using namespace std ;

template <class T1, class T2> 

class show{
	T1 a;
	T2 b ;
	int c ;
	public:
		show( T1 f, T2 s){
			a = f ;
			b = s ;
			c = 67 ;
		}
		void display(){
			cout << "a = " << a << ", b = " << b << ", c = " << c << endl ;
		}
};

main(){
	show<int, int> integer(3, 4) ;
	show<int, float> intAndFloat(3, 4.5) ;
	show<string, int > stringAndInt("arjun", 'a') ;
	integer.display() ;
	intAndFloat.display() ;
	stringAndInt.display() ;
}


