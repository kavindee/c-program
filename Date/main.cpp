#include<iostream>
#include"Date.h"
using namespace std;

 int main(){
 Date d1; //create object

//create variables
 int d_day;
 int m_month;
 int y_year;

//get user inputs
 cout<<"input Day: ";
 cin>>d_day;
 cout<<"input month: ";
 cin>>m_month;
 cout<<"input year: ";
 cin>>y_year;

//pass values
 d1.setDay(d_day);
 d1.setMonth(m_month);
 d1.setYear(y_year);

 cout<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear()<<endl;

return 0;
 }