#include <iostream>
using namespace std ;
class Sample2 ;
class Sample1
{
	int a ;
	public:
		void read(){
			cout << "\nEnter a number: " ;
			cin >> a ;
		}
		void show(){
			cout << "\nValue in Sample1: " << a ;
		}
		friend void swap(Sample1 *, Sample2 *) ;
};
class Sample2
{
	int a ;
	public:
		void read(){
			cout << "\nEnter a number: " ;
			cin >> a ;
		}
		void show(){
			cout << "\nValue in Sample2: " << a ;
		}
		friend void swap(Sample1 *, Sample2 *) ;
};
void swap( Sample1 * a, Sample2 * b){
	int temp = a->a ;
	a->a = b->a ;
	b->a = temp ;
	cout << "\nSwapped." ;
}
main(){
	Sample1 x ;
	Sample2 y ;
	x.read() ;
	x.show() ;
	y.read() ;
	y.show() ;
	swap(&x, &y) ;
	x.show() ;
	y.show() ;
}
