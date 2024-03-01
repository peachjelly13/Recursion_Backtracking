#include<bits/stdc++.h>
using namespace std;
//The reason we use swapping is basically so that every elemnt exchanges  aplace with every other 
// elemnet on its right

void answer(vector<vector<int>>&v,vector<int>&v1,int index){
    if(index == v1.size()){
        v.push_back(v1);
        return;

    }
    for(int i =index;i<v1.size();i++){
        swap(v1[index],v1[i]);
        answer(v,v1,index+1);
        swap(v1[index],v1[i]);
    }
}
int main(){
    vector<vector<int>>v;
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    answer(v,nums,0);
    for(auto &it:v){
        for(int num:it){
            cout << num;
        }
        cout << endl;
    }



}