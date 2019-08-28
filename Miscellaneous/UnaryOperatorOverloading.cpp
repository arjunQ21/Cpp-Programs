#include <iostream>

using namespace std ;

class index{
	public:
		int count ;
		void getdata( int i){
			count = i ;
		}
		void show(){
			cout << "count = " << count ;
		}
		void operator ++() {
			count -- ;
		}
};
main(){
	index i ;
	i.getdata(5) ;
	i.show() ;
	++i ;
	i.show() ;
}
