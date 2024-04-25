#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> m;
    int n=10;
    cin >> n;
    int input_arr[n];
    for(int i=0;i<n;i++){
        cin>>input_arr[i];
        m[input_arr[i]]++;
    }
    for(auto it:m){
        if(it.second>0){
            cout << it.first << " " << it.second << " times\n";
        }
    }
    return 0;
}