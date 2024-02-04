/*
Write a C++ program to take length and breadth of a rectangle and print its area.

Sample Input : 7, 4
Sample Output : 28

*/

#include<iostream>
using namespace std;
int main(){
    int length,breadth;

    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breadth;

    cout<<"The area of the rectangle is : "<<length*breadth;
}