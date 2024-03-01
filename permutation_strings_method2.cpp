//The task is to create all permutation strings 
//we here are not changing the input value
#include<bits/stdc++.h>
using namespace std;


void permutations(vector<vector<char>>&answer,string &input,vector<char>&output,map<char,int>frequency_){
    if(output.size()==input.size()){
        answer.push_back(output);
        return;
    }
    for(int i =0;i<input.size();i++){
        //this is for segregating the possibilities
        if(!frequency_[i]){
            output.push_back(input[i]);
            frequency_[i] = 1;
            permutations(answer,input,output,frequency_);
            output.pop_back();
            frequency_[i] = 0;
        }
    }
}


int main(){
    vector<vector<char>>v;
    vector<char>v1;
    string input = "acb";
    map<char,int>frequency_;
    permutations(v,input,v1,frequency_);
   for (auto& str : v) {
    for (char ch : str) {
        cout << ch;
    }
    cout << endl;
}





}