#include "header.h"

int globalVariable = 89 ;
static int notSharedGlobalVariable = 90 ;

int sharedFunction( int a){
	cout << "\n a = " << a ;
}
static int notSharedFunction( int b){
	cout << "\n b = " << b ;
}

void testClass::externalDefinedMethod(){
	cout << "\nhi, i am external defined method, and I am not in the HEADER file." ;
}

void testClass::externalStaticMethod() {
	cout << "\nhi, i am static method not defined in the HEADER file." ;
}
int testClass::staticVariable ;



