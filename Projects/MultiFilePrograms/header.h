#ifndef HEADER
#define HEADER

#define DEFINED_CONST 3

/*
Header file is just a file that contains insertable piece of statements in other files.
*/

#include <iostream>
using namespace std ;

extern int globalVariable ;
/*
Using global arrays:
1. Declare in header file like so, using the extern keyword
2. Redeclare in one other linked file, without using the extern keyword, here it has been redeclared in definitionFile.cpp
*/
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
