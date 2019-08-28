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
			//can be any operation, not only ++
			//can be no operation at all too
			//its like calling this function only, we can do anything here
		}
};
main(){
	index i ;
	i.getdata(5) ;
	i.show() ;
	++i ;
	i.show() ;
}
