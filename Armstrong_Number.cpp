#include<iostream>
using namespace std;

int main(){
    int n;
    // int result = 0;
    cout<<"Enter the number: ";
    cin>>n;

    // for (int i = 100; i < 1000; i++)
    // {
    //     if (result(i))
    //     {
    //         cout<<i;
    //     }
        
    // }
    

    int temp = n;
    int rem = 0;
    int sum = 0;
    int cube = 0;

    while (n > 0)
    {
        rem = n % 10;
        cube = (rem * rem * rem);
        sum = cube + sum;
        n = n/10;
    }

    if (sum == temp)
    {
        cout<<temp<<"is Armstrong number";
    }
    else{
        cout<<temp<<"is not an Armstrong number";
    }
    return 0;
    
}