/*
print the ASCII value of any character

Sample Input : Enter a character : "U"
Sample Output : 85
*/

#include<iostream>
using namespace std;
int main(){

    char ASCII;

    cout<<"Enter a character : ";
    cin>>ASCII;
    cout<<"The input character is : "<<ASCII<<endl;

    cout<<"ASCII value of 'U' is : "<<int(ASCII)<<endl;
}