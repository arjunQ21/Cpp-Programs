#include <iostream>

using namespace std ;

class hasStatic{
	public :
		int c ;
	static int a, b ;
		void readThem(){
			cout << "Enter a and b and c: " ;
			cin >> a >> b >> c ;
		}
		static void showThem(){
			cout << "a = " << a << ", b = " << b ;
		}
		void useThem(){
			cout << "c = " << c ;
		}
};

int hasStatic::a ;
int hasStatic::b ;

main(){
	hasStatic a, b ;
	a.readThem() ;
	a.a = 25 ;
	hasStatic::showThem() ;
	b.showThem() ;
	b.useThem();
}
