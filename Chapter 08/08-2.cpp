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
    vector<int> v(5);
    generate_n(v.begin(), 5, fx);
    cout<<"원소 제거 전 vector 출력\n";
    for(auto x : v) cout<<x<<" ";
    v.erase(find(v.begin(), v.end(), 30));
    cout<<"\n원소 제거 후 vector 출력\n";
    for(auto x : v) cout<<x<<" ";
}