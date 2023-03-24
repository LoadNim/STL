#include <iostream>
using namespace std;

template <typename T>
void Copy(T& t, T& s, int n){
    for(int i = 0; i < n; ++i) t[i] = s[i];
}

int main(){
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[5];
    Copy(arr2, arr1, 5);
    for(auto x : arr2) cout<<x<<" ";
    cout<<endl<<endl;

    char myArr1[5] = {'a', 'b', 'c', 'd', 'e'};
    char myArr2[5];
    Copy(myArr2, myArr1, 5);
    for(auto x : myArr2) cout<<x<<" ";
}