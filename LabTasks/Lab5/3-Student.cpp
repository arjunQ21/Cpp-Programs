#include <iostream>

using namespace std ;

class Student{
	protected:
		int roll ;
	public:
		void setRoll(int a){
			roll = a ;
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
};

class Result : public Test{
	int total ;
	public:
		void showDetails(){
			total = sub1 + sub2 ;
			cout << "Details: \nRoll: "<< roll <<", Sub1: " << sub1 << ", Sub2: " << sub2 << ", Total: " << total ;
		}
};

main(){
	Result R ;
	R.setRoll(11) ;
	R.setMarks(56, 72) ;
	R.showDetails() ;
}









