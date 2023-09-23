#include<iostream>
using namespace std;
main(){
float iv;
cout<<"Enter Initial Velocity (m/s): ";
cin>>iv;
float acc;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
float t;
cout<<"Enter Time (s): ";
cin>>t;
float fv;
fv=(acc*t)+iv;
cout<<"Final Velocity (m/s): "<<fv;
}