/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ignacy
 *
 * Created on October 5, 2016, 4:17 PM
 */

#include <iostream>
#include "utils.hpp"

using namespace std;

/*
 * 
 */
void insertion_sort(int *tab, int n){
    int element;
    for (int  i = 1; i < n; ++i ){
        element = tab[i];
        for (int j = i; j > 0 && tab[j - 1] > element; j-- ){
            swap(tab, j, j-1);
        }
    }
}
int main(int argc, char** argv) {
    cout<<"Hello"<<endl;
    int tab[5];
    tab[0] = 4;
    tab[1] = 0;
    tab[2] = 6;
    tab[3] = 1;
    tab[4] = 3;

    insertion_sort(tab, 5);
    printArray(tab, 5);
    cout<<"Hello git!"<<endl;
    return 0;
}

