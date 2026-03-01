#include <iostream>
using namespace std;
main () {
cout<<"Enter your Name:";
string Name;
cin>> Name;
cout<<"Enter matric marks:";
int matricmarks;
cin>> matricmarks;
cout<<"Enter intermediate marks:";
int intermediatemarks;
cin>> intermediatemarks;
cout<<"Enter ecat score:";
int ecatscore;
cin>> ecatscore;
float Aggregate;
Aggregate= matricmarks/1100*10/100+intermediatemarks/1200*40/100+ecatscore/400*50/100;
cout<<"The Aggregate is"<<Aggregate;


}

