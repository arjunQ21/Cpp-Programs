#include <iostream>

using namespace std ;

class first
{
	protected:
	int x, y ;
	public: 
	first(int p, int q){
		x= p ;
		y = q ;
	}
	void show(){
		cout << "\n Numbers = " << x << ", " << y ;
	}	
};

class second : public first
{
	protected :
		int z ;
	public: 
		second(int a): first(a, a+4 )
		// second(int a, int b, int c) : first(a, c){ z = b } ;
		
		{
			z = a + 2 ;	
		}
		void show(){
			cout << "\n Numbers = " << x << ", " << y << ", " << z ;
		}
};

main(){
	second sunil(5) ;
	sunil.second::show() ;
	
}
