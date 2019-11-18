#include <iostream>

using namespace std ;

class Divide{
	float num ;
	float den ;
	public:
		Divide(){ }
		void takeData(){
			cout << "\nEnter Numerator and den.: " ;
			cin >> num >> den ;
		}
		float divide(){
			if(den > num) throw 1.3 ;
			if(den == 0) throw 0 ;
			return num / den ;
		}
};
main(){
	Divide Division ;
	while(1){
		try{
			Division.takeData() ;
			cout << "\n = " << Division.divide() ;				
		}catch(int){
			cout << "\n Cant divide by 0." ;
			break ;
		}catch(double){
			cout << "\n Result will be less than 1." ;
			break ;
		}
	}
	for(int i = 0 ; i < 5 ; i++){
		cout << "\nwe still keep running." ;
	}
}



