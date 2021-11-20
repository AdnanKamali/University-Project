#include<iostream>

using namespace std;

_Float64 factorial(int number){
    if(number < 1){
        throw;
    }
    else if (number == 1)
    {
        return 1;
    }
    return number * factorial(number - 1);
}

int main(){
    int n, k;
    _Float64 result;
    // C(n,k) = n!/k!*(n-k)!
    cout << "C(n,k) = n!/k!*(n-k)!" << endl;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter k: ";
    cin >> k;
    if(n<k){
        cout << "Please Enter True Combination!!" << endl;
        return 0;
    }else if(k == n-1){
        result = n;
    }
    else
        result = factorial(n) / (factorial(k) * factorial(n - k));
    cout << "Combination of (" << n << ", " << k << ") "
         << ": " << result << endl;
    
}