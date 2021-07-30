//C++ Program to assign data to members of a structure variable and display it.
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct student{     //structure
string RollNumber;
int PFScore;
};
int main()// this is the main function
{
    int a, b;
    student student1, student2, student3;
    student1 = {"0",0};
    student2 = {"0",0};
    student3 = {"0",0};

cout<<setw(50)<<"\n*******MAIN MENU******"<<endl;

Start:
    cout<<"\t Press 1 to Enter Student Record\n";
    cout<<"\t Press 2 to Display Student Record\n";
    cout<<"\t Press 3 to Exit\n";
    cout<<"\t Enter your choice :";
    cin>>a;

    switch(a){
case 1:
    A:
    cout<<"\t Press 1 for 1st Student Record\n";
    cout<<"\t Press 2 for 2nd Student Record\n";
    cout<<"\t Press 3 for 3rd Student Record\n";
    cout<<"\t Press 4 for return to main menu\n";
    cout<<"\t Press 5 to Exit\n";
    cout<<"\n Enter your choice :";
    cin>>b;

    if(b == 1){
        cout<<"\t Enter Reg_No. :";
        cin>>student1.RollNumber;
        cout<<"\t Enter PF Marks :";
        cin>>student1.PFScore;

    }if(b == 2){
        cout<<"\t Enter Reg_No. :";
        cin>>student2.RollNumber;
        cout<<"\t Enter PF Marks :";
        cin>>student2.PFScore;

    }if(b == 3){
        cout<<"\t Enter Reg_No. :";
        cin>>student3.RollNumber;
        cout<<"\t Enter PF Marks :";
        cin>>student3.PFScore;

    }if(b == 4){
        goto Start;

    }if(b == 5){
        exit(0);
    }
    goto A;
    break;
case 2:
    cout<<setw(20)<<"ROLL NO.";
    cout<<setw(30)<<"PF Score"<<endl<<endl;
    cout<<setw(20)<<student1.RollNumber;
    cout<<setw(30)<<student1.PFScore<<endl<<endl;

    cout<<setw(20)<<student2.RollNumber;
    cout<<setw(30)<<student2.PFScore<<endl<<endl;

    cout<<setw(20)<<student3.RollNumber;
    cout<<setw(30)<<student3.PFScore<<endl<<endl;
    goto Start;
    break;

case 3:
    exit(0);
    break;
}
return 0;
}
