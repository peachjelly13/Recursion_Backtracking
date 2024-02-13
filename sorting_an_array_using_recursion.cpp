#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);

}

void sort_an_array(vector<int>&v){
    if(v.size()==1){
        return;
    }
    int temp = v[v.size()-1];
    v.pop_back();
    sort_an_array(v);
    insert(v,temp);
}

int main(){
    vector<int>v{1,4,5,3,1,5,6,7,8,9};
    
    sort_an_array(v);
    for(int i =0;i<10;i++){
        cout << v[i];
    }

}