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
    vector<int> v(10);
    generate_n(v.begin(), v.size(), fx);
    cout<<"회전 전 벡터 출력\n";
    for(auto x : v) cout<<x<<" ";
    vector<int>::iterator mid = find(v.begin(), v.end(), 70);
    rotate(v.begin(), mid, v.end());
    cout<<"\n회전 후 벡터 출력\n";
    for(auto x : v) cout<<x<<" ";
}