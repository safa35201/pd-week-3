#include<iostream>
using namespace std;
main(){
int x;
cout<<"Enter a 4-digit number: ";
cin>>x;
int num1;
num1=x%10;
int numA;
numA=x/10;
int num2;
num2=numA%10;
int numB;
numB=numA/10;
int num3;
num3=numB%10;
int numC;
numC=numB/10;
int num4=numC%10;
int sum;
sum=num1+num2+num3+num4;
cout<<"Sum of the individual digits: "<<sum;

}
