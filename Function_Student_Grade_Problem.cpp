#include<iostream>
using namespace std;

//1st method.
// void getGrade(int marks){
//     if (marks >= 90)
//     {
//         cout<<"A";
//     }
//     else if (marks >= 80)
//     {
//         cout<<"B";
//     }
//     else if (marks >= 70)
//     {
//         cout<<"c";
//     }
//     else if (marks >= 60)
//     {
//         cout<<"D";
//     }
//     else{
//         cout<< "E";
//     }
    
    
// }

//2nd Method

char getGrade(int marks){
    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }
    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >= 60)
    {
        return 'D';
    }
    else{
        return 'E';
    }
    
    
}


int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>> marks;

    // getGrade(marks);
    char FinalGrade = getGrade(marks);//You have to store in the same datatype.
    cout<<FinalGrade<<endl;
}
