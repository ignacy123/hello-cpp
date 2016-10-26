#include "utils.hpp"
#include <iostream>

using namespace std;


void swap(int* arr, int indexOne, int indexTwo){
    int tmp = arr[indexOne];
    arr[indexOne] = arr[indexTwo];
    arr[indexTwo] = tmp;
    
}

void printArray(int* arr, int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}