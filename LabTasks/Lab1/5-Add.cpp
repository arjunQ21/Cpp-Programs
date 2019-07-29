#include <iostream>

using namespace std ;

void add(int a, int b){
	cout << "Sum is: " << a + b ;
}

main(){
	int a, b ;
	cout << "Enter 2 numbers: " ;
	cin >> a >> b ;
	add(a, b);
}
