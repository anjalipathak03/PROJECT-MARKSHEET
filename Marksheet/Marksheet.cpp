#include <iostream>
#include <iomanip>
#include <string.h>
#include<graphics.h>
using namespace std;
class student{
    int i;
public:
    const char* sub[25]={"Signal and System" ,"Object Oriented Programming","Software Engineering","Finite Language & automata Theory","Database Management System" };
    int midmarks[5];
    int finalmarks[5];
    int total[5];
    string name;
    int roll_no;
    student(){
        cout<<"Enter Student's Name: "<<endl;
        getline(cin,name);
        cout<<"Enter Roll No: "<<endl;
        cin>>roll_no;
        for(int i=0;i<5;i++){
            cout<<"Enter midterm marks for: "<<sub[i]<<"(out of 30):"<<endl;
            cin>>midmarks[i];
        }
        for(int i=0;i<5;i++){
            cout<<"Enter final marks for: "<<sub[i]<<"(out of 70):"<<endl;
            cin>>finalmarks[i];
        }
        for(int i=0;i<5;i++){
            total[i]=midmarks[i]+finalmarks[i];
        }
    }
};
class display:public student{
    public:
    void header(){
        cout<<"\n\nResult"<<endl;
        cout<<"\t\t\t\tSNDT WOMEN'S UNIVERSITY ,MUMBAI-400049"<<endl;
        cout<<"\t\t\t\t Bachelor Of Technology -Semester V"<<endl;
        cout<<"\t\t\t\t Computer Science & Technology\n" <<endl;
        cout<<"\tName: "<<name<<"\t\t\t\t"<<"Roll No: "<<roll_no<<endl;
        cout<<"\tSubject\t\t\t\t\t\t\tMidterm marks\tFinal Marks\t\tTotal Marks"<<endl;
}
void marks_det(){
        for(int i=0;i<5;i++){
            cout<<setfill(' ')<<left<<setw(33)<<sub[i]<<"\t\t"<<midmarks[i]<<"\t\t\t\t"<<finalmarks[i]<<"\t\t\t\t"<<total[i]<<endl;
           
        }
}
void login(){
     cout<<"Please Login"<<endl;
    string id="Siddhi";
    int password=123456;
    string id1;
    int pass;
    cout<<"Enter your login Id"<<endl;
    cin>>id1;
   for(int i=1;i<10;i++) {
       if(id==id1){
       
        cout<<"Enter Password: "<<endl;
         
        cin>>pass;
       
        if(pass==password){
        cout<<"Login Successful"<<endl;
       
       break;
    }
    else if(pass!=password){
        cout<<"Enter Correct Password"<<endl;
    cin>>pass;
     if(pass==password){
        cout<<"Login Successful"<<endl;
       
        
       break;
    }
       
    }
   
    }
    else{
        cout<<"Enter correct id"<<endl;
        cin>>id1;
       
    }
   }
}
void result_grace(){
    int grace[5];
    for(int i=0;i<5;i++){
    if(total[i]<40 && total[i]>35){
        cout<<"Give grace marks to " <<sub[i]<<"(Marks= "<<total[i]<<")"<<endl;
       
        cin>>grace[i];
    }
   
   }
int gtotal[5];
 for(int i=0;i<5;i++){
     if(total[i]<40 && total[i]>35){
 gtotal[i]=total[i]+grace[i];
         
     }
 else{
     gtotal[i]=total[i];
 }
     
 }
 display::header();
        for(int i=0;i<5;i++){
        
cout<<setfill(' ')<<left<<setw(33)<<sub[i]<<"\t\t"<<midmarks[i]<<"\t\t\t\t"<<finalmarks[i]<<"\t\t\t\t"<<gtotal[i]<<endl;
}
float sum = 0;
float p;
for(int i=0;i<5;i++){
   sum = sum+gtotal[i];
 
   }
    p =sum/5;
 
  cout<<"Grand Total: "<<sum<<"\t\t\t"<<"Percentage: "<<p<<"\t\t";
   if(p<=100 && p>=90){
            cout<<"Grade: O+";
           
            }
            else if(p<=89.99 && p>=79){
            cout<<"Grade: O";
         
            }
            else if(p<=79.99 && p>=70){
            cout<<"Grade: A+";
           
            }
            else if(p<=69.99 && p>=60){
            cout<<"Grade: A";
           
            }
            else if(p<=59.99 && p>=55){
            cout<<"Grade: B+";
           
            }
            else if(p<=54.99 && p>=50){
            cout<<"Grade: B";
           
            }
            else if(p<=49.99 && p>=45){
            cout<<"Grade: C";
           
            }
            else if(p<=44.99 && p>=40){
            cout<<"Grade: P";
           
            }
            else{
            cout<<"Grade: F";
           
            }
}
};
class grace: public student{
public:
grace(){
for(int i=0;i<5;i++){
    if(total[i]>=40){
        break;
    }
    else if(total[i]<40 && total[i]>35){
       
        cout<<"\nAdmin can give grace marks to " <<sub[i]<<"(Marks= "<<total[i]<<")"<<endl;
     
         }
     }
}
};
class result_grace:public grace{
public:
int grace[5];
};
 
  int main(){
      display dis;
      dis.header();
      dis.marks_det();
      dis.login();
      dis.result_grace();    
      return 0;
}
