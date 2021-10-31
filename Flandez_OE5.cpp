//Name: Isaiah Miguel M. Flandez
//Activity Name: Outcomes Evaluation 5
//Description: Program that displays inputted string and unsigned integer in reverse order

#include<iostream>

using namespace std;

void RaS(string s);
void RaUS(unsigned u);
void PaW();

int main(){
    
    int opt;
    string c1;
    unsigned c2;
    int itr=0;

    do{
        cout<<"\n[1] Reverse a String "<<endl;
        cout<<"[2] Reverse Unsigned Integer "<<endl;
        cout<<"[3] Exit "<<endl<<endl;
        cin>>opt;

        switch(opt){
            case 1:
                cout<<"\n<<Reverse a String>>"<<endl<<endl;
                cin.ignore();
                cout<<"Enter a Word :";
                getline(cin, c1);
                RaS(c1);
                PaW();
                break;
            case 2:
                cout<<"\n<<Reverse an unsigned integer>>"<<endl<<endl;
                cout<<"Enter a number [0-9] :";
                cin>>c2;
                RaUS(c2);
                PaW();
                break;
            case 3:
                cout<<"\n<<Closing the program\nThank you for using the App!>>"<<endl;
                return 0;
            default:
                cout<<"\n<<Invalid Input!!!>>"<<endl;
        }   
    }while(itr==0);

    return 0;
}
void RaS(string s){

    int a=s.length();

    for(int b=0; b<a/2; b++)
    swap(s[b], s[a-b-1]);

    cout<<"Reversed word :"<<s<<endl<<endl;
}
void RaUS(unsigned u){

    int rn=0, rmd;

    while(u!=0){
        rmd=u%10;
        rn=rn*10+rmd;
        u/=10;
    }

    cout<<"Reversed number :"<<rn<<endl<<endl;
}
void PaW(){
    cout<<"\n<<Press Enter to Continue>>"<<endl;
    cin.ignore();
}
