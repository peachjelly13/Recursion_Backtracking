//This is a leetcode question use leetcode for reference
#include<bits/stdc++.h>
using namespace std;
int kth_element_of_grammar(int n, int k){
    if(k==1 && n==1){
        return 0;
    }
    int mid = pow(2,n-1)/2;
    if(mid<k){
        return !kth_element_of_grammar(n-1,k-mid);
    }
    else{
        return kth_element_of_grammar(n-1,k);
    }

}
int main(){
    cout << kth_element_of_grammar(4,2);
}