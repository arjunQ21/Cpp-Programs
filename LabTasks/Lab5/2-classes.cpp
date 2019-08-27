#include <iostream>

using namespace std ;

class class1{
	protected: 
	int first ;
	public:
		class1( int a){
			first = a ;
		}
};
class class2{
	protected: 
	int second ;
	public:
		class2( int a){
			second = a ;
		}
};
class class3 : public class1, public class2
{
	public:
	class3(int a, int b):class1(a), class2(b) {
		
	}
	void sum(){
		cout << "Sum is: " << first + second ;
	}	
};
main(){
	class3 obj(4, 5) ;
	obj.sum() ;
}
