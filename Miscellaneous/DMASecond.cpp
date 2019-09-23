#include <iostream>

using namespace std ;

main(){
	int *p = new int ;
	*p = 10 ;
	cout << *p << endl;
	int *arr = new int[*p] ;
	*(arr + 3) = 67 ;
	cout << arr[3] << endl << sizeof(arr);
	delete p ;
	delete[] arr ;
}
