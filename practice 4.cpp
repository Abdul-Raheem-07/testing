//arrays 

//1.	Create an array to store 5 integers and find their sum.
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[5]={1,2,3,4,5}, sum = 0;
//     for(int i=0;i<5;i++){
//        sum+=arr[i];
//     }
//     cout<<"the sum of array is "<<sum;
//     return 0;
// }

//2.	Write a program to reverse the elements of an array of size 6.
// #include<iostream>
// using  namespace std;
// int main(){
//       int arr[6]={1,2,3,4,5,6};
//     //     for(int i=0,j=5;i<j;i++,j--){
//     //         swap(arr[i],arr[j]);
//     //     }
//     //     for(int i=0;i<6;i++){
//     //         cout<<arr[i]<<" ";
//     //     }  cout<<"my method."<<endl;
//         for(int i=5;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//     return 0;
// }

//3.	Write a program to sort an array of 10 numbers in ascending order.
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[10]={1,4,6,2,43,66,321,41,32,10};
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             if(arr[j]>arr[j+1]){//for desending order change > to <.
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//4.	Create an array to find the second largest element in an array of 8 numbers.
// #include<iostream>
// using namespace std;
// int main() {
//     int arr[8]={1,2,3,4,5,6,7,9};
//     int max = arr[0], second_max = arr[0];
//     for(int i=1;i<8;i++){
//         if(arr[i]>max){
//             second_max = max;
//             max = arr[i];
//         }else if(arr[i]>second_max&&arr[i]!=max){
//             second_max = arr[i];
//         }
//     }
//     cout<<"the second largest number is "<<second_max;
//     return 0;
// }

//5.	Use an array to store 6 numbers and print them in reverse order.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     for(int i=5;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//6.	Write a program to merge two arrays of size 5 into a single array.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10},merge[10];
//     for(int i=0;i<5;i++){
//         merge[i]=arr1[i];
//         merge[i+5]=arr2[i];
//     }
//     for(int i=0;i<10;i++){
//         cout<<merge[i]<<" ";
//     }
//     return 0;
// }

//7.	Create an array to find the sum of odd numbers in an array of 10 integers.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int sum=0;
//     for(int i=0;i<9;i++){
//         if(arr[i]%2!=0){
//             sum+=arr[i];
//         }
//     }  
//     cout<<"the sum of odd number is "<<sum;
//     return 0; 
// }

//8.	Use an array to rotate its elements to the left by 2 positions.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     for (int k = 0; k < 2; k++) {
//         int temp = arr[0];
//         for (int i = 0; i < 5; i++) {
//             arr[i] = arr[i + 1];
//         }
//         arr[5] = temp;
//     }
//     for (int i = 0; i < 6; i++) {
//         cout << arr[i] << " "; 
//     }
//     cout<<endl;
//     return 0;
// }

//9.	Use an array to store 10 numbers and print only those divisible by 3.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,12};
//     for(int i=0;i<10;i++){
//         if(arr[i]%3==0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }

//10.	Write a program to remove duplicates from an array of 10 numbers.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {3, 5, 3, 7, 5, 8, 9, 8, 1, 7};
//     cout << "Unique elements: ";
//     for (int i = 0; i < 10; i++) {
//         bool isDuplicate = false;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if (!isDuplicate) {
//             cout << arr[i] << " "; // 3 5 7 8 9 1
//         }
//     }
//     cout << endl;
//     return 0;
// }

//11.	Implement an array to calculate the product of all elements in an array of 5 numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int product = 1;
//     for(int i=0;i<5;i++){
//         product *= arr[i];
//     }
//     cout<<"the product of all element is "<<product;
//     return 0;
// }

//12.	Use an array to store 10 numbers and print the largest even number.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={2,3,4,5,6,7,8,9,10,12};
//     int maxEven = -1;
//     for(int i = 0; i < 10; i++) {
//         if(arr[i] % 2 == 0 && arr[i] > maxEven) {
//             maxEven = arr[i];
//         }
//     }
//     if(maxEven != -1) {
//         cout << "Largest even number: " << maxEven << endl;
//     } else {
//         cout << "No even number found." << endl;
//     }
//     return 0;
// }

//13.	Write a program to shift all zeros in an array of 10 numbers to the end.
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {1, 0, 3, 0, 5, 6, 0, 8, 9, 0};
//     int nonZeroPos = 0;
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] != 0) {
//             arr[nonZeroPos++] = arr[i];
//         }
//     }
//     while (nonZeroPos < 10) {
//         arr[nonZeroPos++] = 0;
//     }
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " "; // 1 3 5 6 8 9 0 0 0 0
//     }
//     cout << endl;
//     return 0;
// }

//14.	Use an array to check if two arrays of size 5 are equal.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5]={1,2,3,4,5},arr2[5]={1,2,3,4,5};
//     bool check=true;
//     for(int i=0;i<5;i++){
//         if(arr1[i]!=arr2[i]){
//             check = false;
//             break;
//         }
//     }
//     if(check){
//         cout<<"array 1 and array2 are equal"<<endl;
//     }else{
//         cout<<"arrays are not equal."<<endl;
//     }
//     return 0;
// }

//15.	Implement an array to count the number of positive and negative numbers in an array of 8.
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,2,-3,4,-5,-6,7,-8};
//     int positive=0,negative=0;
//     for(int i=0;i<8;i++){
//         if(arr[i]>0){
//             positive++;
//         }else{
//             negative++;
//         }
//         cout<<endl;
//     }
//     cout<<"positive are "<<positive<<". negative are "<<negative<<endl;
// }

#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number of rows=";
    cin>>num;
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
