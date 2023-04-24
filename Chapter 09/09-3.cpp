#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10); v.push_back(20); v.push_back(30); v.push_back(40); v.push_back(50);
    cout<<"25보다 큰 원소의 갯수(bind1st) : ";
    cout<<count_if(v.begin(), v.end(), bind1st(less<int>(), 25))<<endl;
    cout<<"25보다 작은 원소의 갯수(bind2nd) : ";
    cout<<count_if(v.begin(), v.end(), bind2nd(less<int>(), 25))<<endl;
}