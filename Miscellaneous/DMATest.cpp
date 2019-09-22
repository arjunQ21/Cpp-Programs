#include <iostream>
#include <stdlib.h>

using namespace std ;

class Class{
	public:
	int a;
	int b ;
		Class(int first = 5, int sec = 5){
			a = first ; 
			b = sec ;
		}
		void show(){
			cout << "\nvalues: a = " << a << ", b = " << b << endl ;
		}
};

main(){
	Class Obj(8) ;
	int size ;
	cout << "enter the size of array: " ;
	cin >> size ;
	Class * objs ;
//	objs = (Class *)calloc(size, sizeof(Class)) ;
	objs = new Class[ size ] ;
//	for(int i = 0 ; i < size; i++){
//		*(objs + i)->show() ;
//	}
//	*(objs + 1)->a = 34 ;
//	cout << sizeof(Class) ;

//	cout << *(objs + 1)->a ;
	cout << objs << ", " << objs + 1 ;

//	*(objs + 1)->show() ;
//	Obj.show() ;
}

