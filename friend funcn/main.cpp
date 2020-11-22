#include <iostream>

using namespace std;
class person
{
    int no;
public:
    friend void speak();
};

void speak(){


person p;
p.no =10;
cout<<"The no is  "<<p.no;
}


int main()
{
    speak();
    return 0;
}
