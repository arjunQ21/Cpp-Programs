#include <iostream>

using namespace std ;

class Student{
	protected:
		int roll ;
	public:
		void setRoll( int r){
			roll = r ;
		}	
		void showRoll(){
			cout << "\nRoll No.: " << roll ;
		}
};
class Theory : public Student{
	protected:
		float sub1, sub2 ;
	public:
		void setMarks( float s1, float s2){
			sub1 = s1 ;
			sub2 = s2 ;
		}
		void showMarks(){
			cout << "\nMarks in Theory => Sub1: " << sub1 << ", Sub2: " << sub2 ;
		}
};
class Practical : public Student{
	protected:
		float sub1, sub2 ;
	public:
		void setMarks( float s1, float s2){
			sub1 = s1 ;
			sub2 = s2 ;
		}
		void showMarks(){
			cout << "\nMarks in Practical => Sub1: " << sub1 << ", Sub2: " << sub2 ;
		}
};
class Result : public Theory, public Practical{
	public: 
	//	overriding setRoll methods, derived from Theory and Practical
		void setRoll( int a){
			Theory::setRoll(a) ;
			Practical::setRoll(a) ;
//			roll = a ; // invalid, because there are 2 roll, one from theory and one from practical, so its ambigious

		}
		void showTotal(){
			cout << "\nTotal Marks => Sub1: " << Theory::sub1 + Practical::sub1 << ", Sub2: " << Theory::sub2 + Practical::sub2 ;
		}
};

main(){
	Result R ;
	//sets roll no. of both theory and practical to 11
	R.setRoll(11) ;
	//setting theory marks in 2 subs
	R.Theory::setMarks(29, 32) ;
	//setting practical marks in 2 subs
	R.Practical::setMarks(32, 29) ;
	//showing roll no from theory class
	//it can be shown from Practical class too, since it has been set for both classes in setRoll method of Result class.
	R.Theory::showRoll() ;
	//Showing marks in theory and practical
	R.Theory::showMarks() ;
	R.Practical::showMarks() ;
	R.showTotal() ;
}
