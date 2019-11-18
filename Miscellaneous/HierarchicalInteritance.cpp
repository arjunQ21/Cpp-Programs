#include <iostream>

using namespace std ;

class Person{
	protected:
		string name ;
		int code ;
	public:
		Person(string n, int c): name(n), code(c){
			
		}
		Person(): name("unknown"), code(0000){
			
		}
		void display(){
			cout << "\nPerson Name: " << name << ", code: " << code ;
		}
};
class Account : virtual public Person{
	protected:
		float salary ;
	public:
		Account(string name, int code, float s) : Person(name, code), salary(s){
			
		}
		Account (float s):Person(), salary(s){
		}	
		void display(){
			cout << "\nAccount Salary: " << salary ;
		}
};
class Admin: virtual public Person{
	protected:
		int	experienceYears;
	public:
		Admin(string name, int code, int yrs): Person(name, code), experienceYears(yrs) {
			
		}	
		Admin(int yrs):Person(), experienceYears(yrs) {
		}
		void display(){
//			Person::display() ;
			cout << "\nAdmin's years of experience: " << experienceYears ;
		}
};
class Record: public Admin, public Account{
	protected:
		int recordNo;
	public: 
//		Record(string name, int code, float salary, int yrs, int recNo):Person(name , code), Admin(name, code, yrs), Account(name, code, salary){
//			recordNo = recNo ;
//		}
		Record(string name, int code, float salary, int yrs, int recNo):Person(name, code), Account(salary), Admin(yrs) {
			recordNo = recNo ;
		}
		void display(){
			Person::display() ;
			Account::display() ;
			Admin::display() ;
			cout << "\nRecord No: " << recordNo ;
		}
};

main(){
	Record This("arjun", 45, 567, 3, 890) ;
//	This.display() ;
	Admin admin(5) ;
	admin.display() ;
}
