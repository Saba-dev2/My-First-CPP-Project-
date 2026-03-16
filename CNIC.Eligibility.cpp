#include<iostream>
using namespace std;

int main(){
   string name;
   int age;
   int years;
   cout<<"Enter Your Name:";
   cin>>name;
   cout<<"Enter Your Age:";
   cin>>age;
   if(age<0){
   cout<<"Invalid Age!";
   }
   else if(age>=18){
   cout<<name<<",You're Eligible for CNIC";
   }
   else {
   years=18-age;
   cout<<"Total Years remaining for CNIC "<<years;
   }
    return 0;
}
