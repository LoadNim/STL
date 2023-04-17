#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3(8);
    v1.push_back(50); v1.push_back(10);
    v1.push_back(30); v1.push_back(80); v1.push_back(60);
    v2.push_back(20); v2.push_back(70); v2.push_back(40);
    
    cout<<"v1 출력\n";
    for(auto x : v1) cout<<x<<" ";
    cout<<"\nv2 출력\n";
    for(auto x : v2) cout<<x<<" ";
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout<<"\n합병 후 v3 출력\n";
    for(auto x : v3) cout<<x<<" ";
}