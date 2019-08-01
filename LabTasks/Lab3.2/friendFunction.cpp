#include <iostream>

using namespace std ;

class abc ;

class xyz {
	int n ;
	public: 
	
	friend void max( xyz x, abc a) ;
	void show(){
		cout << "XYZ wala, n = " << n << endl ;
	}
	void read(){
		cout << "etner 1 number: " ;
		cin >> n ;
	}	
};

class abc{
	int n ;
	public: 
	friend void max( xyz x, abc a) ;
	void read(){
		cout << "etner 1 number: " ;
		cin >> n ;
	}
};

void max( xyz x, abc a){
	int max ; 
	x.show() ;
	if(x.n > a.n ){
		max = x.n ;
	}else{
		max = a.n ;
	}
	cout << "Max is: " << max ;
}

main()
{
	cout << "hi";
	xyz first ;
	abc sec ;
	first.read();
	sec.read() ;
	max(first, sec ) ;
}
