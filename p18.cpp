#include <iostream>
using namespace std;
main() {
int min,fps,frames;
cout<<"Enter the length of video in mins";
cin >> min;
cout<<"Enter the frames per second";
cin >> fps;
frames=fps*60*min;
cout<<"The frames are"<<frames;

}