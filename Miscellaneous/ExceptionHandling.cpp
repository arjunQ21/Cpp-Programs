#include <iostream>

using namespace std ;

class Divide{
	float num ;
	float den ;
	public:
		class ByZero{
		
		};
		class LessThanOne{
			
		};
		Divide( float a, float b){
			num = a; 
			den = b ;
		}
		Divide(){ }
		void takeData(){
			cout << "\nEnter Numerator and den.: " ;
			cin >> num >> den ;
		}
		float divide(){
			if(den > num) throw LessThanOne() ;
			if(den == 0) throw ByZero() ;
			return num / den ;
		}
};
main(){
	Divide Division ;
	while(1){
		try{
			Division.takeData() ;
			cout << "\n = " << Division.divide() ;				
		}catch(Divide::ByZero){
			cout << "\n Cant divide by 0." ;
			break ;
		}catch(Divide::LessThanOne){
			cout << "\n Result will be less than 1." ;
			break ;
		}
	}
	for(int i = 0 ; i < 5 ; i++){
		cout << "\nwe still keep running." ;
	}
}



