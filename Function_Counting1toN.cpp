#include<iostream>
using namespace std;

//Parameter num
void printCount(int num){
    for (int i = 1; i <= num; i++)
    {
        cout<<i<<" ";
        // return num;
    }
    
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    printCount(n); //Argument
    return 0;
}