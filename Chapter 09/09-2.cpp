#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename T>
struct Less : public binary_function<T, T, bool>{
    bool operator()(T& left, T& right){return left < right;}
};

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3(5);
    v1.push_back(10); v1.push_back(20); v1.push_back(30); v1.push_back(40); v1.push_back(50);
    v2.push_back(5); v2.push_back(10); v2.push_back(20); v2.push_back(40); v2.push_back(80);
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), Less<int>());
    cout<<"v1[i] < v2[i]?(Less<int>())\n";
    for(auto x : v3) cout<<x<<" ";
}