#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(vector<int>& arr, int target){

    for(int i=0;i<arr.size();i++){
        if(arr[i]==target || arr[i]>target){
            return i;
        }  
    }
    return arr.size();
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    int target;
    cout<<"enter target"<<endl;
    cin>>target;
    

    cout<<"enter elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<"array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int index=solution(arr,target);

    cout<<index<<endl;
    return 0;
}