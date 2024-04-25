#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int l=0, r=n-1, mid;
    while(l<=r){
        mid=(l+r)/2;
        if(arr[mid]==key){
            cout << "Element found at index " << mid;
            break;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(l>r){
        cout << -1;
    }
    return 0;
}