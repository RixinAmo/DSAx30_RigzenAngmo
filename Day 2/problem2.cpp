#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& arr){
    vector<int> temp(arr.size());
    temp[0]=arr[arr.size()-1];
    for(int i=0;i<arr.size()-1;i++){
        temp[i+1]=arr[i];
    }

    arr=temp;
}
int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout<<"enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<" original array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(arr);

    cout<<"rotated array "<<endl;
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
   return 0;
}