#include "NODE.h"
#include <iostream>
#include<cstdlib>
using namespace std;

class MU_person:public NODE{
private: 

protected:
  long id;
	std::string name;
public:
	MU_person(long=123 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,std::string n):NODE(x){
   	id=x;
    name=n;
    cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show info of Student"<<endl;
  cout<<"ID: "<<id<<endl;
  cout<<"Name: "<<name<<endl;
}
