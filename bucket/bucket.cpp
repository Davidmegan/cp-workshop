#include<iostream>
using namespace std;
int main() {
    int n=10;
    cin >> n;
    int input_arr[n];
    int bucket_arr[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        cin>>input_arr[i];
        bucket_arr[input_arr[i]]+=1;
    }
    for(int i=0;i<10;i++){
        if(bucket_arr[i]>0){
            cout << i+1 << " " << bucket_arr[i] << " times\n";
        }
    }
    return 0;
}