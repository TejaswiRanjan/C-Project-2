/*
Write a program to calculate the cube of a number.

Sample Input : 4
Sample Output : 64
*/

#include<iostream>
using namespace std;
int main(){
    
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    int cube = a*a*a;
    cout<<"The cube of the number is : "<<cube<<endl;
}