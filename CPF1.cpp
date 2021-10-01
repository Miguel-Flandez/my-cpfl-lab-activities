//Name: Isaiah Miguel M. Flandez
//Activity Name: Outcomes Evaluation 1
//Description: The C++ Programming language will be used to form an output with a list of information about the students identification
//Date: September 7, 2021

#include<iostream>
#include<string>

using namespace std;

int main(){

    string n,g,a,add,YS,c,num   ; //variable declaration - allocation of memory
    long int cnumber;

    cout<<"Name    :";
    //cin>> name;
    getline (cin, n);
    cout<<"Gender  :";
    getline (cin, g);
    cout<<"Age     :";
    getline (cin, a);
    cout<<"Address :";
    getline (cin, add);
    cout<<"YS      :";
    getline (cin, YS); 
    cout<<"Course  :";
    getline (cin, c);
    cout<<"Number  :";
    getline (cin, num);

    //OUTPUT DISPLAY
    cout<<"\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" <<endl;
    cout<<"\nYou go by                            :"<<n;
    cout<<"\nYou are a                            :"<<g;
    cout<<"\nYou've been living for               :"<<a <<" years";
    cout<<"\nYou live in                          :"<<add;
    cout<<"\nYou're in                            :"<<YS;
    cout<<"\nYou major in                         :"<<c;
    cout<<"\nYou can be contacted with the number :"<<num;

    return 0;
    
}
