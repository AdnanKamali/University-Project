#include<iostream>
using namespace std;

int main(){
    int asciiNumberChar = 0;
    string getName;
    cout << "Enter your Name in English: ";
    getline(cin, getName); // getline help to use read space
    for (int i = 0; i < getName.length();i++){
        if((int)getName[i]>= 65 && (int)getName[i]<=90){
            asciiNumberChar += (int)getName[i]-64; // for Uppercase
        }
        else if((int)getName[i]>= 97 && (int)getName[i]<=122){
            asciiNumberChar += (int)getName[i]-96; // for Lowercase
        }
        else
            cout << "The " << getName[i] << " Not English Alphabet"<<endl;
    }
    cout << "Sum of Name is : " << asciiNumberChar << endl;
}