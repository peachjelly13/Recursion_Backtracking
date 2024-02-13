#include<bits/stdc++.h>
using namespace std;
void remove_middle_element(stack<int>&s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    remove_middle_element(s,k-1);
    s.push(temp);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    int k = s.size()/2+1;
    remove_middle_element(s,k);
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

}