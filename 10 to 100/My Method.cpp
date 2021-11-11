#include <iostream>

using namespace std;

int main(){
    int num; // number get
    int tenMultiple; // dahgan
    int oneMultiple; // yekan
    string originalNumber; // using for final out number
    string tenTo[10] = {"ten", "eleven", "twelve", "thiteen", "fourtenn", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tenMulti[8] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eghty", "ninty"};
    string oneMulti[9] = {"one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    cout << "Enter a Number: ";
    cin >> num;
    if (num<10 || num > 100)// fix it num < 9 to num < 10
        cout << "Please Enter a True Number"<<endl;
    else{
        tenMultiple = num / 10;

        oneMultiple = num % 10;
        if (num < 20)
        {
            num %= 10;
            cout << "this is: " << tenTo[num] << endl;
        }
        else
        {
            originalNumber = tenMulti[tenMultiple - 2] +'-'+ oneMulti[oneMultiple - 1];
            cout << "Your Number is: " << originalNumber << endl;
        }
    }
    return 0;
}