#include<iostream>
using namespace std;
float min(float num1,float num2);
main(){
	float num1,num2,result;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	result = min(num1,num2);
	cout<<"The minimum of "<<num1<<" and "<<num2<<" is: "<<result;
}
float min(float num1,float num2){
	if(num1<num2){
		return num1;
	}
	if(num2<num1){
		return num2;
	}
}
