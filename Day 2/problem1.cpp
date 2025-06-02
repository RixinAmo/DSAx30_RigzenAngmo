#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>& arr, int target){

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
               return {i,j};
            }
        }       
    }
    return {};
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

    cout<<"array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   vector<int> res=pairsum(arr,target);

   if(!res.empty()){
    cout<<"Output = ["<<res[0]<<","<<res[1]<<"]"<<endl;
   }else{
    cout<<"No output"<<endl;
   }
 
   return 0;
}