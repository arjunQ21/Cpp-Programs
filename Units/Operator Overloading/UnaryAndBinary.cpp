#include <iostream>

using namespace std ;

class Counter{
	int count ;
	public:
		Counter(){
			count = 0 ;
		}
		Counter (int a){
			count = a ;
		}
		Counter operator ++ (){
			return Counter(++count) ;
		}
		Counter operator ++ (int){
			return Counter(count++) ;
		}
		Counter operator + ( Counter a){
			return Counter(count = count + a.count) ;
		}
//		Counter operator = ( Counter a){
//			count = a.count ;
//		}
		void show(){
			cout << "\nCount: " << count ;
		}
};
main(){
	Counter first ;
	++first ;
	first ++ ;
	first.show() ;
	Counter Second ;
	Second = first + 2;
	Second.show() ;
	
	
	
	
}
