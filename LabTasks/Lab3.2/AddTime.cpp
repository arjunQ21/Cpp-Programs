#include <iostream>

using namespace std ;

class Time
{
	int hr, min, sec ;
	public:
		void read(){
			cout << "\nEnter time, Hours: " ;
			cin >> hr ;
			cout << "Minutes: " ;
			cin >> min ;
			cout << "Seconds: " ;
			cin >> sec ;
		}
		void show( std::string prependMessage = std::string("")){
			cout << endl << prependMessage << "Time => " << hr << ":" << min << ":" << sec ;
		}
		void set( int h, int m, int s){
			hr = h ;
			min = m ;
			sec = s ;
			show("Set New ") ;
		}
		friend void addTimes(Time, Time) ;
};

void addTimes( Time a, Time b){
	int carryFromSec , carryFromMin ;
	int h, m, s ;
	s = (a.sec + b.sec ) % 60 ;
	carryFromSec = (a.sec + b.sec) / 60 ;
	m = (carryFromSec + a.min + b.min ) % 60 ;
	carryFromMin = (carryFromSec + a.min + b.min ) / 60 ;
	h = (carryFromMin + a.hr + b.hr ) ;
	Time sum ;
	sum.set(h, m, s) ;
	sum.show("Added ") ;
}

main(){
	Time first , second ;
	first.read() ;
	first.show("First ") ;
	second.read() ;
	second.show("Second ") ;
	cout << "\nAdding Times: " ;
	addTimes(first, second ) ;
	main() ;
}
