//
// Created by Edward on 2019-11-04.
//

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
struct bloc{
    char lastname[20],firstname[15],phone[11];
    int age;
};

int main(){
    cout << "Please enter the file name : ";
    char filename[21];
    cin >> filename;
    ofstream file(filename);
    
}