#include <iostream>

using namespace std;

int main(){
    int getNum; // get from user a number
    int first; // this for oneMultiple (dahgan)
    int seccond; // this for tenMultiple (yekan)
    string firstNum; // for fist convert to Number English
    string seccondNum; // for seccond convert to Number English
    cout << "Number: "; // show a text to see user
    cin >> getNum; // with this user enter a number 
    first = getNum / 10; // get sub multiple
    seccond = getNum % 10; // get remaining

    if (getNum > 99 || getNum < 10) // check this getNumber between 10 and 100
        cout << "Not Valid";
    else if(getNum < 20){ // if Ok and less than 20 use simple switch case to show 
        switch (getNum)
        {
        case 10:
            cout << "ten \n";
            break;
        case 11:
            cout << "eleven\n";
            break;
        case 12:
            cout << "twelve\n";
            break;
        case 13:
            cout << "thiteen\n";
            break;
        case 14:
            cout << "fourteen\n";
            break;
        case 15:
            cout << "fifteen\n";
            break;
        case 16:
            cout << "sixteen\n";
            break;
        case 17:
            cout << "seventeen\n";
            break;
        case 18:
            cout << "eghiteen\n";
            break;
        case 19:
            cout << "nineteen\n";
            break;
        default:
            break;
        }
        return 0;
    }
    else { // if greater than 20 use submultiple and remaning to show
        switch (seccond)
        {
        case 0:
            seccondNum = "";
            break;
        case 1:
            seccondNum = "one";
            break;
        case 2:
            seccondNum = "two";
            break;
        case 3:
            seccondNum = "three";
            break;
        case 4:
            seccondNum = "four";
            break;
        case 5:
            seccondNum = "five";
            break;
        case 6:
            seccondNum = "six";
            break;
        case 7:
            seccondNum = "seven";
            break;
        case 8:
            seccondNum = "eghit";
            break;
        case 9:
            seccondNum = "nine";
            break;
        
        default:
            break;
        }
        switch (first)
        {
        case 2:
            firstNum = "twenty";
            break;
        case 3:
            firstNum = "thirty";
            break;
        case 4:
            firstNum = "fourty";
            break;
        case 5:
            firstNum = "fifty";
            break;
        case 6:
            firstNum = "sixty";
            break;
        case 7:
            firstNum = "seventy";
            break;
        case 8:
            firstNum = "eghty";
            break;
        case 9:
            firstNum = "ninty";
            break;
        
        default:
            break;
        }
    }
    cout << firstNum << seccondNum<<endl;
    return 0;
}
