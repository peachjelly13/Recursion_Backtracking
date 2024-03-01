// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHYxcG1sN0M1TWdwS3JDMzFXQnhsVmtfbjhPUXxBQ3Jtc0ttakQ2TzUyUjhGZFVZXzJReTRQdVRzM2UwSmxMdHFxUHJkUEhoeEtkZ3FRUmtueW9mTTF4VkkzRXduU3FBWGcwdktsekZ6a2VTcEFXYWtjcEZ6eTRpaVIyM0VmTjVhNEJMbTJCT000MHZQc2VFTkZRYw&q=https%3A%2F%2Fwww.geeksforgeeks.org%2Fproblems%2Fpermutations-of-a-given-string2041%2F1&v=zC4D7cuaYzo
// question link above, print all permutatiosn of a given string

#include<bits/stdc++.h>
using namespace std;

void solve(string input, string output,vector<string>&v){
    map<char,int>map_;
    if(input.size()==0){
        v.push_back(output);
        return;
    }
    //for soemthing like b we initially divide it into three branches int a a b now two
    //same a a branhces will give the same output whicg we do not want 
    for(int i = 0;i<input.size();i++){
        if(map_.find(input[i])==map_.end()){
            map_[input[i]]++;

            string newinput = input.substr(0,i)+input.substr(i+1);
            string newoutput = output+input[i];
            solve(newinput,newoutput,v);

    }
    }
}
int main(){
    vector<string>v;
    solve("aacc","",v);
    for(auto it:v){
        cout << it << endl;
    }
}