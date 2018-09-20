#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
void uocso(int n,int count)
{

  if( count > 0 && count < sqrt(n))
    {
        if (n % count == 0) 
            {
                cout<<count<<endl;
                uocso(n,count +1);
                cout<<(n / count)<<endl;
            } 
            else uocso(n,count + 1);
    }
}

using namespace std;
int main()
{
    srand(time(NULL));
    int n = rand()%1000;
    uocso(n,1);
    return 0;
}
