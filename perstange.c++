#include<iostream>
using namespace std;

struct gradesystem {
   string stdname;
   double OPP;
   double Isl;
   double DS;
   double Eng;
   double accounting;

};
 void Studentgrade ( string stdname, double c1 , double c2 , double c3 , double c4, double c5) {
    double obtainedmarks = c1+c2+c3+c4+c5;
    double totalmarks= 500;

    cout<< "============================================" <<endl;
   
    cout<<"Obtained marks: "<<obtainedmarks<<endl;
   
   
     double persentage = (obtainedmarks/totalmarks)*100;
      cout<<"percentage: "<<persentage<<"%"<<endl;
    if(persentage>=50) {
        cout<<"PASS"<<endl;
    } else {
        cout<<"FAIL"<<endl;
    }
    cout<< "============================================" <<endl;
    
}
    




 

 int main()
 {  
   gradesystem student;

       cout<< "============================================" <<endl;
    cout<< "Student Name: "<<endl;
    cin>>student.stdname;
    cout<< " Course: 05"<<endl;
    cout<<"============================================" <<endl;
    cout<< "OPP  "<<endl;
    cin>>student.OPP;
    cout<< "Isl  "<<endl;
    cin>>student.Isl;
    cout<< "DS  "<<endl;
    cin>>student.DS;
    cout<< "Eng  "<<endl; 
    cin>>student.Eng;
    cout<< "Finiancial Accounting  "<<endl;
    cin>>student.accounting;

   Studentgrade(
    student.stdname,
   student.OPP,
   student.Isl,
   student.DS,
   student.Eng,
   student.accounting); 
  return 0;

 }




