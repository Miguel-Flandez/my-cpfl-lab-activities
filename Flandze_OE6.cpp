//Outcomes Evaluation 6
//Name: Isaiah Miguel M. Flandez
//Description: Program that uses functions and applies searching and sorting in a dynamic array.

#include<iostream>

using namespace std;

const int _SZ=100;

void PaW();//PaW=promptandwait
void search();
void asc();//asc=ascending

int main(){

    int sw;//sw=switch

    do{
        system("cls");
        cout<<"[1] Searching Array"<<endl;
        cout<<"[2] Sorting Array (Ascending)"<<endl;
        cout<<"[0] Exit the Program"<<endl<<endl;
        cout<<"Enter your choice : ";
        cin>>sw;

        switch(sw){
            case 1:{
                search();
                PaW();
                break;
            }
            case 2:{
                asc();
                PaW();
                break;
            }
            case 0:{
                cout<<"Leaving program . . ."<<endl;
                PaW();
                cout<<"Thank you for using the program!"<<endl;
                return 0;
            }
            default:
                cout<<"Wrong input!!!"<<endl;
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
void search(){
    int in[_SZ], sz, src, itr;//in[]=input, ct=count, src=search, sz=size

    cout<<"Enter array size  : ";
    cin>>sz;

    if(sz<0||sz>_SZ){
    cout<<"Only input range up to "<<_SZ<<endl;
    return;
    }

    cout<<"Enter "<<sz<<" elements"<<endl;

    for(itr=0; itr<sz; itr++){
        cout<<"Enter Array Element ["<<itr<<"]: ";
        cin>>in[itr];
    }
    cout<<"Enter a number from the array you want to search: ";
    cin>>src;

    for(itr=0; itr<sz; itr++){
        if(in[itr]==src){
            cout<<"Element located at index "<<itr;
            break;
        }
        
    }if(itr==sz){
        cout<<"Element not found"<<endl;
    }
}
void asc(){
    int sz, itr, tempv;//itr=iterate, tempv=temporary variable
    int ele[_SZ];//ele[]=element

    cout<<"Enter array size  : ";
    cin>>sz;

    if(sz<0||sz>_SZ){
    cout<<"Only input range up to "<<_SZ<<endl;
    return;
    }

    for(itr=0; itr<sz; itr++){
        cout<<"Enter Array Element ["<<itr<<"]: ";
        cin>>ele[itr];
    }

    for(itr=0; itr<sz; itr++){
        cout<<"Array Elements ["<<itr<<"]: "<<ele[itr]<<endl;
    }
    for(itr=0; itr<sz; itr++){
        for(int a=itr+1; a<sz; a++){
            if(ele[itr]>ele[a]){

                tempv=ele[itr];
                ele[itr]=ele[a];
                ele[a]=tempv;
            }
        }
    }
    cout<<"Elements in ascending order"<<endl;
    for(itr=0; itr<sz; itr++){;
        cout<<ele[itr]<<"\t";
    }
}
