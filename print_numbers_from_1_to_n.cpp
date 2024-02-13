#include<bits/stdc++.h>
using namespace std;

int print_numbers_from_1_to_n(int n){
    if(n<=0){
        return 0;
    }
    cout << n << endl;
    return print_numbers_from_1_to_n(n-1);
}
int main(){
    print_numbers_from_1_to_n(10);
}