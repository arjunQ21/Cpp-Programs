#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>

using namespace std ;

int interval = 800 ;

char readInput(){
	cout << "\nEnter Input Character: " ;
	return getch() ;
}

void showInput( char a){
	cout << "\nINPUT = '" << a << "'.\n" ;
}

main(){
	int i ;
	char a = 'g' ;
	while(1){
		if(clock() % 2000 == 0){
			system("CLS") ;
			showInput(a) ;
			a = readInput() ;
		}
	}
}
