#include<iostream>
#include<string>
#include"student.h"
using namespace std;
{
Student X; 
Student Y(X);
X.addCourse (“BSCS 413”); 
cout  << Y.getCourse (0); 
X = Y;
cout<< X; 
cout << Y; 
}