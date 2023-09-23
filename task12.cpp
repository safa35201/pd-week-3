#include<iostream>
using namespace std;
main(){
int n;
cout<<"Number of square meters you can paint: ";
cin>>n;
int w;
cout<<"Width of the single wall (in meters): ";
cin>>w;
int h;
cout<<"Height of the single wall (in meters): ";
cin>>h;
int x;
x=n/(w*h);
cout<<"Number of walls you can paint: "<<x;
}