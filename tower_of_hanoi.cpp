#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n,string source, string destination, string helper){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,source,helper,destination);
    cout <<  " moved disk " << n << " from " << source << " " << destination << endl;
    tower_of_hanoi(n-1,helper,destination,source);


}
int main(){
    int n = 3;
    tower_of_hanoi(3,"rod1","rod3","rod2");

}