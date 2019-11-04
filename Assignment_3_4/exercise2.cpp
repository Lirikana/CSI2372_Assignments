//
// Created by Edward on 2019-11-04.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int const NMAX = 81;
int main(){
    cout << "Give the filename to read : ";
    char input[21];
    cin >> input;
    ifstream file(input);
    char temp[256];
    int counter = 1;
    cout << "**** List of the file **** : " << input << endl;
    while(file.getline(temp,256)){
        cout << counter << "  " << temp << endl;
        counter++;
    }
}