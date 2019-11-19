#include<iostream>
#include <conio.h>
using namespace std;
class dist;
class distance
{
	int meter;
	float cm;
	public:
	  distance(int m, float c)
		{
			meter=m;
			cm=c;
		}
		int getmeter()
		{
			return meter;
		}
		float getcm()
		{
				return cm;
		}
};
class dist
{
int feet,inch;
public:
	dist()
	{
	feet=inch=0;
	}
	dist(int f,int i)
	{
	feet=f;
	inch=i;
	}
	dist(distance d)
	{
	
	int m;
	float c;
	m=d.getmeter();
	c=d.getcm();
	feet=m*3.3;
	inch=c*0.4;
	feet=feet+inch/12;
	inch=inch % 12;
	}
void display()
{
cout<<feet<<"feet"<<inch<<"inch";
}
};
main()
{
distance d1(6,40);
dist d2=d1;
d2.display();
}
