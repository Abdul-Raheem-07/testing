//in this file we will do 2d questions, via using functions.
#include<iostream>
using namespace std;
//Q1 Sum of All Matrix Elements
void inputElements(int arr[][10], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
}
int sumOfMatrix(int arr[][10], int row, int col) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
    }
    return sum;
}
int main(){
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout<<endl;
    cout<<"enter the number of columns: ";
    cin>>col;
    int arr[10][10];
    inputElements(arr, row, col);
    cout << "Sum of all elements in the matrix is: " << sumOfMatrix(arr,row,col)<<endl;
}