#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter any number from 2 to 5: ";
    cin >> n;

    int arr[5];

    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    int count=0;
    do{
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        count++;

    }while(next_permutation(arr,arr+n));

    cout<<"Total number opf combination: "<<count<<endl;
    return 0;
}

