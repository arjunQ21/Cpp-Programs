#include <iostream>
#include <conio.h>
using namespace std ;
class Time
{
int hrs,min;
public:
Time(int ,int); // constructor
operator int(); // casting operator function
};
Time::Time(int a,int b)
{
cout<<"Constructor called with two parameters..."<<endl;
hrs=a;
min=b;
}
Time :: operator int() // overload casting operator
{
cout<<"Class Type to Basic Type Conversion..."<<endl;
return(hrs*60+min);
}
main()
{
//clrscr();
int h,m,duration;
cout<<"Enter Hours ";
 cin>>h;
cout<<"Enter Minutes ";
 cin>>m;
Time t(h,m); // construct object
duration = t; // casting conversion
// OR duration = (int)t
cout<<"Total Minutes are "<<duration;
 getch();
}
