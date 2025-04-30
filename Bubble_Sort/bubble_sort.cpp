#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> a = {35, 18, 92, 28, 33, 42};

    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if(a[i]>=a[j]){
                int temp ;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else{
                continue;
            }
        }
    }

    for(int i=0; i<a.size(); i++){
        cout << a[i] << " " << endl;
    }


    return 0;
}