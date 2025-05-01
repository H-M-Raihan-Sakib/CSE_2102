#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array :";
    cin >> n;

    cout << "Enter elements of array :";
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int del;
    cout << "Enter a number which to be deleted : ";
    cin >> del;

    for(int i=0; i<n; i++){
        if(a[i]==del){
            for(int j = i; j<n-1; j++){
                a[j] = a[j+1];
            }

            n--;
            i--;
        }
    }

    cout << "New Array :";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}