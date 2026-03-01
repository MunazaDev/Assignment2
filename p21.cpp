#include <iostream>
using namespace std;
main() {
int t_kgV, t_kgF;
float Vpk, Fpk;
float coins,RS;
cout<<"Vegetables price per kg";
cin >>Vpk;
cout<<"Fruits price per kg";
cin >>Fpk;
cout<<" Total kilograms vegetables";
cin >> t_kgV;
cout<<"Total kilograms fruits";
cin >> t_kgF;
coins= Vpk*t_kgV+Fpk*t_kgF;
RS=coins/1.94;
cout<<" the RS is"<<RS;

}