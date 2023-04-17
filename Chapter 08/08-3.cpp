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
    cout<<"뒤집기 전 벡터 출력\n";
    for(auto x : v) cout<<x<<" ";
    reverse(find(v.begin(), v.end(), 10), find(v.begin(), v.end(), 50) + 1);
    cout<<"\n뒤집은 후 벡터 출력\n";
    for(auto x : v) cout<<x<<" ";
}