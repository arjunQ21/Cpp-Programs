#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std ;

main(){
	srand(time(NULL)) ;
	cout << rand()%100 ;
}
