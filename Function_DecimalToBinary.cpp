#include<iostream>
using namespace std;
//Doubt in first attempt..

int DecimalToBinaryMethod1(int n){
    //Division Method
    while (n > 0)
    {
        int rem = n%2;
        cout<<rem<<endl;
        n = n/2;
    }
    return 0;
    
}

int main(){
    int num;
    cin>>num;

    int binary = DecimalToBinaryMethod1(num);
    // cout<<binary<<endl;
}