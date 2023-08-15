#include<iostream>
using namespace std;

//NOt  solved by self taking hint by java .
bool printPrime(int j){
    // int k = 2;
    for (int i = 2; i*i <= j; i++)
    {   
        if (j%i == 0)
        {
            return false;
        }  
        // cout<<i<<endl;
    }
    return true;
    
    // cout<<k<<endl;
    

    
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    bool getPrime = printPrime(n);
    // cout<<getPrime<<endl;
    for (int j = 2; j < n; j++)
    {
        if (printPrime(j))
        {
            cout<<j<<endl;
        }   
    }
    

}