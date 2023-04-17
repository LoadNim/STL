#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(70); v.push_back(20); v.push_back(32);
    v.push_back(40); v.push_back(33); v.push_back(60);
    v.push_back(32); v.push_back(33); v.push_back(90); v.push_back(50);

    cout<<"작업 수행 전 vector 출력\n";
    for(auto x : v) cout<<x<<" ";
    sort(v.begin(), v.end());
    cout<<"\n정렬 수행 후 vector 출력\n";
    for(auto x : v) cout<<x<<" ";
    v.erase(unique(v.begin(), v.end()), v.end());
    cout<<"\n중복 제거 후 vector 출력\n";
    for(auto x : v) cout<<x<<" ";
}