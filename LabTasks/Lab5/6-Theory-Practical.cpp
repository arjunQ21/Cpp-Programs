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
//		virtual void showMarks
};
class Theory : virtual public Student{
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
class Practical : virtual public Student{
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
	R.showRoll() ;
	//Showing marks in theory and practical
	R.Theory::showMarks() ;
	R.Practical::showMarks() ;
	R.showTotal() ;
}
