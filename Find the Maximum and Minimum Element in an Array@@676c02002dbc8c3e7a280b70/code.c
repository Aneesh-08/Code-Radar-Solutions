// #include <iostream>  // Include input-output library
// using namespace std;  // Use standard namespace

int main() {  // Main function
    
    int x;
    cin>>x;
    int arr[x];
    for(int i = 0;i<x;i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < x;i++){
        for(int j = 0 ; j < x;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<arr[0]<<" "<<arr[x-1];




    return 0;  // Return 0 indicates successful execution
}
