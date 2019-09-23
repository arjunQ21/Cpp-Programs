#include <iostream>

using namespace std ;

class stringTest{
	string name, addr ;
	public:
		set(){
			cout << "enter: " ;
			cin >> name >> addr ;
		}
		show(){
			cout << "Name: " << name << ", addr: " << addr ;
 		}
};
main(){
//	try{
		
	stringTest str ;
	str.set() ;
	str.show() ;
//	}catch(  )
}
