#include<iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<"Babbar"<<endl;
    }

}

//Pass by value concept(Copy create hoti h input parameters kii)
void printNumber(int a){
    cout<< a <<endl;
}

int main(){
    //Function Call
    // printName();
    int a = 5;
    // printNumber(a);
    cout<<"Address of a is: "<< &a <<endl;
    
}