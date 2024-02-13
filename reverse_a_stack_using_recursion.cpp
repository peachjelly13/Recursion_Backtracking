#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int temp){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
void reverse(stack<int>&s){
    if(s.size()==0){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s,temp);


}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    reverse(s);
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

}