#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    v1.push_back(50); v1.push_back(10); v1.push_back(30); v1.push_back(80); v1.push_back(60);
    v2.push_back(20); v2.push_back(70); v2.push_back(40);
    vector<int> v3(v1.size() + v2.size());

    cout<<"v1 출력\n";
    for(auto x : v1) cout<<x<<" ";
    cout<<"\nv2 출력\n";
    for(auto x : v2) cout<<x<<" ";
    set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout<<"\nv1 과 v2의 합집합 v3 출력\n";
    for(auto x : v3) cout<<x<<" ";
}