#include<iostream>
using namespace std;
main(){
int n;
cout<<"Enter the number of sides opf polygon: ";
cin>>n;
int x;
x=(n-2)*180;
cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<x<<" degrees";
}