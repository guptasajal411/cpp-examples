#include<iostream>
using namespace std;

int main(){
    int size;
    int key;
    cout<<"enter sixe of array : ";
    cin>>size;
    cout<<"key : ";
    cin>>key;
    int hi = 0;
    int array[size];

    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    for(int i = 0; i < size; i++){
        if (key == array[i]){
        cout<<"key found at index : "<<i;
        hi = 1;
        }
    }
    if (hi == 0){
        cout<<"key not found in array";
    }

}