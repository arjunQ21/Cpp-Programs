#include <iostream>

using namespace std ;

class Dollar{
	public:
		float dollars ;
		Dollar(float d){
			dollars = d ;
		}
		void show(){
			cout << "$" << dollars ;
		}
		
};
class Rupees{
	public:
		float rs;
		Rupees( Dollar d){
			rs = d.dollars * 100 ;
		}
		void show(){
			cout << "Rs." << rs << endl;
		}
};

main(){
	Dollar dol(4.5) ;
	Rupees Rs = dol ;
	Rs.show() ;
}
