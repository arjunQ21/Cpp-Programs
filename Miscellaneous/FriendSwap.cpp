#include <iostream>

using namespace std ;

class B ;
class A {
	int a ;
	public:
		A(int a){
			this->a = a ;
		}
		void show(){
			cout << "\nin A: " << a ;
		}
		friend void swap(A&, B&) ;
};
class B{
	int a ;
	public:
		B(int a){
			this->a = a ;
		}
		void show(){
			cout << "\nin B: " << a ;
		}
		friend void swap(A&, B&) ;
};
void swap(A& a, B& b){
	int temp = a.a ;
	a.a = b.a ;
	b.a = temp ;
	cout << "\nswapped" ;  
}

main(){
	A a(5) ;
	B b(8) ;
	a.show() ;
	b.show() ;
	swap(a, b) ;
	a.show() ;
	b.show() ;
}





