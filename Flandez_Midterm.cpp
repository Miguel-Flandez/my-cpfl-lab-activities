//Name: Isaiah Miguel M. Flandez
//Activity Name: Midterm Hands-On Exam
//Description: Console conversion app that converts different units of weight.

#include<iostream>

using namespace std;

void KtoG(unsigned kg);
void GtoMg(unsigned g);
void LbtoOz(unsigned lb);
void KgtoLb(unsigned kg);
void PaW();

int main(){

    unsigned in;
    int opt, itr=1;

    do{
        cout<<"\nWeight Conversion App"<<endl<<endl;
        
        cout<<"[1] Kilogram to Gram"<<endl;
        cout<<"[2] Gram to Milligram"<<endl;
        cout<<"[3] Pound to Ounce"<<endl;
        cout<<"[4] Kilogram to Pound"<<endl;
        cout<<"[0] Exit the Program"<<endl<<endl;
        cout<<"Select Conversion: ";
        cin>>opt;

        switch(opt){
            case 1: 
                cout<<"\n<<Convert Kilogram to Gram>>"<<endl<<endl;
                cout<<"Enter a weight in Kilogram: ";
                cin>>in;
                KtoG(in);
                PaW();
                break;
            case 2:
                cout<<"\n<<Convert Gram to Milligram>>"<<endl<<endl;
                cout<<"Enter a Weight in Gram: ";
                cin>>in;
                GtoMg(in);
                PaW();
                break;
            case 3:
                cout<<"\n<<Convert Pound to Ounce>>"<<endl<<endl;
                cout<<"Enter a Weight in Pound: ";
                cin>>in;
                LbtoOz(in);
                PaW();
                break;
            case 4:
                cout<<"\n<<Convert Kilogram to Pound>>"<<endl<<endl;
                cout<<"Enter a Weight in Kilogram: ";
                cin>>in;
                KgtoLb(in);
                PaW();
                break;
            case 0:
                PaW();
                cout<<"Closing the program..."<<endl;
                return 0;
            default:
                cout<<"<<Invalid Input!!!>>"<<endl;
                PaW();
        }
    }while(itr==1);

    return 0;
}
void KtoG(unsigned kg){
    double g=kg*1000;
    cout<<"\n"<<kg<<" Kilogram(s) is equivalent to "<<g<<" gram(s) "<<endl<<endl;
}
void GtoMg(unsigned g){
    double mg=g*1000;
    cout<<"\n"<<g<<" gram(s) is equivalent to "<<mg<<" milligram(s) "<<endl<<endl;
}
void LbtoOz(unsigned lb){
    double oz=lb*16;
    cout<<"\n"<<lb<<" pound(s) is equivalent to "<<oz<<" ounce(s) "<<endl<<endl;
}
void KgtoLb(unsigned kg){
    double lb=kg*2.2;
    cout<<"\n"<<kg<<" kilogram(s) is equivalent to "<<lb<<" pound(s)"<<endl<<endl;
}
void PaW(){
    cin.ignore();
    cout<<"Press Enter to Continue...";
    cin.get();
}