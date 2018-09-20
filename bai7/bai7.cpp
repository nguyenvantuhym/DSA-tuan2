#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    string input_file = "input.inp";
    string output_file  = "output.out";
    ifstream fin(input_file);
    vector<int> a;
    int n;
    fin>>n;
    a.assign(n,0);
    for (int  i = 0; i < n;  i++)
    {
        fin>>a[i];
    }
    // doc file xong
    sort(a.begin(),a.end());
    //xu ly
    int dem = 1, max = 1, imax=a[0];
    
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            dem ++;
        }
        else  {
            if(max < dem)
            {
                max = dem;
                imax = a[i];
            }
            dem =1;
        }
    }
    ofstream fout(output_file);
     fout<<imax<<" "<<max;
    fout.close();
    fin.close();
    return 0;
}