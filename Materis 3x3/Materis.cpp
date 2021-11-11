#include<iostream>

using namespace std;

int main(){
    float a[3][3], b[3][3], c[3][3];// a for input values, b for tranahadeh, c for a+b
    for (int i = 2; i >= 0;i--){
        for (int j = 2; j >= 0; j--){
            cout << "Enter Matries (" << i+1 << ", " << j+1 << ") : ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            b[i][j] = a[j][i];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++){
            cout << "sum -> (" << i + 1 << ", " << j + 1 << ") : " << c[i][j]<<endl;
        }
    }

}