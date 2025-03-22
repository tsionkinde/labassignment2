
#include<iostream>
using namespace std;
namespace tsi{//namesapce
    string kin(){
        return "tsion kinde ";
    }
}
int add(int x,int y){
    return x+y;}
int add(int x,int y,int z){
        return x+y+z;}

int add(double x,double y,double z){//overloaded functions
    return x+y+z;
} //struct
struct student{
    string name;
    double gpa;
    bool isenrolled;};
    //template
template<typename thename> 
thename add(thename x,thename y,thename z,thename m) {
    return x+y+z+m;

}




int main(){
    cout<<add(1,2,3)<<endl;
    cout<<add(2.4,2.5,3.5)<<endl;
    student student1;
    student student2;
    student1.name="Haile";
    student1.gpa=3.5;
    student1.isenrolled=true;
    cout<<student1.name<<endl;
    cout<<student1.gpa<<endl;
    cout<<student1.isenrolled<<endl;
    student2.name="Selam";
    student2.gpa=3.8;
    student2.isenrolled=true;
    cout<<student2.name<<endl;
    cout<<student2.gpa<<endl;
    cout<<student2.isenrolled<<endl;
    cout<<add(3,5,1,6)<<endl;
    cout<<tsi::kin()<<endl;
    return 0;

}


