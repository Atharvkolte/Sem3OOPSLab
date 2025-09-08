#include<iostream>
using namespace std;

template<typename T>
void sortArray(T arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                T temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

template<typename T>
void printArray(T arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int intArr[] = {5, 2, 8, 1, 3};
    int size=5;
    cout << "Original Integer Array: ";
    printArray(intArr, size);
    sortArray(intArr, size);
    cout << "Sorted Integer Array: ";
    printArray(intArr, size);
    return 0;
}  
