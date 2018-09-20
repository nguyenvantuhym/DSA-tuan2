#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void nhi(int n)
{
    if(n>1)
        {
            nhi(n/2);
            cout<<(n % 2);
        }
    else 
        {
            cout<<n;
        }
}

int main()
{
        srand(time(NULL));
        int n = rand()%1000;
        cout<<n<<endl;
        nhi(n);
       
        return 0;
}
