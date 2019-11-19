#include <iostream>

using namespace std ;

main(){
	int n ;
	cout << "how many 1's do u want to see ?" ;
	cin >> n ;
	int* ptr = new(nothrow) int[n] ;
	if(!ptr){
		cout << "\nSome error occurred while allocating memory." ;
	}else{
		for( int i = 0 ; i < n ; i++){
			ptr[i] = i ;
			cout << ptr[i] << endl ;
		}
	}
//	main() ;
}
