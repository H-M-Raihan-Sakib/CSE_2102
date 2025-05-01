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

    int x;
    cout << "Enter a number which you want to search : ";
    cin >> x;

    int loc = -1;

    for(int i=0; i<n; i++){
        if(a[i] == x){
            loc = i;
        }
    }

    cout << "Element has found at index : " << loc << endl;
}