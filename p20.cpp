#include <iostream>
using namespace std;
main() {
string name;
int adult,child;
int a_ticket,c_ticket;
float percentage;
int totalprice;
float charity;
int remaining;
cout<<"enter the movie name";
cin >> name;
cout<<" enter the price of adult ticket";
cin >> adult;
cout<<" enter the price of child ticket";
cin >> child;
cout<< " adult tickets sold";
cin >> a_ticket;
cout<<" child tickets sold";
cin >> c_ticket;
cout<<" % to donate for charity";
cin >> percentage;
totalprice= adult*a_ticket+child*c_ticket;
charity= totalprice*percentage/100;
remaining=totalprice-charity;
cout<<"the totalprice is"<<totalprice;
cout<<" the charity is"<<charity;
cout<<"the remaining is"<<remaining;  }

