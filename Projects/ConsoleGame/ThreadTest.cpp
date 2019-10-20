#include <iostream>
#include <thread>

using namespace std ;

void show1(){
	for(int i = 0 ; i <= 30; i++)
	cout << 1 ;
//	this_thread::sleep_for(100) ;
}
void show0(){
}

main(){
	thread first(show1) ;
//	thread second(show1) ;
	
	for(int i = 0 ; i <= 30; i++)
	cout << 0 ;
	first.join() ;
//	second.join() ;
	cout <<"\nEnded" ;
}


