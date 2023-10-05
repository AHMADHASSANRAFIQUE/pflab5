#include<iostream>
#include<cmath>
using namespace std;
void disc(float a,float b,float c);
main(){
	float a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	disc(a,b,c);
}
void disc(float a,float b,float c){
	float root1;
	float root2;
	float result;
	float i1;
	float i2;
	float disc = (b*b)-4*a*c;
	if (disc > 0)
	{	
		root1 = (-b+sqrt(disc))/(2*a);
		root2 = (-b-sqrt(disc))/(2*a);
		cout<<"Solutions: x = "<<root1<<" and x = "<<root2;
	}
	
	if(disc == 0){
		root1 = -b/(2*a);
		cout<<"Solution: x = "<<root1;
	}
	if(disc < 0){
		root1 = (-b)/(2*a);
		i1 = (sqrt(-disc))/(2*a);
		root2 = (-b)/(2*a);
		i2 = (sqrt(-disc))/(2*a);
		cout<<"Complex Solutions: x = "<<root1<<" + "<<i1<<"i and x = "<<root2<<" - "<<i2<<"i";
	}
}
