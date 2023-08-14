#include<iostream>
using namespace std;

// void AreaOfCircle(int n){
//     float area;
//     area = 3.14 * n * n;
//     cout<<area<<endl;
// }

float AreaOfCircle(int n){
    float area;
    area = 3.14 * n * n;
    return area;
}
int main(){
    int radius;
    cout<<"Enter the value of n : ";
    cin>>radius;

    // AreaOfCircle(radius);
    float getAreaOfCircle = AreaOfCircle(radius);
    cout<<"Area of circle whose radius is "<<radius<<" having area : "<<getAreaOfCircle<<endl;
}