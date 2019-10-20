#ifndef HEADER
#define HEADER

#include <iostream>
using namespace std ;

extern int globalVariable ;
extern int globalArray[5] ;

int sharedFunction( int ) ;

class testClass{
	int testMember ;
	public:
		void setValue( int r){
			testMember = r ;
		}
		void showValue( ){
			cout << "\nValue: " << testMember ;
		}
		void externalDefinedMethod();
		static void staticMethod() {
			cout << "\nhi, i am static method defined in the HEADER file." ;
		}
		static void externalStaticMethod();
		static int staticVariable ;
};



#endif
