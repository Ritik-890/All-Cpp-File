#include <iostream>
using namespace std;

template <class T>
class Ritik
{
public:
    T data;
    Ritik(T a)
    {
        data = a;
    }
    void display()
    {
        cout << data;
    }
};

void fucn(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<" I am templatised func() "<<a<<endl;
}

int main()
{
    Ritik<float> r(6.25);
    cout << r.data << endl;
    r.display();
    func(8);   // Exact match takes the highest priority

    return 0;
}