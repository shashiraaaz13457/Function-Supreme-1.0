#include<iostream>
using namespace std;

int getSum(int a,int b){
    int result = a + b;
    return result;
}

int main(){
    int a = 5;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    int b = 10;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    
    int sum = getSum(a,b);
    cout<<"Addition result is: "<<sum<<endl;

}