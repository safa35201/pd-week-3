#include<iostream>
using namespace std;
main(){
float s;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>> s;
float c;
cout<<"Enter the cost of the bag: $";
cin>>c;
float a;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>a;
float x;
x=c/s;
float y;
y=c/a;
cout<<"Cost of fertilizer per pound: $"<<x<<endl;
cout<<"Cost of fertilizing per square foot: $"<<y;
}