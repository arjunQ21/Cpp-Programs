#include <iostream>

using namespace std ;

class Complex{
	float real ;
	float imag ;
	public:
		Complex(){
			real = imag = 0.0 ;
		}
		Complex( float a, float b): real(a), imag(b)
		{	
		}
		Complex operator + ( Complex a){
			return Complex(real + a.real, imag + a.imag) ;
		}
		void show( string name = "Number") {
			cout << "\n" << name << " = " << real << " + " << imag << "i" ;
		}
};

main(){
	Complex a, b(5, 4), sum ;
	a = Complex(1, 3) ;
	sum = a + b ;
	sum.show("sum") ;
}
