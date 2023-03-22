#include <iostream>
#include <cstring>
using namespace std;

class String{
    private:
        char* str;
    public:
        String(const char*);
        operator const char*();
        friend ostream& operator<<(ostream& os, String& st);
};

String::String(const char* input){
    str = new char[strlen(input) + 1];
    strcpy(str, input);
}

String::operator const char *(){
    return str;
}

ostream& operator<<(ostream& os, String& st){
    os<<st.str<<endl;
    return os;
}

int main(){
    String s("Hello!");
    const char* sz = s;
    cout<<"s : "<<s;
    cout<<"sz : "<<sz<<endl;
}