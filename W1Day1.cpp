#include<iostream>
#include<vector>
using namespace std;

class stack{
    vector<int> v;
    public: 
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top (){
            return v[v.size()-1];
          }
        bool empty(){
            return v.empty();
        }
};
int main(){
    stack s;
    s.push(20);
     s.push(32);
            s.push(30);
                s.push(40);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
    return 0;
}