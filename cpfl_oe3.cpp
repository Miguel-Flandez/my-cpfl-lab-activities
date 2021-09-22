//Name: Isaiah Miguel M. Flandez
//Activity Name: OE3
//Description: A program that computes the salary based on hours worked and rate per hour minus tax based on specific tax schemes.

#include<iostream>;
#include<string>;

using namespace std;

int main(){

    string id, enm;
    int hw, taxr;
    double rph, gp, netp, taxd;

    cout<<"Enter Employee ID            :";
    getline (cin, id);
    cout<<"Enter Employee Name          :";
    getline (cin, enm);
    cout<<"Enter Number of hours worked :";
    cin>>hw;
    cout<<"Enter Rate per hour          :";
    cin>>rph;

    gp=rph*hw;

    if(hw==0||rph==0){
        cout<<"You did not input anything!";
    }else if(gp > 40000){
        taxr= 12;
        taxd=gp*0.12;
        netp=gp-taxd;
    }else if(gp >= 30000 && gp <= 40000){
        taxr= 10;
        taxd=gp*0.1;
        netp=gp-taxd;
    }else if(gp < 20000){
        taxr= 5;
        taxd=gp*0.05;
        netp=gp-taxd;
    }
    else{
        cout<<"Invalid input!";
    }

    cout<<"\n--------------------------------------------------"<<endl;

    cout<<"Employee ID            : "<<id<<endl;
    cout<<"Employee Name          : "<<enm<<endl;
    cout<<"Your Gross Pay         : "<<"PHP "<<gp<<endl;
    cout<<"Tax Rate               : "<<taxr<<"%"<<endl;
    cout<<"Your Net Pay           : "<<"PHP "<<netp<<endl;

    cout<<"\n--------------------------------------------------"<<endl;

    return 0;
}