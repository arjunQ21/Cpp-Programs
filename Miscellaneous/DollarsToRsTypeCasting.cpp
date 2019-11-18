#include <iostream>

using namespace std ;

class Dollar{
	public:
	int dollars, cents ;
		Dollar(int d, int c){
			dollars = d ;
			cents = c ;
		}
		void show(){
			cout << "$" << dollars << ", " << cents << "cents " ;
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
//		operator Dollar ( Dollar d){
//			int cents = (rs + paisa / 100 )
//		}
};

main(){
	Dollar dol(4, 5) ;
	Rupees Rs = dol ;
	dol.show() ;
	Rs.show() ;
}
