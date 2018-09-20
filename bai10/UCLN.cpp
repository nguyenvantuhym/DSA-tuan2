#include <iostream>
#include <ctime>
using namespace std;

int UCLN(int a, int b)
{
    if(a > b)
    {
        if(a % b ==0) return b; else return UCLN(a % b, b);
    }
    else 
    {
        if(b % a ==0) return a; else return UCLN(b % a, a);
    }

}

int main()
{
    srand(time(NULL));
    int a = rand()%100;
    int b = rand()%100;
    cout<<a<<endl<<b<<endl;
    cout<<UCLN(a,b)<<endl;
    return 0;
}
