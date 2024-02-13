#include<bits/stdc++.h>
using namespace std;
set<string>s;
void solve(string input, string output){
    
    if(input.length()==0){
        s.insert(output);
        return;
    }
    string output1 = output;
    string output2 = output;
    char value = input[0];
    if(isdigit(value)){
        output1.push_back(value);
        output2.push_back(value);
    }
    else{
        output1.push_back(input[0]);
        output2.push_back(toupper(input[0]));
    }
    input.erase(input.begin()+0);
    solve(input,output1);
    solve(input,output2);
   
}

int main(){
    string input = "a1b2";
    string output = "";
    solve(input,output);
     for(auto it: s){
        cout << it << endl;
    }

   


}