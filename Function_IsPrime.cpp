#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n == 1)
    {
        // cout<<"Not a Prime number";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            // continue;
            // cout<< "Not a Prime Number"<<endl;
            return 0;
            
        }   
    }
    return 1;
    
    
    // cout<<"Prime number"<<endl;
    
    
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool prime = isPrime(num);
    cout<<prime<<endl;
}