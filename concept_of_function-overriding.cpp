//Program to demonstrate the concept of function overriding in c++
#include<iostream>
using namespace std;
class Parent{ //Creating class
	public:
		 virtual void get_data(){ //Function
		cout<<"This is a Parent class: "<<endl;
		}
};
class child:public Parent{
	public:
		void get_data() override{
		cout<<"This is a child class: "<<endl;
		}
};
 int main(){
 child obj; //Creating object for class child.
 obj.get_data();
  return 0;
 }
 
