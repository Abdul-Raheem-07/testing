//so in this file we gonna solve some questions of arrays either its 1d or 2d using functions.

//Q1 Find Maximum Element
#include<iostream>
using namespace std;

int findMax(int arr[], int n) {//linear search
    int max = arr[0];
    for (int i = 1; i < n; i++) { //TC: O(n)
        if (arr[i] > max) {
            max = arr[i];
        }
        
    }
    return max;
}
void getNums(int arr[], int n) {//function to cin the array elements TC: O(n)
   
    for(int i=0;i<n;i++){
         cout<<"enter number of "<<i+1<<endl;
         cin>>arr[i];
    }
}
//Q2 Find Sum of Elements
int findSum(int arr[], int n) {
    int sum = 0;
    for(int i =0; i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
// Q3 Check if Element Exists (Linear Search)
void findElement(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout<< arr[i];//we can also return index by writing only i instead of arr[i].
        }else{
            cout<< -1;//can also type" Element not found" instead of -1
        }
    }
    cout<<endl;
}
//Q4 Reverse the Array from hacker site.
void reverseArray(int arr[], int n) {
    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
//Q5 Count Even and Odd Elements
void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
            } else {
                odd++;
            }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    getNums(arr,n);
    cout<<"maximum element is "<<findMax(arr,n)<<endl;
    cout<<"sum of elements is "<<findSum(arr,n)<<endl;
    int target;
    cout<<"enter the target element"<<endl;
    cin>>target;
    findElement(arr,n,target);
    reverseArray(arr,n);
  countEvenOdd(arr,n);

    return 0;
}

