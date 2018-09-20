#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string inp_file =  "search.inp";
    string out_file = "search.out"; 
    ifstream fin(inp_file);
    ofstream fout(out_file);
    int N, k;
    fin>>N;
    fin>>k;

    vector<int> A;
    A.assign(N,0);
    for(int i =0; i < N; i++)
    {
        fin>>A[i];
    }
    //doc file 
    

    //tim kiem 

    for(int i = 0; i < N; i++)
    {
        if(A[i] == k)
        {
            fout<<i;
            fout.close();
            fin.close();
            return 0;
    
        }
    }   
    fout<<"NO!";
    fout.close();
    fin.close();


    return 0;
}