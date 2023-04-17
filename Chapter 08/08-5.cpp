#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fx(){
    static int temp = 0;
    temp += 10;
    return temp;
}

int main(){
    vector<int> v1(10);
    vector<int> v2(10);
    vector<int> v3(10);
    generate_n(v1.begin(), v1.size(), fx);
    cout<<"v1 출력\n";
    for(auto x : v1) cout<<x<<" ";
    copy(v1.begin(), v1.end(), v2.begin());
    cout<<"\n복사 후 v2 출력\n";
    for(auto x : v2) cout<<x<<" ";
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), plus<int>());
    cout<<"\n원소의 합 출력\n";
    for(auto x : v3) cout<<x<<" ";
}