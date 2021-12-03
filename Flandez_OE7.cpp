//Name: Isaiah Miguel Flandez
//Activity Name: Outcomes Evaluation 7
//Description: A program that computes the salary based on hours worked and rate per hour minus tax based on specific tax schemes.
//It requires the input of the correct username and password before the user is given access to the rest program.

#include<iostream>
#include<cstring>

using namespace std;

void SP();

int main(){

    char my_un[14]="Banner";
    char un[14];
    char my_pw[14]="Pointbreak";
    char pw[14];

    system("cls");
    cout<<"Enter Username: ";
    cin>>un;

    if(strcmp(my_un,un)){
        cout<<"\nAccess Denied"<<endl;
    }else{
        cout<<"Enter Password: ";
        cin>>pw;
        if(strcmp(my_pw,pw)){
            cout<<"\nAccess Denied"<<endl;
        }else{
            cout<<"\nWelcome, Strongest Avenger"<<endl<<endl;
            system("pause");
            SP();
        }
    }
    return 0;
}
void SP(){

    string id, enm;
    int hw, taxr;
    double rph, gp, netp, taxd;

    cout<<"\nEnter Employee ID            :";
    cin>>id;
    cin.ignore();
    cout<<"Enter Employee Name          :";
    getline(cin,enm);
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
}