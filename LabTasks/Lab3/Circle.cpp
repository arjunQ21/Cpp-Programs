#include <iostream>

using namespace std ;

class circle{
	float radius ;
	public:
		void getRadius(){
			cout << "Enter radius: " ;
			cin >> radius ;
		}
		void printArea(){
			cout << "\nArea of circle is: " << 3.14 * radius * radius ;
 		}
};
