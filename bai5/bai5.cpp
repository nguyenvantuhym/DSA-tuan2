#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    string input_file = "day1.inp";
    string output_file = "xuathien.out";
    ifstream fin(input_file);
    int n;
    vector<int> a;
    fin>>n;
    a.assign(n,0);
    for(int i = 0; i < n; i ++)
    {
        fin >>a[i];
    }
    


    ofstream fout(output_file);

    vector<bool> tmp;
    tmp.assign(n,true); 

    int max = 0, imax = 1;
    for( int i = 0;  i < n - 1; i++)
    {
        if(tmp[i] == true)
        {
            tmp[i]= false;
            int dem = 1;
            for(int j = i + 1; j <  n;j++)
            {
                if(a[i] == a[j]) 
                {
                    dem++;
                    tmp[j] = false;
                }
            }
            if(max < dem)
            {
                max = dem; imax = a[i];
            }
        }
    }
    fout<<imax <<" "<<max;
    fout.close();
    fin.close();
    return 0;
}