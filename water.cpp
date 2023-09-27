#include<iostream>

using namespace std;

int maxarea(int height[], int n){
    int area = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            area = max(area, min(height[j],height[i])*(j-i));
        }
    }

    return area;
}


int main(){
    int n;
    cout<<"Enter the no. of ele: ";
    cin>>n;
    int arr[n];
    cout<<"Enter arr element: ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<maxarea(arr, n);
    return 0;

}