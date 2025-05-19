#include<bits/stdc++.h>

using namespace std;

class rectangle{
public:
    int height;
    int base;
    
    // example of inline and copy by reference combined
    inline rectangle (rectangle &ref) : height(ref.height), base(ref.base){
        cout << "object of class rectangle, " << this << ", is constructed as reference copy.\n";
    }
    
    rectangle(int height, int base){
        this->height = height;
        this->base = base;
        cout << "object of class rectangle, " << this << ", is constructed.\n";
    }

    // destructor
    ~rectangle(){
        cout << "object of class rectangle, " << this << ", is destroyed.\n";
    }
};

int main(){
    rectangle r1(3,4);
    return 0;
}