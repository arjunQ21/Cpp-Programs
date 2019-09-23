#include <iostream>

using namespace std ;

class Staff{
	protected:
		string name, address, post ;
	public:
		Staff( string n, string add, string p = "none"){
			name = n ;
			address = add ;
			post = p ;
		}
};
class NonTeaching : virtual public Staff{
	public:
		NonTeaching( string n, string add, string p) : Staff(n, add, p) {
			
		}
};
class Teaching : virtual public Staff{
	protected :
		string dept ;
	public :
		Teaching(string n, string add, string dep) : Staff(n, add){
			dept = dep ;
		}
		void setDept( string d){
			dept = d ;
		}
};
class Admin : public Teaching, public NonTeaching{
	int workingHours ;
	public:
		Admin( string n, string add, string p, int hrs) :Teaching(n, add, "none"),  NonTeaching(n, add, p){
//		Admin( string n, string add, string p, int hrs) :Staff(n, add, p){
			workingHours = hrs ;
		}
		void show(){
			cout << "Details: \nName: " << name << ", Address: " << address << ", Post: " << post << ", Dept: " << dept << ", Working Hours: " << workingHours ;
			 
		}
};

main(){
	Admin A("arjun", "Hemja", "Supervisor", 8) ;
	A.show() ;
}

