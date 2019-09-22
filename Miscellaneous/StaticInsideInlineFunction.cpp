#include <iostream>

using namespace std ;

inline int incremented( int a){
	static int last = 0 ;
	cout << ", last = " << last << endl ;
	return ( a + ++last ) ;
}

main(){
	for(int i = 0 ; i <= 5 ; i++){
		cout << incremented(0) ;
	}
}
