#include <iostream>

using namespace std ;

class Sum
{
	public:
		Sum(int a, int b){
			cout << "\n Sum of 2 numbers is: " << a + b ;
		}
		Sum(int a, int b, int c){
			cout << "\n Sum of 3 numbers is: " << a + b + c ;
		}
		Sum(int a, int b, int c, int d){
			cout << "\n Sum of 4 numbers is: " << a + b + c + d;
		}
};

main(){
	Sum first(3, 4) ;
	Sum sec(3, 4, 5) ;
	Sum third(3, 4, 6, 7) ;
	
}
