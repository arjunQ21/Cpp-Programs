#include "header.h"

main(){
	cout << "\nValue of globalVariable = " << globalVariable ;
	sharedFunction( 4) ;
	testClass::staticMethod() ;
	testClass::externalStaticMethod() ;
	cout << "\nValue of static variable: " << testClass::staticVariable ;
	testClass a ;
	a.externalDefinedMethod();
	globalArray[2] = 6 ;
	cout << "\nValue from array: " << globalArray[2] ;
	cout << "\nValue of Defined Const: " << DEFINED_CONST ;
}

