//Name: Isaiah Miguel M. Flandez
//Activity Name: PT1
//Description: A program that finds out which of a series of numbers are odd or even.

#include<iostream>

using namespace std;

int main(){

    int ron, numc, n;

    cout<<"Enter Range of Numbers :";
    cin>>ron;

    cout<<"Enter "<<ron<<" consecutive numbers :";

    do{
        cin>>n;

        if(n%2==0){
            cout<<n<<" - Even Number"<<endl;
            numc++;

        }else{
            cout<<n<<" - Odd Number"<<endl;
            numc++;
        }
    }while(numc<ron);


    return 0;

}