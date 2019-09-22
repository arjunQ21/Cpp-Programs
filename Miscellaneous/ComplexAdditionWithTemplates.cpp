#include <iostream>

using namespace std ;

template< class Real, class Imag>

class Complex{
	Real real ;
	Imag imag ;
	public:
		Complex( Real r, Imag i){
			real = r ;
			imag = i ;
		}
		Complex operator + (Complex c){
			Complex n(0,0) ;
			n.real = c.real + real ;
			n.imag = c.imag + imag ;
			return n ;
		}
		void show(){
			cout << endl << "Real: " << real << ", Imag: " << imag << endl ;
		}
};

main(){
	Complex<int, int> ints(5, 4) ;
	Complex<int, int> ints2(6, 5) ;
	Complex<int, int> intsS = ints + ints2 ;
	intsS.show() ;
	Complex<float, float> floats(5.12, 4) ;
	Complex<float, float> floats2(6, 5.08) ;
	Complex<float, float> floatsS = floats + floats2 ;
	floatsS.show() ;
	
}
