//Name: Isaiah Miguel M. Flandez
//Activity Name: OE4
//Description: Program that prints 3 adjacent hollow pyramid patterns
//Date: October 13, 2021

#include<iostream>

using namespace std;

int main(){

    int h, hn, s, ast;//h=height/rows, hn=height number, s=space, ast=asterisk

    cout<<"What is the height of your triangle? :";
    cin>>h;

    for(hn=1; hn<=h; hn++){

        for(s=1; s<=(h-hn);s++){
        cout<<" ";
        }for(ast=1;ast<=hn*2-1;ast++){
            if(ast==1||ast==hn*2-1){
            cout<<"*";
            }else if(hn==h){
            cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<"\n";
        cout<<"\t\t\t\t\t";
        cout<<"\033[A";
    
        for(s=1; s<=(h-hn);s++){
            cout<<" ";
            }for(ast=1;ast<=hn*2-1;ast++){
            if(ast==1||ast==hn*2-1){
            cout<<"*";
            }else if(hn==h){
            cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<"\n";
        cout<<"\t\t\t\t\t\t\t\t\t\t";
        cout<<"\033[A";
        
        for(s=1; s<=(h-hn);s++){
            cout<<" ";
            }for(ast=1;ast<=hn*2-1;ast++){
            if(ast==1||ast==hn*2-1){
            cout<<"*";
            }else if(hn==h){
            cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}