//Grading Program and Account Balance Checker
//Name: Isaiah Miguel M. Flandez
//Description: C++ program that finds the average of inputted grades, 
//converts grade percentage to equivalent grade point and checks the students remaining balance

#include<iostream>
#include<fstream>

using namespace std;

const int _SZ=100;

void PaW();//Prompt and Wait
void CT();//Course Total
void PtoGP(int gp);//Percentage to Grade Point
void bal();//Balance

int main(){

    int m, per;//m=menu, per=percentage

    do{
        system("cls");
        cout<<"\nGrading Program and Account Balance Checker"<<endl;
        cout<<"[1] Course Total"<<endl;
        cout<<"[2] Convert Grade Percentage to Equivalent Grade Point"<<endl;
        cout<<"[3] Balance"<<endl;
        cout<<"[0] Exit the Program"<<endl<<endl;
        cout<<"Enter your choice: ";
        cin>>m;

        switch(m){
            case 1:{
                CT();
                PaW();
                break;
            }
            case 2:{
                cout<<"Enter your Course Total: ";
                cin>>per;
                PtoGP(per);
                PaW();
                break;
            }
            case 3:{
                bal();
                PaW();
                break;
            }
            case 0:{
                cout<<"Leaving Program . . ."<<endl;
                PaW();
                cout<<"\nThank you for using the program!"<<endl;
                return 0;
            }
            default:
                cout<<"Wrong Input!!!"<<endl;
                PaW();
        }
    }while(true);

    return 0;
}
void PaW(){
    cin.ignore(100, '\n');
    cout<<"\nPress Enter or Return to continue . . .";
    cin.get();
}
void CT(){

    int ts, itr;//ts=test scores, itr=iterate
    float g[_SZ], sum=0, ave;//g=grades, ave=average
    
    cout<<"Enter the number of scores that you want to input: ";
    cin>>ts;
    cout<<"\nEnter Grades obtained in "<<ts<<" tests"<<endl;
    for(itr=0; itr<ts; itr++){
        cout<<"Enter test no. "<<itr+1<<": ";
        cin>>g[itr];
        sum=sum+g[itr];
    }
    ave=sum/ts;

    cout<<"\nYour course total is: "<<ave;
}
void PtoGP(int gp){
    cout<<"The grade point equivalent is ";
    if(gp>=99 && gp<=100){
        cout<<"1.0";
    }else if(gp>=96 && gp<=98){
        cout<<"1.25";
    }else if(gp>=93 && gp<=95){
        cout<<"1.5";
    }else if(gp>=90 && gp<=92){
        cout<<"1.75";
    }else if(gp>=87 && gp<=89){
        cout<<"2.0";
    }else if(gp>=84 && gp<=86){
        cout<<"2.25";
    }else if(gp>=81 && gp<=83){
        cout<<"2.5";
    }else if(gp>=78 && gp<=80){
        cout<<"2.75";
    }else if(gp>=75 && gp<=77){
        cout<<"3.0";
    }else{
        cout<<"Invalid input!!!"<<endl;
    }
}
void bal(){

    ofstream out;
    out.open("output.txt");

    int sub, due, tui, bal;
    unsigned paid;
    char rec;
    cout<<"Enter number of subjects taken: ";
    cin>>sub;

    tui=sub*1228.40;
    due=tui+5260+9148.34+7025.89;

    cout<<"\n------------------------------------------------------------"<<endl;
    cout<<"\nTuition Fee              : "<<tui<<endl;
    cout<<"\nTotal Lab Fee            : 7025.89"<<endl;
    cout<<"\nTotal Other Fees         : 9148.34"<<endl;
    cout<<"\nTotal Miscellaneuos Fees : 5260"<<endl;
    cout<<"\nTotal Enrollment Fee     : "<<due<<endl;
    cout<<"\n------------------------------------------------------------"<<endl<<endl;

    cout<<"Enter Total Payment: ";
    cin>>paid;

    bal=due-paid;

    cout<<"\nYour Balance is          : "<<bal<<endl;

    cout<<"Would you like a copy of the Account Summary? [Y] for yes [N] for no: ";
    cin>>rec;
    if(rec=='y'||rec=='Y'){
        cout<<"\nMaking a copy . . .";
        out<<"\n-----------------------Account-Summary----------------------"<<endl;
        out<<"\nTuition Fee              : "<<tui<<endl;
        out<<"\nTotal Lab Fee            : 7025.89"<<endl;
        out<<"\nTotal Other Fees         : 9148.34"<<endl;
        out<<"\nTotal Miscellaneuos Fees : 5260"<<endl;
        out<<"\nTotal Enrollment Fee     : "<<due<<endl;
        out<<"\nTotal Payment            : "<<paid<<endl;
        out<<"\nBALANCE                  : "<<bal<<endl;
        out<<"\n------------------------------------------------------------"<<endl;
        
    }else if(rec=='n'||rec=='N'){
        cout<<"\nThank you, Have a nice day"<<endl;
    }else{
        cout<<"\nInvalid Input!"<<endl;
    }
}