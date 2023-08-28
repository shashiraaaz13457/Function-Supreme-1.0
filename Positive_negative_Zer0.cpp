#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Enter the number : ";
    cin>>num;

    // if (num > 0)
    // {
    //     cout<<"Positive";

    // }
    // else if(num < 0){ 
    //     cout<< " Negative";
    // }
    //  else{
    //     cout<<"Zero";
    //  }

    // Even odd

    if(num % 2 == 0){
        cout<<"Even"<<endl;

    }
    else{
        cout<<"Odd"<<endl;
    }
}