#include <iostream>

using namespace std ;

class Student{
	protected:
		string name ;
		int roll ;
	public:
		Student( string n, int rollno){
			name = n ;
			roll = rollno ;
		}
};
class Marks{
	protected:
		int oop, pm, bc, acc, fin ;
	public:
		void setMarks(int oopM, int pmM, int bcM, int accM,int finM){
			oop = oopM ;
			pm = pmM ;
			bc = bcM ;
			acc = accM ;
			fin = finM ;
		}
};
class Result : public Student, public Marks{
	int total ;
	float percentage ;
	void calculate(){
		total = oop+ pm+ bc+ acc+ fin ;
		percentage = total / 5 ;
	}
	public:
		void display(){
			calculate() ;
			cout << "Name: " << name << ", roll: "<< roll << ", Total: " << total << ", Percentage: " << percentage ;
		}
		Result(string name, int roll) : Student(name, roll){
			
		}
		
};

main(){
	Result R("arjun", 11) ;
	R.setMarks(89, 89, 34, 34, 34 ) ;
	R.display() ;
}













