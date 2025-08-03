#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0;i<n;i++){
        cout << i << " " ;
    } 
    cout << endl;

    // can declare all the three parts outside the parenthesis () also
    int j =0;
    for(;j<n;){
        cout << j << " "; 
        j++;
    }
    cout << endl;

    // version 2
    j=0;
    for (; ; ){
        if(j>=n){
            break;
        }else{
            cout << j << " ";
        }
        j++;
    }
    cout << endl;

    // using multiple initializers
    int a=4, b=5;
    for (int i=0,j=1; i<a && j<b; i++,j++){
        cout << i << " " << j << endl;
    }
    cout << endl;
}

//here is my first comment
