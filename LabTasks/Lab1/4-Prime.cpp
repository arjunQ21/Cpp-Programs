#include <iostream>

using namespace std ;

void add(int a, int b){
	cout << "Sum is: " << a + b ;
}

main(){
	int a;
	cout << "Enter a number: " ;
	cin >> a ;
	int i ; 
	for( i = 2 ; i < a ; i++){
		if(a%i == 0){
			break ;
		}
	}
	if( i == a){
		cout << "\nPrime Number." ;
	}else{
		cout << "\nNot a prime Number." ;
	}
}
