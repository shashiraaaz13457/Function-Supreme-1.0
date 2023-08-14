#include<iostream>
using namespace std;

int Factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int getFactorial = Factorial(num);
    cout<<getFactorial<<endl;
}