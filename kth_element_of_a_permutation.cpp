#include<bits/stdc++.h>
using namespace std;

// We have to find the kth element in the permutations produced 

int main(){
    int fact = 1;
    int n;  //the number from which we are making the permutations
    cin >> n;
    int kth_Permutation;
    cin >> kth_Permutation;
    vector<int>v;
    for(int i =0;i<n;i++){
        fact = fact *i;
        v.push_back(i);
    }
    kth_Permutation = kth_Permutation-1;
    v.push_back(n);
    string answer = "";
    while(true){
        answer = answer + to_string(v[fact/kth_Permutation]);
        v.erase(v.begin()+(kth_Permutation/fact));
        if(v.size()==0){
            break;
        }
        kth_Permutation = kth_Permutation % fact;
        fact = fact / v.size();
    }


}