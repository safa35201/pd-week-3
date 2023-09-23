#include<iostream>
using namespace std;
main()
{
float vp;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vp;
float fp;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fp;
int tv;
cout<<"Enter total kilograms of vegetables: ";
cin>> tv;
int tf;
cout<<"Enter total kilograms of fruits: ";
cin>>tf;
float veg;
veg=(vp/1.94)*tv;
float fruit;
fruit=(fp/1.94)*tf;
float total;
total=veg+fruit;
cout<<"Total earnings in Rupees (Rps): "<<total;

}