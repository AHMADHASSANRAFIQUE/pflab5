#include<iostream>
using namespace std;

bool number(int num);
main()
{
    int num,result;
    cout<<"Enter a three-digit number: ";
    cin>>num;
    result = number(num);
    if(result == true)
    {
     cout<<"The number is symmetrical.";}
     if(result == false)
      cout<<"The number is not symmetrical.";
     }
    bool number(int num)
    {
    int num1=num%10;
    int num2 = num/100;
        if(num1==num2){
                    return true;
        
    }
    if(num1!=num2){
        return false;
       
    }
    
        
}