#include <iostream>

using namespace std ;

template <class AnotherType, class TYPE> class sum{
	public:
		TYPE first ;
		AnotherType second ;
		sum(TYPE a, AnotherType b){
			first = a;
			second = b ;
			cout << "\nsize of first: " << sizeof(TYPE) << "\nsize of second: " << sizeof(second) ;
		}
		void showSum(){
			cout << "\nsum is: " << first + second ;
		}
};

template <class AnotherType>

AnotherType another(AnotherType a){
	return a * 5 ;
}

//void aFunction( AnotherType b){
//	cout << "\nb= " << b;
//}



main(){
	sum<int, long double> Add(5, 4.5) ;
	Add.showSum() ;
	int a = 7 ;
	float b = 8.5 ;
	cout << "\n7*5 another = " << another(a) ;
	cout << "\n8.5*5 another = " << another(b) ;
}
