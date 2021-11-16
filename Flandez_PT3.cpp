//Name: Isaiah Miguel M. Flandez
//Activity Name: PT3
//Description: A program that computes the salary based on hours worked and rate per hour minus tax based on specific tax schemes.

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ifstream instrm;
    ofstream ostrm;
    string id, enm;
    int hw, taxr;
    double rph, gp, netp, taxd;

    instrm.open("input_data.txt");
    ostrm.open("output_data.txt");

    instrm>>id>>enm>>hw>>rph;

    gp=rph*hw;

    if(hw==0||rph==0){
        cout<<"You did not input anything!";
        ostrm<<"You did not input anything!";
        return 0;
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
        ostrm<<"Invalid input!";
    }

    ostrm<<"\n----------------------------------------------------------------------------"<<endl<<endl;

    ostrm<<"Employee ID            : "<<id<<endl;
    ostrm<<"Employee Name          : "<<enm<<endl;
    ostrm<<"Your Gross Pay         : "<<"PHP "<<gp<<endl;
    ostrm<<"Tax Rate               : "<<taxr<<"%"<<endl;
    ostrm<<"Your Net Pay           : "<<"PHP "<<netp<<endl;

    ostrm<<"\n-----------------------------------------------------------------------------"<<endl;

    instrm.close();
    ostrm.close();

    return 0;
}
