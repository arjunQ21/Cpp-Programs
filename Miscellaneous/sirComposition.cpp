#include <iostream>

using namespace std ;

class A
{
int x;
public:
A()
{
x=1;
}
void dispaly1(){
cout<<x;
}
};
class B
{
int y;
A a; //Object of Class A declared in class B
public:
B() //Constructor Class B
{
y=9;
}
void display2()
{
a.dispaly1 (); //Calling member of Class A from member of B
cout<<y;
}
};
int main()
{
B b; //object of class B
b.display2();
}

