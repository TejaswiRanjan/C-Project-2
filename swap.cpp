/*
Write a C++ program to swap two numbers with the help of a third variable.

Sample Input : 2,3
Sample Output : 3,2

*/

#include<iostream>
using namespace std;
int main(){

    int var1,var2,temp;

    cout<<"Enter the first variable : ";
    cin>>var1;
    cout<<"Enter the second variabele : ";
    cin>>var2;

    cout<<"The value of the variables before swapping"<<endl;
    cout<<"The value of the first variable : "<<var1<<endl;
    cout<<"The value of the second variable : "<<var2<<endl;

    
    temp = var1;
    var1 = var2;
    var2 = temp;

    cout<<"The value of the variables after swapping"<<endl;
    cout<<"The value of the first variable : "<<var1<<endl;
    cout<<"The value of the second variable : "<<var2<<endl;
    
}  