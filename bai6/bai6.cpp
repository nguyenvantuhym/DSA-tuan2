#include <iostream>
#include <string>
#include <fstream>
#include <vector>
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

    //xu ly

    for(int i = 0; i < n-1; i ++)
    {
        for(int j = i + 1;  j < n;  j++)
        {
            if(a[i] < a[j])
            {
                int tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    ofstream fout(output_file);

    for(int i = 0;  i < n; i ++)
    {
        fout<<a[i]<<" ";  
    }
    fout.close();
    fin.close();
    return 0;
}