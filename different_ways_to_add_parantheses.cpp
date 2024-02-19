#include<bits/stdc++.h>
using namespace std;

int perform(int x, int y, char op) {
    if(op == '+') return x + y;
    if(op == '-') return x - y;
    if(op == '*') return x * y;
    return 0; // the expressions only have +,* and -
}

vector<int> solve(string expression) {
    vector<int> result;
    bool is_number = true;
    for(int i = 0; i < expression.size(); i++) {
        if(!isdigit(expression[i])) {
            is_number = false;
            vector<int> left = solve(expression.substr(0, i));
            vector<int> right = solve(expression.substr(i + 1));
            for(auto x : left) {
                for(auto y : right) {
                    int val = perform(x, y, expression[i]);
                    result.push_back(val);
                }
            }
        }
    }
    if(is_number) 
        result.push_back(stoi(expression)); // this is when we have a number 
    return result;
}

int main() {
    vector<int> v = solve("2*3-4*5");
    for(auto num : v)
        cout << num << " ";
    cout << endl;
}
