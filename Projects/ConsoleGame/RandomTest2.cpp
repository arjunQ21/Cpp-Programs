#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std ;

main(){
	srand(clock()) ;
	for( int i = 0 ; i <= 10; i++)
	cout << rand() % 5 + 1 << endl ; 
}
