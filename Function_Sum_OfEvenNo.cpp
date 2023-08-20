#include<iostream>
using namespace std;

int SumOfEven(int n){
    int sum = 0;
    //1st method.
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2 == 0)
    //     {
    //         sum = sum+i;
    //     }
    //     else{
    //         continue;
    //     }
        
        
    // }

    //2nd Method
    for (int i = 2; i <= n; i = i+2)
    {
        sum = sum+i;
    }
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int ans = SumOfEven(n);
    cout<< ans <<endl;
    return 0;
}