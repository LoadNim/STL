#include <iostream>
#include <cstring>
using namespace std;

class String{
    private:
        char* str;
    public:
        String(const char*);
        void operator=(const char*);
        friend ostream& operator<<(ostream& os, String& st);
};

String::String(const char* input){
    str = new char[strlen(input) + 1];
    strcpy(str, input);
}

void String::operator=(const char* input){
    delete []str;
    str = new char[strlen(input) + 1];
    strcpy(str, input);
}

ostream& operator<<(ostream& os, String& st){
    os<<st.str<<endl;
}

int main(){
    const char* sz = "Hello!";
    String s("Hi~!");
    cout<<"변경 전 s : "<<s;
    s = sz;
    cout<<"변경 후 s : "<<s;
}