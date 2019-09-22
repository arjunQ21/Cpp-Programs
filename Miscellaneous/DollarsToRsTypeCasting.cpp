#include <iostream>

using namespace std ;

class Dollar{
	public:
	int dollars, cents ;
		Dollar(int d, int c){
			dollars = d ;
			cents = c ;
		}
		
};
class Rupees{
	public:
		int rs, paisa ;
		Rupees( Dollar d){
			paisa = 0 ;
			rs = d.dollars * 100 + d.cents ;
		}
		void show(){
			cout << "Rs: " << rs << ", Paisa: " << paisa <<endl;
		}
};

main(){
	Dollar dol(4, 5) ;
	Rupees Rs = dol ;
	Rs.show() ;
}
