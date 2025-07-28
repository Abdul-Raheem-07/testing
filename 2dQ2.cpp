#include<iostream>
using namespace std;
 //print a specific row.

void AddElements(int arr[10][10],int row,int col ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"enter element "<<i+1<<" "<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }
}
void printRow(int arr[10][10], int row, int n) {
    while (true) {
        cout << "Enter row number to print: ";
        cin >> row;

        if (row >= 0 && row < n) {
            for (int i = 0; i < n; i++) {
                cout << arr[row][i] << ", ";
            }
            cout << endl;
            break;  // valid input mila, loop se bahar
        } else {
            cout << "Invalid row number, kindly enter a number between 0 and " << n - 1 << "." << endl;
        }
    }
}

//Q3 find max
int findMax(int arr[10][10], int row,int col ) {//linear search
    int max = arr[0][0];
    for (int i = 0; i < row; i++) { //TC: O(n)
        for(int j=0;j<col;j++){//TC: O(n)
        if (arr[i][j] > max) {
            max = arr[i][j];
        }
    } 
    }
    return max;
}
//transpose
void transposeFun(int arr[10][10], int row, int col) {
    int result[10][10];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            result[j][i] = arr[i][j];
        }
    }//transposed one
    for(int i =0; i<col;i++){
        for(int j=0;j<row;j++){
            cout<<result[i][j]<<" ";
        }
    }
}



 int main(){
    int rows = 2;
    int cols = 3;
    int arr[10][10];
    AddElements(arr, rows,cols);
    printRow(arr, 0, cols);
    cout<<"max element is "<<findMax(arr,rows,cols)<<endl;
    int transpose[cols][rows];
    transposeFun(arr,rows,cols);

}
