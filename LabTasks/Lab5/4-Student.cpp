#include <iostream>

using namespace std ;

class Student{
	protected:
		int roll ;
	public:
		void setRoll(int a){
			roll = a ;
		}
		void showRoll( ){
			cout << "\nRoll No: " << roll ;
		}		
};
class Test : public Student
{
	protected:
		int sub1, sub2 ;
	public:
		void setMarks(int s1, int s2){
			sub1 = s1 ;
			sub2 = s2 ;
		}
		void showMarks(){
			cout << "\nMarks: Sub1: " << sub1 << ", Sub2: " << sub2 ;
		}		
};

class Sport{
	protected:
		int sportsScore ;
	public:
		void setScore( int s ){
			sportsScore = s ;
		}
		void showScore(){
			cout << "\nScore in Sports: " << sportsScore ;
		}
};

class Result : public Test, public Sport{
	int total ;
	public:
		void showDetails(){
			total = sub1 + sub2 + sportsScore ;
			cout << "Details: \nRoll: "<< roll <<", Sub1: " << sub1 << ", Sub2: " << sub2 << ", Sports: " << sportsScore <<  ", Total: " << total ;
		}
};

main(){
	Result R ;
	R.setRoll(11) ;
	R.setMarks(56, 72) ;
	R.setScore(89) ;
	R.showDetails() ;
}








