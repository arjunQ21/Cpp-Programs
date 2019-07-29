#include <iostream>

using namespace std ;

class StaticTest
{
	public:
		static int a ;
		
};
int StaticTest::a ;

main(){
	StaticTest a, b, c, d ;
	a.a = 89 ;
	cout << b.a ;
	cout << endl << StaticTest::a ;
}
