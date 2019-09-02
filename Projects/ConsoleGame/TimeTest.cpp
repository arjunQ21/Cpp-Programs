#include <iostream>
#include <time.h>

using namespace std ;

main(){
	int i = 0 ;
	
		
	while( i < 10){
		if(clock()%100 == 0){
			cout << clock() << endl ;
			i++ ;
		}
	}
}
