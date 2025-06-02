#include<iostream>
#include<vector>

using namespace std;

int solution(vector<int>& arr, int val){
    int index=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            arr[index]=arr[i];
            index++; 
        } 
    }
    return index;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    int val;
    cout<<"enter val"<<endl;
    cin>>val;
    

    cout<<"enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int num=solution(arr,val);

    cout<<" Removed array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Output= "<<num<<endl;

    return 0;
}