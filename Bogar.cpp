#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    try { 
        cin>>a;
        if (a>0 && a<=100)
        cout<<"Valid Mark";
        else
        throw "e";
    }
    catch(const char* t){
        cout<<"Invalid Mark";
    }
}
