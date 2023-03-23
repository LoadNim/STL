#include <iostream>
using namespace std;

class Equal{
    public:
        bool operator()(int, int);
};

bool Equal::operator()(int a, int b){
    if(a==b) return true;
    else return false;        
}

int main(){
    Equal cmp;
    if(cmp(10, 20)) cout<<"같다!"<<endl;
    else cout<<"다르다!"<<endl;
    
    if(cmp(20, 20)) cout<<"같다!"<<endl;
    else cout<<"다르다!"<<endl;
}