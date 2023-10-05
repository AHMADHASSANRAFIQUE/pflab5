#include<iostream>
#include<cmath>
using namespace std;
void perp(float dist,float angle);
main(){
	float dist, angle;
	
	cout<< "Enter the distance from the base of the tree (in feet): ";
	cin>>dist;
	cout<< "Enter the angle of elevation (in degrees): ";
	cin>>angle;

	perp(dist, angle);
	
}
void perp(float dist, float angle)
{
	
	float height;
	float y= angle*3.145926535897932384626433832/180;
	height = tan(y) * dist; 	
 	cout<<"The height of the tree is: "<<height<<" feet";
}
