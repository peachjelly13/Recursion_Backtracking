#include <bits/stdc++.h>
using namespace std;


void solve(string input, string output,vector<string>&v) {
    if (input.length() == 0) {
        v.push_back(output);
        return;
    }

    string output1 = output;
    string output2 = output;
    char value = input[0];

    if (isdigit(value)) {
        output1.push_back(value);
        output2.push_back(value);
    } else {
        output1.push_back(input[0]);
        output2.push_back(toupper(input[0]));
    }

    input.erase(input.begin() + 0);
    solve(input, output1,v);
    solve(input, output2,v);
}

int main() {
    string input = "a1b2";
    string output = "";
    vector<string>v;

    solve(input, output,v);
    for(auto it:v){
        cout << it << endl;
    }
    

    

    return 0;
}
