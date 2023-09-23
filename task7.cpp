#include<iostream>
using namespace std;
main(){
string mn;
cout<<"Enter the movie name: ";
cin >>mn;
int adp;
cout<<"Enter the adult ticket price: $";
cin >> adp;
int ctp;
cout<<"Enter the child ticket price: $";
cin >>ctp;
int ats;
cout<<"Enter the number of adult tickets sold: ";
cin >>ats;
int cts;
cout<<"Enter the number of child tickets sold: ";
cin >> cts;
int dc;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin >>dc;
int tag;
tag=(adp*ats)+(ctp*cts);
float dtc;
dtc=(dc*0.01)*tag;
float ra;
ra=tag-dtc;
cout<<endl;
cout<<"Movie: "<<mn<<endl;
cout<<"Total amount generated from ticket sales: $"<<tag<<endl;
cout<<"Donation to charity ("<<dc<<"%): $"<<dtc<<endl;
cout<<"Remaining amount after donation: $"<<ra<<endl;
 
}