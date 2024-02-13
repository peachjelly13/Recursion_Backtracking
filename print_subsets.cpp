#include<bits/stdc++.h>
using namespace std;
void print_subsets(string input,string output){
    if(input.length()==0){
        cout << output << endl;
        return;
    }
    string output_1_without_char = output;
    string output_2_with_char = output;
    output_2_with_char.push_back(input[0]);
    input.erase(input.begin()+0);
    print_subsets(input,output_1_without_char);
    print_subsets(input,output_2_with_char);

}
int main(){
    print_subsets("abc","");

}