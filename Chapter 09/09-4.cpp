#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3(5);
    v1.push_back(10); v1.push_back(20); v1.push_back(30); v1.push_back(40); v1.push_back(50);
    v2.push_back(5); v2.push_back(10); v2.push_back(20); v2.push_back(40); v2.push_back(80);
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), not2(less<int>()));
    cout<<"v1[i] > v2[i]?(not2(less<int>()))\n";
    for(auto x : v3) cout<<x<<" ";
    cout<<endl;

    vector<int> v;
    v.push_back(10); v.push_back(20); v.push_back(30); v.push_back(40); v.push_back(50);
    cout<<"25보다 작은 원소의 갯수(not1(bind1st(less<int>(), 25))) : ";
    cout<<count_if(v.begin(), v.end(), not1(bind1st(less<int>(), 25)))<<endl;
}