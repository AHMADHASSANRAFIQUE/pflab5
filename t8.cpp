#include<iostream>
using namespace std;

int number(int num,int num1,int num2,int num3,int num4,int num5);
main()
{
    int num,num1,num2,num3,num4,num5,result;
    cout<<"Enter a five-digit number: ";
    cin>>num;
    result = number(num,num1,num2,num3,num4,num5);
    if(result == 1)
    {
     cout<<"Oddish";}
     if(result == 2)
      cout<<"Evenish";
     }
    int number(int num,int num1,int num2,int num3,int num4,int num5)
    {
    int sum,rem;
    num1=num%10;
     num = num/10;
    num2=num%10;
     num = num/10;
    num3=num%10;
     num = num/10;
    num4=num%10;
     num = num/10;
    num5=num%10;
    sum = num1+num2+num3+num4+num5;
    rem = sum%2;
            if(rem==1){
                    return 1;
            }
    if(rem==0){
        return 2;
       
    }
    
        
}