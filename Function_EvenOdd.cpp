#include<iostream>
using namespace std;

int EvenOdd(int num){
    
    if (num%2 == 0)
    {
        cout<<num<<" is even"<<endl;
    }
    else{
        cout<<num<<" is odd"<<endl;
    }
    
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int getEvenOdd = EvenOdd(num);
    // cout<<getEvenOdd<<endl;
}