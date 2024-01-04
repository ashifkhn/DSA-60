#include <iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for (int i = 0;i<size;i+=2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }}

void printArray(int arr[],int size){
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int array[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    swapAlternate(array, 11);
    printArray(array, 11);
    return 0;
}