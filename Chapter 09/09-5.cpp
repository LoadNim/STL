#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Point{
    private:
        int x;
        int y;
    public:
        explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y){}
        void Print() const{cout<<x<<','<<y<<endl;}
        int GetX() const{return x;}
        int GetY() const{return y;}
};

void sum(Point& pt){
   pt = Point(pt.GetX() + 5, pt.GetY() + 5);
}

int main(){
    vector<Point> v;
    v.push_back(Point(1,1));
    v.push_back(Point(2,2));
    v.push_back(Point(3,3));
    v.push_back(Point(4,4));
    v.push_back(Point(5,5));

    for_each(v.begin(), v.end(), sum);
    for(auto x : v) x.Print();
}