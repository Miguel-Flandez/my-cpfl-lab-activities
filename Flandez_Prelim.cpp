//Name: Isaiah Miguel M. Flandez
//Activity Name: Prelim Hands-On Examination
//Description: C++ payroll program that prompts the user for a name, employee number, date of payday, hourly pay rate, and number of hours worked.
//Date: October 5, 2021

#include<iostream>

using namespace std;

int main(){

    string n, en, dop, es;
    int ph=150, sss=250, pi=200;
    double hpr, hw, gp, wt, np;

    cout<<"Enter your name     :";
    getline (cin, n);
    cout<<"Employee Number     :";
    getline (cin, en);
    cout<<"Date of Payday      :";
    getline (cin, dop);

    cout<<"\n";
    cout<<"Hourly Pay Rate     :";
    cin>>hpr;
    cout<<"Hours Worked        :";
    cin>>hw;

    gp=hw*hpr;
    wt=gp*0.12;
    np=gp-(wt+ph+sss+pi);

    if(np<5000){
        es="Contractual";
    }else if(np>=5001 && np<=10000){
        es="Probationary";
    }else{
        es="Regular";
    }

    cout<<"\n";
    cout<<"Payroll summary for :"<<n<<endl;
    cout<<"Employee No.        :"<<en<<endl;
    cout<<"Payroll Date        :"<<dop<<endl;

    cout<<"\nYou worked for "<<hw<<" hours at Php "<<hpr<<" per hour"<<endl;
    cout<<"Gross Pay           :"<<"Php "<<gp<<endl;
    cout<<"Withholding Tax     :"<<"Php "<<wt<<endl;
    cout<<"Philhealth          :"<<"Php "<<ph<<endl;
    cout<<"SSS                 :"<<"Php "<<sss<<endl;
    cout<<"Pag-IBIG            :"<<"Php "<<pi<<endl;

    cout<<"\n---------------------------------------------"<<endl;

    cout<<"Net Pay             :"<<"Php "<<np<<"\n"<<endl;
    
    cout<<"Employee Status     :"<<es<<endl;

    return 0;

}