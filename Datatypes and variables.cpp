#include <iostream>
using namespace std;

int main()
{
    int a=123;
    cout<< a << endl;

    char b='v';
    cout<<b<<endl;

    bool bl=true;
    cout<<bl<<endl;

    float f =1.2;
    cout<<f<<endl;

    double d= 1.23;
    cout<<d<<endl;

    int sizea = sizeof(a);
    cout<<"Size of a ="<<sizea<<endl;
    
    int sizeb = sizeof(b);
    cout<<"Size of b ="<<sizeb<<endl;
    
    int sizebl = sizeof(bl);
    cout<<"Size of bl ="<<sizebl<<endl;
    
    int sizef = sizeof(f);
    cout<<"Size of f ="<<sizef<<endl;
    
    int sized = sizeof(d);
    cout<<"Size of d ="<<sized<<endl;


}